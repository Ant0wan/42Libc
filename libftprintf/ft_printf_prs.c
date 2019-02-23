/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_prs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 12:39:43 by abarthel          #+#    #+#             */
/*   Updated: 2019/02/23 10:52:25 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

#include "dispatcher.h"
#include "libft.h"
#include "prs_struct.h"
#include "struct_disp.h"

static va_list	ap_origin;
t_ret			g_ret;

static _Bool	isspecifier(char c)
{
	unsigned short	i;

	i = -1;
	while (++i < NB_PTR)
		if (!(c ^ g_specifier[i].type))
			return (1);
	return (0);
}

static void		prs_specifier(const char *format, va_list ap)
{
	t_specifier	s_functions;
	_Bool		specifier;

	if (!(format[g_ret.i] ^ '%'))
	{
		specifier = 1;
		while (format[++g_ret.i] && specifier)
		{
			if (!(format[g_ret.i] ^ '*')) // to add flags, and modifiers and dollar parser
				(void)ap; // there is a need for a * structure keeping value * (.* the closest to specifier)
			else if (isspecifier(format[g_ret.i]))
			{
				specifier = 0;
				s_functions = dispatcher(format[g_ret.i]);
				if (s_functions.f)
					s_functions.wrapper(s_functions.f, ap);
			}
		}
	}
}

char			printf_prs(char **ret, const char *format, va_list ap)
{
	g_ret.ret = (char*)ret;
	g_ret.i = -1;
	va_copy(ap_origin, ap);
	while (format[++g_ret.i])
	{
		prs_specifier(format, ap);
		ft_putchar(format[g_ret.i]); // DEBUGGING
//		(*ret)[g_ret.i] = format[g_ret.i]; // find a way to properly write on the allocated string
	}
	return (0);
}
