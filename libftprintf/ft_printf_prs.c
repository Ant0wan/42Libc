/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_prs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 12:39:43 by abarthel          #+#    #+#             */
/*   Updated: 2019/03/26 15:09:49 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

#include "dispatcher.h"
#include "libft.h"
#include "prs_struct.h"
#include "struct_disp.h"
#include "prs_tools.h"
#include "specifiers.h"

static va_list	g_ap_origin;
t_ret			g_ret;
t_modifier		g_modifier =
{.hh = 0, .h = 0, .l = 0, .ll = 0, .j = 0, .t = 0, .z = 0, .upl = 0};
t_options		g_options =
{.width = -1, .precision = -1, .i_ap = 0, .val_dol = 0};
t_flags			g_flags =
{.hash = 0, .zero = 0, .minus = 0, .space = 0, .plus = 0, .apost = 0};
_Bool			g_error = 0;

static inline void	get_precision(const char *format, va_list ap)
{
	while (!(format[g_ret.fmt_i] ^ '.'))
		++g_ret.fmt_i;
	if (!(format[g_ret.fmt_i] ^ '*'))
	{
		g_options.precision = va_arg(ap, int);
		++g_options.i_ap;
	}
	else if (!((format[g_ret.fmt_i] & '0')) ^ '0')
	{
		if (format[g_ret.fmt_i] >= '0' && format[g_ret.fmt_i] <= '9')
			g_options.precision = ft_atoi_special(format);
		else // added for case "%.d"
		{
			--g_ret.fmt_i; //
			g_options.precision = 0;
		}
	}
}

static inline void	get_flags(const char *format, _Bool *specifier)
{
	if (!(format[g_ret.fmt_i] ^ '#'))
		g_flags.hash = 1;
	else if (!(format[g_ret.fmt_i] ^ '-'))
	{
		g_flags.minus = 1;
		g_flags.zero = 0;
	}
	else if (!(format[g_ret.fmt_i] ^ '0'))
		g_flags.zero = !(g_flags.minus) ? 1 : 0;
	else if (!(format[g_ret.fmt_i] ^ '+'))
	{
		g_flags.plus = 1;
		g_flags.space = 0;
	}
	else if (!(format[g_ret.fmt_i] ^ ' '))
		g_flags.space = !(g_flags.plus) ? 1 : 0;
	else if (!(format[g_ret.fmt_i] ^ '\''))
		g_flags.apost = 1;
	else
	{
		*specifier = 0;
		ft_chr(format[g_ret.fmt_i]);
	}
}

static inline _Bool	get_modifier(const char *format)
{
	if (!(format[g_ret.fmt_i] ^ 'l'))
	{
		g_modifier.l = 1;
		if (!(format[g_ret.fmt_i + 1] ^ 'l'))
		{
			++g_ret.fmt_i;
			g_modifier.l = 0;
			g_modifier.ll = 1;
		}
		return (0);
	}
	else if (!(format[g_ret.fmt_i] ^ 'h'))
	{
		g_modifier.h = 1;
		if (!(format[g_ret.fmt_i + 1] ^ 'h'))
		{
			++g_ret.fmt_i;
			g_modifier.h = 0;
			g_modifier.hh = 1;
		}
		return (0);
	}
	else if (!(format[g_ret.fmt_i] ^ 'j'))
	{
		g_modifier.j = 1;
		return (0);
	}
	else if (!(format[g_ret.fmt_i] ^ 't'))
	{
		g_modifier.t = 1;
		return (0);
	}
	else if (!(format[g_ret.fmt_i] ^ 'z'))
	{
		g_modifier.z = 1;
		return (0);
	}
	else if (!(format[g_ret.fmt_i] ^ 'L'))
	{
		g_modifier.upl = 1;
		return (0);
	}
	else
		return (1);
}

static inline _Bool	prs_specifier(const char *format, va_list ap)
{
	void	*(*f)();
	_Bool	specifier;
	int		doltest;

	while (!(format[g_ret.fmt_i] ^ '%'))
	{
		reset_globals();
		specifier = 1;
		while (format[++g_ret.fmt_i] && specifier)
		{
			if (format[g_ret.fmt_i] > '0' && format[g_ret.fmt_i] <= '9')
			{
				if ((doltest = ft_getif_dollar(&format[g_ret.fmt_i])))
					g_options.val_dol = doltest;
				else
					g_options.width = ft_atoi_special(format);
			}
			else if (!(format[g_ret.fmt_i] ^ '.'))
				get_precision(format, ap);
			else if (!(format[g_ret.fmt_i] ^ '*'))
			{
				g_options.width = va_arg(ap, int);
				++g_options.i_ap;
			}
			else if (!((format[g_ret.fmt_i] & ' ') ^ ' ')
					&& format[g_ret.fmt_i] < '1')
				get_flags(format, &specifier);
			else if ((f = dispatcher(format[g_ret.fmt_i])))
			{
				specifier = 0;
				if (g_options.val_dol)
					va_copy(ap, g_ap_origin);
				wrapper(f, ap);
			}
			else if (specifier)
			{
				if (get_modifier(format))
					specifier = 0;
			}
		}
	}
	return (0);
}

int					printf_prs(const char *format, va_list ap)
{
	g_ret.fmt_i = -1;
	va_copy(g_ap_origin, ap);
	if (!(format))
		return (-1);
	while (format[++g_ret.fmt_i] && !(prs_specifier(format, ap)))
	{
		if (g_error)
		{
			g_error = 0;
			return (-1);
		}
		if (!(format[g_ret.fmt_i]))
			break ;
		while (g_ret.i + 1 >= g_ret.max)
			ft_expand_ret(1);
		g_ret.ret[++g_ret.i] = format[g_ret.fmt_i];
	}
	return (g_ret.i + 1);
}
