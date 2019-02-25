/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_prs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 12:39:43 by abarthel          #+#    #+#             */
/*   Updated: 2019/02/25 18:00:07 by abarthel         ###   ########.fr       */
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
static t_flags	g_flags =
{.hash = 0, .zero = 0, .minus = 0, .space = 0, .plus = 0, .apost = 0};

static int		ft_atoi_special(const char *str)
{
	int	nbr;

	nbr = 0;
	while (str[g_ret.i] > 47 && str[g_ret.i] < 58)
	{
		nbr = nbr * 10 + (str[g_ret.i] ^ '0');
		++g_ret.i;
	}
	--g_ret.i;
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
	while (!(format[g_ret.i] ^ '.'))
		++g_ret.i;
	if (!(format[g_ret.i] ^ '*'))
	{
		g_options.precision = va_arg(ap, int);
		++g_options.i_ap;
	}
	else if (!((format[g_ret.i] & '0')) ^ '0')
		if (format[g_ret.i] > '0' && format[g_ret.i] <= '9')
			g_options.precision = ft_atoi_special(format);
}

static void		get_flags(const char *format, _Bool *specifier)
{
	if (!(format[g_ret.i] ^ '#'))
		g_flags.hash = 1;
	else if (!(format[g_ret.i] ^ '-'))
	{
		g_flags.minus = 1;
		g_flags.zero = 0;
	}
	else if (!(format[g_ret.i] ^ '0'))
	{
		if (!(g_flags.minus))
			g_flags.zero = 1;
	}
	else if (!(format[g_ret.i] ^ '+'))
	{
		g_flags.plus = 1;
		g_flags.space = 0;
	}
	else if (!(format[g_ret.i] ^ ' '))
	{
		if (!(g_flags.plus))
			g_flags.space = 1;
	}
	else if (!(format[g_ret.i] ^ '\''))
		g_flags.apost = 1;
	else // better filter
	{
		*specifier = 0;
		ft_putchar(format[g_ret.i]); //write the character with character wrapper and character function
	}
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
//			printf("here:%s", &format[g_ret.i]);
			if (format[g_ret.i] > '0' && format[g_ret.i] <= '9')
				g_options.width = ft_atoi_special(format);
			else if (!(format[g_ret.i] ^ '.'))
				get_precision(format, ap);
			else if (!(format[g_ret.i] ^ '*')) // to add dollar parser taking * and numbers
			{
				g_options.width = va_arg(ap, int);
				++g_options.i_ap;
			}
			else if (!((format[g_ret.i] & ' ') ^ ' ') && format[g_ret.i] < '1') // too many char going in !!
			{
				get_flags(format, &specifier);
			}
			else if (isspecifier(format[g_ret.i]))
			{
				specifier = 0;
				s_functions = dispatcher(format[g_ret.i]);
				if (s_functions.f)
					s_functions.wrapper(s_functions.f, ap);
			}
			else if (specifier)
			{
				specifier = 0;
				ft_putchar(format[g_ret.i]); //write the character with character wrapper and character function
			}
//			printf(" end:%s", &format[g_ret.i]);
		}
//		printf("\nwidth: %d\n", g_options.width);
//		printf("precision: %d\n", g_options.precision);
//		printf("hash:%d\n", g_flags.hash);
//		printf("zero:%d\n", g_flags.zero);
//		printf("minus:%d\n", g_flags.minus);
//		printf("space:%d\n", g_flags.space);
//		printf("plus:%d\n", g_flags.plus);
//		printf("apost:%d\n", g_flags.apost);
	}
	return (0);
}

char			printf_prs(const char *format, va_list ap)
{
	va_copy(g_ap_origin, ap);
	while (format[++g_ret.i] && !(prs_specifier(format, ap)))
	{
		ft_putchar(format[g_ret.i]); // DEBUGGING
		g_flags.hash = 0;
		g_flags.zero = 0;
		g_flags.minus = 0;
		g_flags.space = 0;
		g_flags.plus = 0;
		g_flags.apost = 0;
	//		(*ret)[g_ret.i] = format[g_ret.i]; // find a way to properly write on the allocated string
	}
	return (0);
}
