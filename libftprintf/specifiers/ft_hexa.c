/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 14:39:26 by abarthel          #+#    #+#             */
/*   Updated: 2019/04/04 16:30:49 by abarthel         ###   ########.fr       */
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

static inline void				ft_cast_nbr(uintmax_t *nb)
{
	if (g_modifier.hh)
		*nb = (unsigned char)(*nb);
	else if (g_modifier.h)
		*nb = (unsigned short)(*nb);
	else if (g_modifier.l)
		*nb = (unsigned long)(*nb);
	else if (g_modifier.ll)
		*nb = (unsigned long long)*nb;
	else if (g_modifier.j)
		*nb = (uintmax_t)(*nb);
	else if (g_modifier.t)
		*nb = (ptrdiff_t)(*nb);
	else if (g_modifier.z)
		*nb = (size_t)(*nb);
	else
		*nb = (unsigned int)(*nb);
}

void							ft_lhexa(uintmax_t nb)
{
	ft_cast_nbr(&nb);
	g_prefix.base = 16;
	g_prefix.size = 2;
	g_flags.plus = 0;
	if (g_flags.hash && nb > 0)
		g_prefix.prefix = "0x";
	else
		g_prefix.size = 0;
	g_prefix.ch_base = "0123456789abcdef";
	format(nb);
}

void							ft_uhexa(uintmax_t nb)
{
	ft_cast_nbr(&nb);
	g_prefix.base = 16;
	g_prefix.size = 2;
	g_flags.plus = 0;
	if (g_flags.hash && nb > 0)
		g_prefix.prefix = "0X";
	else
		g_prefix.size = 0;
	g_prefix.ch_base = "0123456789ABCDEF";
	format(nb);
}

void							ft_octa(uintmax_t nb)
{
	ft_cast_nbr(&nb);
	g_prefix.base = 8;
	g_prefix.size = 2;
	g_flags.plus = 0;
	if (g_flags.hash && nb > 0)
		g_prefix.prefix = "0o";
	else
		g_prefix.size = 0;
	g_prefix.ch_base = "0123456789abcdef";
	format(nb);
}
