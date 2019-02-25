/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_prs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 12:39:43 by abarthel          #+#    #+#             */
/*   Updated: 2019/02/25 12:05:34 by abarthel         ###   ########.fr       */
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

static int		ft_atoi_special(const char *str)
{
	int	nbr;

	nbr = 0;
	while (str[g_ret.i] > 47 && str[g_ret.i] < 58)
	{
		nbr = nbr * 10 + (str[g_ret.i] ^ '0');
		++g_ret.i;
	}
	return (nbr);
}

static _Bool	isspecifier(char c)
{
	unsigned short	i;

	i = -1;
	while (++i < NB_PTR)
		if (!(c ^ g_specifier[i].type))
			return (1);
	return (0);
}

static void		get_precision(const char *format, va_list ap)
{
	printf("check: |%s", &format[g_ret.i]);
	while (!(format[g_ret.i] ^ '.'))
	{
		++g_ret.i;
		printf("check2: |%s", &format[g_ret.i]);
	}
	if (!(format[g_ret.i] ^ '*'))
	{
		printf("GET precision from wildcard%s\n", &format[g_ret.i]);
		g_options.precision = va_arg(ap, int);
		++g_options.i_ap;
	}
	else if ((format[g_ret.i] & '0') == '0' ? 1: 0)
	{
		if (format[g_ret.i] > '0' && format[g_ret.i] <= '9')
		{
			printf("%s\n", &format[g_ret.i]);
			g_options.precision = ft_atoi_special(format);
		}
	}
	printf("precision: %d\n", g_options.precision);
}

static _Bool	prs_specifier(const char *format, va_list ap)
{
	t_specifier	s_functions;
	_Bool		specifier;

	if (!(format[g_ret.i] ^ '%'))
	{
		specifier = 1;
		while (format[++g_ret.i] && specifier)
		{
			printf("loop: |%s\n", &format[g_ret.i]);
			//add flags parsing here ? like 0, -, # etc
			if (!(format[g_ret.i] ^ '.'))
				get_precision(format, ap);
			else if (!(format[g_ret.i] ^ '*')) // to add flags, and modifiers and dollar parser
			{
				g_options.width = va_arg(ap, int);
				++g_options.i_ap;
				printf("width: %d\n", g_options.width);
			}
	//		else if ((format[g_ret.i] & '0') == '0' ? 1: 0)
	//		{
	//			if (format[g_ret.i] > '0' && format[g_ret.i] <= '9')
	//				g_options.width = ft_atoi_special(format);
	//			++g_ret.i;
	//		} // A revoir !...
			else if (isspecifier(format[g_ret.i]))
			{
				specifier = 0;
				s_functions = dispatcher(format[g_ret.i]);
				if (s_functions.f)
					s_functions.wrapper(s_functions.f, ap);
			}
			printf("\nwidth: %d\n", g_options.width);
			printf("precision: %d\n", g_options.precision);
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
