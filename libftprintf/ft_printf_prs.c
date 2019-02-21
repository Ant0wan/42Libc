/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_prs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 12:39:43 by abarthel          #+#    #+#             */
/*   Updated: 2019/02/21 12:05:24 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdarg.h>

#include "dispatcher.h"
#include "libft.h"
#include "prs_struct.h"
#include "struct_disp.h"

static t_ret	g_ret;

int	printf_prs(char **ret, const char *format, va_list ap)
{
	t_specifier	s_functions;

	s_functions.f = NULL;
	s_functions.wrapper = NULL;
	g_ret.ret = (char*)ret;
	g_ret.i = -1;
	while (format[++g_ret.i])
	{
		if (format[g_ret.i] == '%')
			if (format[g_ret.i + 1])
			{
				s_functions = dispatcher(format[g_ret.i + 1]);
				if ((s_functions.f))
					s_functions.f(va_arg(ap, typeof(ap)));
				while (format[g_ret.i])
					++g_ret.i;
			}
		(*ret)[g_ret.i] = format[g_ret.i];
	}
	return (0);
}
