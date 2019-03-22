/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrformat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/14 18:06:34 by abarthel          #+#    #+#             */
/*   Updated: 2019/03/22 13:06:34 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

#include "prs_struct.h"
#include "specifiers.h"
#include "retwriter.h"
#include "libft.h"

#ifndef G_ERROR
# define G_ERROR 1
#endif

#ifndef BASE
# define BASE 16
#endif

#ifndef BASE_L
# define BASE_L "0123456789abcdef"
#endif

extern t_modifier	g_modifier;
extern _Bool		g_error;

extern inline void	ft_xformat(intmax_t nb, char *str, int size, int len, 
		_Bool negative)
{
	intmax_t	rest;
	const char	*s_base;

	rest = nb;
	s_base = BASE_L;
	if (g_options.precision >= 0)
		g_flags.zero = 0;
	// STILL APOSTROPHES TO HANDLE
	if (g_flags.minus)
	{
		if (g_options.precision <= 0)
			g_options.precision = len;
		if (g_flags.plus || negative)
			++g_options.precision;
		if (g_flags.space && nb >= 0)
		{
			++len;
			++g_options.precision;
		}
		while (size > 0)
		{
			--size;
			if (g_options.width > g_options.precision && size >= len)
			{
				--g_options.width;
				str[size] = ' ';
			}
			else if (len > 0 && rest)
			{
				if (nb == 0)
					--len;
				--len;
				--g_options.precision;
				--g_options.width;
				str[size] = s_base[rest % BASE];
				rest = (rest - (rest % BASE)) / BASE;
			}
			else if (len > 0 && nb == 0 && !(g_options.precision))
			{
				len -= 2;
				str[size] = '0';
				--g_options.precision;
				--g_options.width;
			}
			else if (g_options.precision > 0)
			{
				--g_options.precision;
				--g_options.width;
				if (g_flags.space && !(size))
					str[size] = ' ';
				else
					str[size] = '0';
			}
			else if (g_flags.space)
				str[size] = ' ';
		}
		if (negative)
			str[size] = '-';
		else if (g_flags.plus)
			str[size] = '+';
	}
	else
	{
		while (size > 0)
		{
			--size;
			if (len > 0 && (rest || nb == 0))
			{
				--len;
				--g_options.precision;
				str[size] = s_base[rest % BASE];
				rest = (rest - (rest % BASE)) / BASE;
			}
			else if (g_options.precision > 0)
			{
				--g_options.precision;
				--g_options.width;
				str[size] = '0';
			}
			else if (g_flags.zero)
			{
				if (size == 0 && (negative || g_flags.plus))
				{
					g_flags.zero = 0;
					++size;
				}
				else
					str[size] = '0';
			}
			else if (negative || g_flags.plus || g_flags.space)
			{
				if (negative)
				{
					negative = 0;
					g_flags.plus = 0;
					str[size] = '-';
				}
				else if (g_flags.plus)
				{
					g_flags.plus = 0;
					str[size] = '+';
				}
				else if (g_flags.space)
					str[size] = ' ';
			}
			else if (g_flags.hash)
			{
				str[size] = 'x';
				--size;
				--g_options.width;
				str[size] = '0';
				g_flags.hash = 0;
			}
			else
				str[size] = ' ';
			--g_options.width;
		}
	}
}
