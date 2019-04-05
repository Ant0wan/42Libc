/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 14:39:26 by abarthel          #+#    #+#             */
/*   Updated: 2019/04/05 15:20:10 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "prs_struct.h"
#include "prefix.h"
#include "cast.h"
#include "format.h"

extern t_flags		g_flags;
extern t_prefix		g_prefix;

void							ft_nbr(intmax_t nb)
{
	ft_cast_nbr(&nb);
	g_prefix.len = ft_nbrlen(nb);
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
