/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 14:39:26 by abarthel          #+#    #+#             */
/*   Updated: 2019/04/03 19:35:48 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include <limits.h>

#include "prs_struct.h"
#include "ft_expand_ret.h"

#ifndef G_ERROR
# define G_ERROR 1
#endif

extern t_modifier	g_modifier;
extern _Bool		g_error;

static inline void				ft_cast_nbr(intmax_t *nb)
{
	if (g_modifier.hh)
		*nb = (signed char)(*nb);
	else if (g_modifier.h)
		*nb = (short)(*nb);
	else if (g_modifier.l)
		*nb = (long)(*nb);
	else if (g_modifier.ll)
		*nb = (long long)*nb;
	else if (g_modifier.j)
		*nb = (intmax_t)(*nb);
	else if (g_modifier.t)
		*nb = (ptrdiff_t)(*nb);
	else if (g_modifier.z)
		*nb = (size_t)(*nb);
	else
		*nb = (int)(*nb);
}

static inline unsigned short	ft_nbrlen(intmax_t nb)
{
	intmax_t		rest;
	unsigned short	len;

	len = 0;
	rest = nb;
	while (rest)
	{
		++len;
		rest = (rest - (rest % 10)) / 10;
	}
	return (len > 0 ? len : 1);
}

static inline void				ret_nbr(uintmax_t nb, short len)
{
	g_ret.i += len;
	while (len--)
	{
		g_ret.ret[g_ret.i] = nb % 10 ^ 0x30;
		nb = (nb - (nb % 10)) / 10;
		--g_ret.i;
	}
}

void							ft_nbr(intmax_t nb)
{
	int		size;
	short	len;
	char	prefix_size;

	ft_cast_nbr(&nb);
	len = ft_nbrlen(nb);
	size = len > g_options.precision ? len : g_options.precision;
	size = size > g_options.width ? len : g_options.width;
	size += 2; //include max size of prefix
	prefix_size = 1; // size of prefix 0b 0X 0x - + ' '
	while (g_ret.i + size >= g_ret.max)
		ft_expand_ret(size);
	while (!(g_flags.zero) && !(g_flags.minus) && g_options.width - len
			- (g_flags.plus | g_flags.space | (nb < 0)) > 0) // format width
	{
		if (!(g_options.width - g_options.precision - (g_flags.plus | g_flags.space | (nb < 0)))) // test to put preci
			break ;
		--g_options.width;
		g_ret.ret[++g_ret.i] = ' ';
	}
	if (nb < 0)
		g_ret.ret[++g_ret.i] = '-';
	else if (g_flags.plus)
		g_ret.ret[++g_ret.i] = '+';
	else if (g_flags.space)
		g_ret.ret[++g_ret.i] = ' ';
	if (g_flags.zero)
	{
		g_options.precision = g_flags.plus | g_flags.space | (nb < 0) ? g_options.width - prefix_size : g_options.width;
		g_options.width = 0;
	}
	while (g_options.precision - len > 0)
	{
		g_ret.ret[++g_ret.i] = '0';
		--g_options.precision;
		--g_options.width;
	}
	ret_nbr(nb > 0 ? nb : nb * -1, len);
	g_ret.i += len;
	while (g_flags.minus && g_options.width - len > 0) // format width
	{
		--g_options.width;
		g_ret.ret[++g_ret.i] = ' ';
		if (g_options.width == len && (g_flags.plus || g_flags.space || nb < 0))
			--g_ret.i;
	}
}
