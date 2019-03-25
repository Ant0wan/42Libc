/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_xlow.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 14:39:26 by abarthel          #+#    #+#             */
/*   Updated: 2019/03/25 13:55:19 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "prs_struct.h"
#include "conversion.h"
#include "format_tools.h"

extern t_modifier	g_modifier;
extern _Bool		g_error;
extern t_conv		g_conv;

void	ft_xlow(uintmax_t nb)
{
	g_conv.base_ret = "0123456789abcdef";
	g_conv.base = 16;
	g_conv.isupp = 0;
	ft_x(nb);
}
