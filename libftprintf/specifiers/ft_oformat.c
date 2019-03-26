/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_oformat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/14 18:06:34 by abarthel          #+#    #+#             */
/*   Updated: 2019/03/26 11:36:33 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

#include "prs_struct.h"
#include "specifiers.h"
#include "retwriter.h"
#include "libft.h"
#include "conversion.h"

#ifndef OCTAL_B
# define OCTAL_B 8
#endif

extern t_modifier	g_modifier;
extern _Bool		g_error;
extern t_conv		g_conv;

#include <stdio.h>
extern inline void	ft_oformat(uintmax_t nb, char *str, int size, int len)
{
	uintmax_t	rest;

	rest = nb;
	if (g_flags.minus)
	{
		if (g_flags.hash && (nb > 0 || g_conv.isp) && g_conv.base != OCTAL_B)
		{
			g_options.precision += 2;
			len += 2;
		}
		else if (g_flags.hash && (nb > 0 || g_conv.isp) && g_conv.base == OCTAL_B)
		{
			len += 1;
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
				str[size] = g_conv.base_ret[rest % g_conv.base];
				rest = (rest - (rest % g_conv.base)) / g_conv.base;
			}
			else if (len > 0 && nb == 0 && !(g_options.precision))
			{
				len -= 2;
				str[size] = ' ';
				--g_options.precision;
				--g_options.width;
			}
			else
			{
				if (g_flags.hash && g_conv.base == OCTAL_B)
				{
					str[size] = '0';
				}
				else if (size < 2 && g_flags.hash && (nb > 0 || g_conv.isp))
				{
					str[size] = g_conv.isupp ? 'X' : 'x';
					--size;
					str[size] = '0';
				}
				else
					str[size] = '0';
			}
		}
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
				str[size] = g_conv.base_ret[rest % g_conv.base];
				rest = (rest - (rest % g_conv.base)) / g_conv.base;
			}
			else if (g_options.precision > 0 || (g_conv.base == OCTAL_B && g_options.precision >= 0 && nb == 0 && g_options.width == -1))
			{
				--g_options.precision;
				--g_options.width;
				str[size] = '0';
			}
			else if (g_flags.hash && (nb > 0 || g_conv.isp) && g_conv.base != OCTAL_B)
			{
				str[size] = g_conv.isupp ? 'X' : 'x';
				--size;
				--g_options.width;
				str[size] = '0';
				g_flags.hash = 0;
			}
			else if (g_flags.hash && g_conv.base == OCTAL_B && g_options.precision < 0 && nb > 0)
			{
				str[size] = '0';
				g_flags.hash = 0;
			}
			else
				str[size] = ' ';
			--g_options.width;
		}
	}
}
