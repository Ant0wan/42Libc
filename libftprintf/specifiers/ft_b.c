/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_b.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 17:00:19 by abarthel          #+#    #+#             */
/*   Updated: 2019/04/05 18:12:32 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

#include "prs_struct.h"
#include "specifiers.h"
#include "prefix.h"
#include "format.h"

#ifndef	nb_BITS
# define nb_BITS 8
#endif

extern t_flags		g_flags;
extern t_modifier	g_modifier;
extern t_prefix		g_prefix;

static inline size_t	ft_type_len(void)
{
	if (g_modifier.hh)
		return (sizeof(char) * nb_BITS);
	else if (g_modifier.h)
		return (sizeof(short) * nb_BITS);
	else if (g_modifier.l)
		return (sizeof(long) * nb_BITS);
	else if (g_modifier.ll)
		return (sizeof(long long) * nb_BITS);
	else if (g_modifier.j)
		return (sizeof(intmax_t) * nb_BITS);
	else if (g_modifier.t)
		return (sizeof(ptrdiff_t) * nb_BITS);
	else if (g_modifier.z)
		return (sizeof(size_t) * nb_BITS);
	else
		return (sizeof(int) * nb_BITS);
}

void	ft_b(intmax_t nb)
{
	g_prefix.base = 2;
	g_prefix.size = 2;
	g_flags.plus = 0;
	g_flags.zero = 0;
	if (g_flags.hash && nb > 0)
		g_prefix.prefix = "0b";
	else
		g_prefix.size = 0;
	g_prefix.ch_base = "0123456789ABCDEF";
	g_options.precision = 0;
	g_prefix.len = ft_type_len();
	format(nb);
}
