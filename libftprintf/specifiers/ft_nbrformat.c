/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrformat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/14 18:06:34 by abarthel          #+#    #+#             */
/*   Updated: 2019/03/15 11:20:33 by abarthel         ###   ########.fr       */
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

/* PUT ON TOP OF EACH FILE THE LOGIC OF THE ALGORITHMS  */

//          FOR NON MINUS FLAGGED
//    |------------------------------- while: width ----------|
//                                                  |   --size;
//                                                  |-- nbr --|
//                                                  |    --len;
//                                               |-- preci ---|
//                                               |       --pre;
//                                             |- sign -------|
//                                             |      nil sign;
//    |                                  fill space           |
//    |-------------------------------------------------------|


//          FOR MINUS FLAGGED
//    |--------------------- while: width > precision --------|
//    --width;                                                |
//    --size;                                                 |
//    |------ nbr -----------|
//    --len;                 |
//    --precision;           |
//    |----precision --|
//    -- precision;    |
//    |-|
//    sign;
//    |-------------------------------------------------------|

#include <stdio.h> // DEBUGGING
extern inline void	ft_format(intmax_t nb, char *str, int size,	int len,
		_Bool negative)
{
	intmax_t	rest;

	rest = nb;
	if (g_options.precision >= 0)
		g_flags.zero = 0;
	if (g_flags.minus) // STILL MINUS CASE TO HANDLE, AND LOOK AT APOSTROPHE
	{
		if (g_options.precision <= 0)
			g_options.precision = len;
		if (g_flags.plus || negative)
			++g_options.precision;
		while (size > 0)
		{
			--size;
			if (g_options.width > g_options.precision)
			{
				--g_options.width;
				str[size] = ' ';
			}
			else if (len > 0 && (rest || nb == 0))
			{
				--len;
				--g_options.precision;
				--g_options.width;
				str[size] = rest % 10 < 0 ? ((rest % 10) * -1) ^ 0x30
					: (rest % 10) ^ 0x30;
				rest = (rest - (rest % 10)) / 10;
			}
			else if (g_options.precision > 0)
			{
				--g_options.precision;
				--g_options.width;
				str[size] = '0';
			}
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
				str[size] = rest % 10 < 0 ? ((rest % 10) * -1) ^ 0x30
					: (rest % 10) ^ 0x30;
				rest = (rest - (rest % 10)) / 10;
			}
			else if (g_options.precision > 0)
			{
				--g_options.precision;
				str[size] = '0';
			}
			else if (((negative || g_flags.plus)
						&& !(g_flags.zero)) || (size == 0 && g_flags.zero))
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
				else if (g_flags.zero)
					str[size] = '0';
			}
			else
				str[size] = g_flags.zero ? '0' : ' ';
			--g_options.width;
		}
	}
}
