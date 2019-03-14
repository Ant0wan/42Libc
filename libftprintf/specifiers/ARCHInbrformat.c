/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrformat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/14 18:06:34 by abarthel          #+#    #+#             */
/*   Updated: 2019/03/14 18:30:55 by abarthel         ###   ########.fr       */
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

extern t_modifier	g_modifier;
extern _Bool		g_error;

#include <stdio.h>
extern inline void	ft_format(intmax_t nb, char *str, int size,	int len,
		_Bool negative)
{
	intmax_t	rest;
	int			test = 0;

	rest = nb;
	if (g_flags.minus)
	{
		if (g_options.precision > 0)
		{
			test = g_flags.plus > negative ? g_flags.plus : negative;
			test += g_options.precision;
			while (size > test)
				str[--size] = ' ';
		}
		else if (g_options.width > 0)
		{
			test = g_flags.plus > negative ? g_flags.plus : negative;
			while (size > len + test)
				str[--size] = ' ';
		}
		while (rest && size >= 0)
		{
			str[--size] = rest % 10 < 0
				? ((rest % 10) * -1) ^ 0x30: (rest % 10) ^ 0x30;
			rest = (rest - (rest % 10)) / 10;
		}
		while (size > 0)
			str[--size] = '0';
		if (negative)
			str[0] = '-';
		else if (g_flags.plus)
			str[0] = '+';
	}
	else
	{
		while (rest && size >= 0)
		{
			str[--size] = rest % 10 < 0
				? ((rest % 10) * -1) ^ 0x30: (rest % 10) ^ 0x30;
			rest = (rest - (rest % 10)) / 10;
		}
		if (nb == 0)
		   if (g_options.precision == -1 && size > 0)
				str[--size] = '0';
		if (g_options.precision > 0)
		{
			g_options.precision -= len;
			while (g_options.precision && size > 0)
			{
				//printf("O");
				str[--size] = '0';
				--g_options.precision;
			}
			if (g_flags.plus && size > 0)
			{
				if (negative)
					str[--size] = '-';
				else
					str[--size] = '+';
			}
		}
		if (negative && !(g_flags.zero))
		{
			if (size > 0)
				str[--size] = '-';
			else
				str[0] = '-';
		}
		else if (g_flags.plus && !(g_flags.zero))
		{
			if (size > 0)
				str[--size] = '+';
			else
				str[0] = '+';
		}
		if (g_flags.zero && g_options.precision)
		{
			while (--size >= 0)
				str[size] = '0';
		}
		else
		{
			while (--size >= 0)
				str[size] = ' ';
		}
		if (g_flags.zero && negative)
		{
			if (size > 0)
				str[--size] = '-';
			else
				str[0] = '-';
		}
		else if (g_flags.zero && g_flags.plus)
		{
			if (size > 0)
				str[--size] = '+';
			else
				str[0] = '+';
		}
	}
}
