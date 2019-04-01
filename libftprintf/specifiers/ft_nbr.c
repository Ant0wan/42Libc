/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 14:39:26 by abarthel          #+#    #+#             */
/*   Updated: 2019/04/01 22:25:21 by abarthel         ###   ########.fr       */
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

static inline void				ret_nbr(intmax_t nb, unsigned short len)
{
	int	i;

	(void)nb;
	i = -1;
	while (++i < len)
	{
		g_ret.ret[++g_ret.i] = 'O';
	}
}

#include <stdio.h>
void							ft_nbr(intmax_t nb)
{
	int				size;
	unsigned short	len;

	ft_cast_nbr(&nb);
	len = ft_nbrlen(nb);
	printf("len:%d\n", len);
	size = len > g_options.precision ? len : g_options.precision;
	size = size > g_options.width ? len : g_options.width;
	++size;
	while (g_ret.i + size >= g_ret.max)
		ft_expand_ret(size);
	ret_nbr(nb, len);
}
