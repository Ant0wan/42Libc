/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 14:39:26 by abarthel          #+#    #+#             */
/*   Updated: 2019/04/04 16:22:53 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include <limits.h>

#include "prs_struct.h"
#include "ft_expand_ret.h"
#include "prefix.h"
#include "format.h"

extern t_modifier	g_modifier;
extern t_flags		g_flags;
extern t_prefix		g_prefix;

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

void							ft_nbr(intmax_t nb)
{
	ft_cast_nbr(&nb);
	g_flags.hash = 0;
	g_prefix.base = 10;
	g_prefix.size = 1;
	if (nb < 0)
		g_prefix.prefix = "-";
	else if (g_flags.plus)
		g_prefix.prefix = "+";
	else if (g_flags.space)
		g_prefix.prefix = " ";
	else
		g_prefix.size = 0;
	g_prefix.ch_base = "0123456789ABCDEF";
	format(nb);
}
