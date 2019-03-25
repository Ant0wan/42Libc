/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 14:39:26 by abarthel          #+#    #+#             */
/*   Updated: 2019/03/25 14:42:27 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "prs_struct.h"
#include "conversion.h"
#include "format_tools.h"
#include "specifiers.h"

#ifndef BITS64_PTR
# define BITS64_PTR 8
#endif

#ifndef BITS32_PTR
# define BITS32_PTR 4
#endif

extern t_modifier	g_modifier;
extern _Bool		g_error;
extern t_conv		g_conv;

void	ft_p(void *ptr)
{
	g_conv.base_ret = "0123456789abcdef";
	g_conv.base = 16;
	g_conv.isp = 1;
	if (sizeof(void*) == BITS64_PTR)
		g_modifier.l = 1;
	else if (sizeof(void*) == BITS32_PTR)
		g_modifier.l = 0;
	g_flags.hash = 1;
	g_modifier.ll = 0;
	g_modifier.j = 0;
	g_modifier.t = 0;
	g_modifier.h = 0;
	g_modifier.hh = 0;
	g_modifier.z = 0;
	g_modifier.upl = 0;
	ft_xlow((uintmax_t)ptr);
}
