/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unbr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 20:01:40 by abarthel          #+#    #+#             */
/*   Updated: 2019/04/05 18:32:58 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "prs_struct.h"
#include "specifiers.h"
#include "prefix.h"
#include "cast.h"
#include "format.h"

extern t_flags	g_flags;
extern t_prefix	g_prefix;

void	ft_unbr(uintmax_t nb)
{
	ft_cast_unbr(&nb);
	g_prefix.len = ft_unbrlen(nb);
	g_flags.hash = 0;
	g_flags.space = 0;
	g_flags.plus = 0;
	g_prefix.base = 10;
	g_prefix.size = 0;
	g_prefix.neg = 0;
	g_prefix.ch_base = "0123456789ABCDEF";
	format(nb);
}
