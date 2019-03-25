/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_xupp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 14:39:26 by abarthel          #+#    #+#             */
/*   Updated: 2019/03/25 13:55:04 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "prs_struct.h"
#include "conversion.h"
#include "format_tools.h"

extern t_modifier	g_modifier;
extern _Bool		g_error;
extern t_conv		g_conv;

void	ft_xupp(uintmax_t nb)
{
	g_conv.base_ret = "0123456789ABCDEF";
	g_conv.base = 16;
	g_conv.isupp = 1;
	ft_x(nb);
}
