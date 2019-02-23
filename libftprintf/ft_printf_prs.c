/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_prs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 12:39:43 by abarthel          #+#    #+#             */
/*   Updated: 2019/02/23 13:26:15 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

#include "dispatcher.h"
#include "libft.h"
#include "prs_struct.h"
#include "struct_disp.h"

#include <stdio.h> // DEBUGGING

static va_list	g_ap_origin;
t_ret			g_ret;
t_options		g_options =
{.width = 0, .precision = 0, .i_ap = 0, .val_dol = 1};

static _Bool	isspecifier(char c)
{
	unsigned short	i;

	i = -1;
	while (++i < NB_PTR)
		if (!(c ^ g_specifier[i].type))
			return (1);
	return (0);
}

static _Bool	prs_specifier(const char *format, va_list ap)
{
	t_specifier	s_functions;
	_Bool		specifier;

	if (!(format[g_ret.i] ^ '%')) // SPECIFIER
	{
		specifier = 1;
		while (format[++g_ret.i] && specifier) // WHEN IN %
		{
			if (!(format[g_ret.i] ^ '.')) // check precision
			{
				if (!(format[++g_ret.i] ^ '*'))
				{
					g_options.precision = va_arg(ap, int);
					++g_options.i_ap;
				}
			}
			else if (!(format[g_ret.i] ^ '*')) // to add flags, and modifiers and dollar parser
			{
				g_options.width = va_arg(ap, int);
				++g_options.i_ap;
			}
			else if (isspecifier(format[g_ret.i]))
			{
				specifier = 0;
				s_functions = dispatcher(format[g_ret.i]);
				if (s_functions.f)
					s_functions.wrapper(s_functions.f, ap);
			}
		}
	}
	return (0);
}

char			printf_prs(const char *format, va_list ap)
{
	va_copy(g_ap_origin, ap);
	while (format[++g_ret.i] && !(prs_specifier(format, ap)))
		ft_putchar(format[g_ret.i]); // DEBUGGING
//		(*ret)[g_ret.i] = format[g_ret.i]; // find a way to properly write on the allocated string
	return (0);
}
