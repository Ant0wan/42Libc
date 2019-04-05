/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 14:39:26 by abarthel          #+#    #+#             */
/*   Updated: 2019/04/05 15:56:08 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "prs_struct.h"
#include "ft_expand_ret.h"
#include "prefix.h"

extern t_flags		g_flags;
extern t_options	g_options;
extern t_prefix		g_prefix;

extern inline unsigned short	ft_nbrlen(intmax_t nb)
{
	intmax_t		rest;
	unsigned short	len;

	len = 0;
	rest = nb;
	while (rest)
	{
		++len;
		rest = (rest - (rest % g_prefix.base)) / g_prefix.base;
	}
	return (len > 0 ? len : 1);
}

extern inline unsigned short	ft_unbrlen(uintmax_t nb)
{
	uintmax_t		rest;
	unsigned short	len;

	len = 0;
	rest = nb;
	while (rest)
	{
		++len;
		rest = (rest - (rest % g_prefix.base)) / g_prefix.base;
	}
	return (len > 0 ? len : 1);
}

static inline void				ret_nbr(uintmax_t nb, short len)
{
	g_ret.i += len;
	while (len--)
	{
		g_ret.ret[g_ret.i] = g_prefix.ch_base[nb % g_prefix.base];
		nb = (nb - (nb % g_prefix.base)) / g_prefix.base;
		--g_ret.i;
	}
}

static inline void				width_precision(intmax_t nb)
{
	while (!(g_flags.zero) && !(g_flags.minus) && g_options.width - g_prefix.len
			- g_prefix.size > 0)
	{
		if (g_options.width - g_options.precision
					- g_prefix.size <= 0)
			break ;
		--g_options.width;
		g_ret.ret[++g_ret.i] = ' ';
	}
	if (g_prefix.size)
		while (*g_prefix.prefix)
		{
			g_ret.ret[++g_ret.i] = *g_prefix.prefix;
			++g_prefix.prefix;
		}
	if (g_flags.zero)
		g_options.precision = g_flags.plus | g_flags.hash | g_flags.space
			| (nb < 0) ? g_options.width - g_prefix.size : g_options.width;
	while (g_options.precision - g_prefix.len > 0)
	{
		g_ret.ret[++g_ret.i] = '0';
		--g_options.precision;
		--g_options.width;
	}
}

extern inline void				format(intmax_t nb)
{
	int		size;

	g_prefix.len = !(g_options.precision) && !(nb) ? 0 : g_prefix.len;
	size = g_prefix.len > g_options.precision
		? g_prefix.len : g_options.precision;
	size = size > g_options.width ? g_prefix.len : g_options.width;
	size += g_prefix.size;
	while (g_ret.i + size >= g_ret.max)
		ft_expand_ret(size);
	width_precision(nb);
	ret_nbr(nb > 0 ? nb : nb * -1, g_prefix.len);
	g_ret.i += g_prefix.len;
	while (g_flags.minus && g_options.width - g_prefix.len > 0)
	{
		--g_options.width;
		g_ret.ret[++g_ret.i] = ' ';
		if (g_options.width == g_prefix.len && (g_flags.plus || g_flags.hash
					|| g_flags.space || nb < 0))
			g_ret.i -= g_prefix.size;
	}
}