/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_format.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 14:39:26 by abarthel          #+#    #+#             */
/*   Updated: 2019/04/10 16:48:07 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "prs_struct.h"
#include "ft_expand_ret.h"
#include "prefix.h"
#include "ft_wchar.h"

extern t_flags		g_flags;
extern t_options	g_options;
extern t_modifier	g_modifier;
extern t_prefix		g_prefix;

static inline void				ret_str(char *str)
{
	while (g_prefix.len--)
	{
		g_ret.ret[++g_ret.i] = *str++;
		--g_options.width;
	}
}

// |--prec-----|
// | C |  C |  C |  C |  C |
// |
//
//
//



#include <stdio.h>
static inline void				ret_wcs(wchar_t *wcs)
{

	int diff;
	printf("len:%d\n", g_prefix.len);
	printf("wd_:%d\n", ft_ewcswidth(wcs, 2));
	diff = ft_ewcswidth(wcs, g_prefix.len) - g_prefix.len;
	printf("diff:%d\n", diff);
//	printf("ft_:%zu\n", ft_ewcslen(wcs));
	while (g_prefix.len)
	{
		--g_options.width;
		g_ret.ret[++g_ret.i] = 'X';
		--g_prefix.len;
	}
//	while (g_prefix.len)
	(void)wcs;
	//	g_ret.ret[++g_ret.i] = *str++;
	//	--g_options.width;
}

static inline void				pre_format_str(void)
{
	while (!(g_flags.minus) && g_options.width - g_prefix.len > 0)
	{
		--g_options.width;
		g_ret.ret[++g_ret.i] = ' ';
	}
}

extern inline void				str_format(void *str)
{
	int	size;

	size = g_options.width < g_prefix.len ? g_prefix.len : g_options.width;
	while (g_ret.i + size >= g_ret.max)
		ft_expand_ret(size);
	pre_format_str();
	if (g_modifier.l)
		ret_wcs(str);
	else
		ret_str(str);
	while (g_flags.minus && g_options.width > 0)
	{
		--g_options.width;
		g_ret.ret[++g_ret.i] = ' ';
	}
}
