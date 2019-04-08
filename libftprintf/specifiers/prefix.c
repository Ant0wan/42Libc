/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prefix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 14:27:24 by abarthel          #+#    #+#             */
/*   Updated: 2019/04/08 14:15:37 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "prefix.h"

t_prefix	g_prefix =
{.len = 0, .base = 10, .size = 0, .neg = 0
	, .prefix = NULL, .ch_base = "0123456789abcdef"};

extern inline void	reset_prefix(void)
{
	g_prefix.len = 0;
	g_prefix.base = 10;
	g_prefix.size = 0;
	g_prefix.neg = 0;
	g_prefix.prefix = NULL;
	g_prefix.ch_base = "0123456789ABCDEF";
}
