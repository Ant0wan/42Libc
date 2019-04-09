/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_y.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 17:38:39 by abarthel          #+#    #+#             */
/*   Updated: 2019/04/09 14:19:41 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prs_struct.h"
#include "ft_expand_ret.h"

extern t_flags		g_flags;
extern t_modifier	g_modifier;
extern t_options	g_options;

/*
** ANSI/VT100 compliant
*/

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
	if (g_options.width)
	{
		g_ret.ret[++g_ret.i] = '\e';
		g_ret.ret[++g_ret.i] = '[';
		g_ret.ret[++g_ret.i] = '3';
		g_ret.ret[++g_ret.i] = '8';
		g_ret.ret[++g_ret.i] = ';';
		g_ret.ret[++g_ret.i] = '5';
		g_ret.ret[++g_ret.i] = ';';
		// here value foreground
		g_ret.ret[++g_ret.i] = 'm';
	}
	if (g_options.precision >= 0)
	{
		g_ret.ret[++g_ret.i] = '\e';
		g_ret.ret[++g_ret.i] = '[';
		g_ret.ret[++g_ret.i] = '4';
		g_ret.ret[++g_ret.i] = '8';
		g_ret.ret[++g_ret.i] = ';';
		g_ret.ret[++g_ret.i] = '5';
		g_ret.ret[++g_ret.i] = ';';
		// here value background
		g_ret.ret[++g_ret.i] = 'm';
	}
	if (g_flags.hash) //bold
	{
		g_ret.ret[++g_ret.i] = '\e';
		g_ret.ret[++g_ret.i] = '[';
		g_ret.ret[++g_ret.i] = '1';
		g_ret.ret[++g_ret.i] = 'm';
	}
	if (g_flags.minus) // faint
	{
		g_ret.ret[++g_ret.i] = '\e';
		g_ret.ret[++g_ret.i] = '[';
		g_ret.ret[++g_ret.i] = '2';
		g_ret.ret[++g_ret.i] = 'm';
	}
	if (g_flags.plus) // italic
	{
		g_ret.ret[++g_ret.i] = '\e';
		g_ret.ret[++g_ret.i] = '[';
		g_ret.ret[++g_ret.i] = '3';
		g_ret.ret[++g_ret.i] = 'm';
	}
	if (g_flags.apost) // underline
	{
		g_ret.ret[++g_ret.i] = '\e';
		g_ret.ret[++g_ret.i] = '[';
		g_ret.ret[++g_ret.i] = '4';
		g_ret.ret[++g_ret.i] = 'm';
	}

}
