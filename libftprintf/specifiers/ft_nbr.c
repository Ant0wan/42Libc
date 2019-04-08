/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 14:39:26 by abarthel          #+#    #+#             */
/*   Updated: 2019/04/08 15:30:57 by abarthel         ###   ########.fr       */
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
	reset_prefix();
	ft_cast_nbr(&nb);
	g_prefix.len = ft_nbrlen(nb);
	g_flags.hash = 0;
	if (nb < 0)
	{
		g_prefix.size = 1;
		g_prefix.neg = 1;
		g_prefix.prefix = "-";
	}
	else if (g_flags.plus)
	{
		g_prefix.size = 1;
		g_prefix.prefix = "+";
	}
	else if (g_flags.space)
	{
		g_prefix.size = 1;
		g_prefix.prefix = " ";
	}
	format(nb < 0 ? nb * -1 : nb);
}
