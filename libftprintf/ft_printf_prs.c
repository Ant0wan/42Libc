/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_prs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 12:39:43 by abarthel          #+#    #+#             */
/*   Updated: 2019/02/21 18:10:58 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

#include "dispatcher.h"
#include "libft.h"
#include "prs_struct.h"
#include "struct_disp.h"
#include "valist_cpy.h"

#define RET_ERROR -1

extern	t_ap	g_ap;
t_ret			g_ret;

int	printf_prs(char **ret, const char *format, va_list ap)
{
	t_specifier	s_functions;

	g_ret.ret = (char*)ret;
	g_ret.i = -1;
	if (valist_cpy(ap, &g_ap.ap_list))
		return (RET_ERROR);
	while (format[++g_ret.i])
	{
		if (format[g_ret.i] == '%')
			if (format[g_ret.i + 1])
			{
				s_functions = dispatcher(format[g_ret.i + 1]);
				if (s_functions.f)
					s_functions.wrapper(s_functions.f, ap);
				if (format[g_ret.i])
					++g_ret.i;
			}
		(*ret)[g_ret.i] = format[g_ret.i];
	}
	return (0);
}
