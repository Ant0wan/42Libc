/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prefix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 14:27:24 by abarthel          #+#    #+#             */
/*   Updated: 2019/04/08 15:40:09 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <locale.h>

#include "libft.h"
#include "prefix.h"

t_prefix	g_prefix;

extern inline void	reset_prefix(void)
{
	g_prefix.len = 0;
	g_prefix.base = 10;
	g_prefix.size = 0;
	g_prefix.neg = 0;
	g_prefix.prefix = NULL;
	g_prefix.ch_base = "0123456789ABCDEF";
	g_prefix.lc = localeconv();
	g_prefix.len_thousands_sep = ft_strlen(g_prefix.lc->thousands_sep);
}
