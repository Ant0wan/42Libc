/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 14:39:26 by abarthel          #+#    #+#             */
/*   Updated: 2019/04/05 19:49:03 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "prs_struct.h"
#include "prefix.h"
#include "cast.h"
#include "format.h"

extern t_flags		g_flags;
extern t_prefix		g_prefix;

void							ft_lhexa(uintmax_t nb)
{
	reset_prefix();
	ft_cast_unbr(&nb);
	g_prefix.base = 16;
	g_prefix.size = 2;
	g_flags.plus = 0;
	if (g_flags.hash && nb > 0)
		g_prefix.prefix = "0x";
	else
		g_prefix.size = 0;
	g_prefix.ch_base = "0123456789abcdef";
	g_prefix.len = ft_nbrlen((intmax_t)nb);
	format(nb);
}

void							ft_uhexa(uintmax_t nb)
{
	reset_prefix();
	ft_cast_unbr(&nb);
	g_prefix.base = 16;
	g_prefix.size = 2;
	g_flags.plus = 0;
	if (g_flags.hash && nb > 0)
		g_prefix.prefix = "0X";
	else
		g_prefix.size = 0;
	g_prefix.ch_base = "0123456789ABCDEF";
	g_prefix.len = ft_nbrlen((intmax_t)nb);
	format(nb);
}
