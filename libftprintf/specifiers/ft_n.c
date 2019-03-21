/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_n.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 14:39:26 by abarthel          #+#    #+#             */
/*   Updated: 2019/03/21 16:36:12 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

#include "prs_struct.h"

extern t_modifier	g_modifier;

void	ft_n(intmax_t *ptr)
{
	if (g_modifier.hh)
		*ptr = (signed char)(g_ret.i + 1);
	else if (g_modifier.h)
		*ptr = (short)(g_ret.i + 1);
	else if (g_modifier.l)
		*ptr = (long)(g_ret.i + 1);
	else if (g_modifier.ll)
		*ptr = (long long)(g_ret.i + 1);
	else if (g_modifier.j)
		*ptr = (intmax_t)(g_ret.i + 1);
	else if (g_modifier.t)
		*ptr = (ptrdiff_t)(g_ret.i + 1);
	else if (g_modifier.z)
		*ptr = (size_t)(g_ret.i + 1);
	else
		*ptr = (int)(g_ret.i + 1);
}
