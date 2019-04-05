/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_octal.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 14:39:26 by abarthel          #+#    #+#             */
/*   Updated: 2019/04/05 16:02:11 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "prs_struct.h"
#include "prefix.h"
#include "cast.h"
#include "format.h"

extern t_flags		g_flags;
extern t_options	g_options;
extern t_prefix		g_prefix;

void							ft_octal(uintmax_t nb)
{
	ft_cast_unbr(&nb);
	g_prefix.base = 8;
	g_prefix.size = 1;
	g_flags.plus = 0;
	if (g_flags.hash && nb > 0)
		g_prefix.prefix = "0";
	else 
		g_prefix.size = 0;
	g_prefix.ch_base = "0123456789ABCDEF";
	g_prefix.len = ft_nbrlen((intmax_t)nb);
	if (g_options.precision > g_prefix.len)
		g_prefix.size = 0;
	format(nb);
}
