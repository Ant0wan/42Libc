/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_y.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 17:38:39 by abarthel          #+#    #+#             */
/*   Updated: 2019/04/08 17:57:45 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prs_struct.h"
#include "ft_expand_ret.h"

extern t_flags		g_flags;
extern t_modifier	g_modifier;
extern t_options	g_options;

void	ft_y(void)
{
	while (g_ret.i + 14 >= g_ret.max)
		ft_expand_ret(14);
	if (g_flags.zero)
	{
		g_ret.ret[++g_ret.i] = '\e';
		g_ret.ret[++g_ret.i] = '[';
		g_ret.ret[++g_ret.i] = '0';
		g_ret.ret[++g_ret.i] = 'm';
	}
	else
	{
		g_ret.ret[++g_ret.i] = '\e';
		g_ret.ret[++g_ret.i] = '[';
		g_ret.ret[++g_ret.i] = '3';
		g_ret.ret[++g_ret.i] = '8';
		g_ret.ret[++g_ret.i] = ';';
		g_ret.ret[++g_ret.i] = '5';
		g_ret.ret[++g_ret.i] = ';';
		g_ret.ret[++g_ret.i] = '8';
		g_ret.ret[++g_ret.i] = '2';
		g_ret.ret[++g_ret.i] = 'm';
	}
}
