/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 14:39:26 by abarthel          #+#    #+#             */
/*   Updated: 2019/04/09 18:47:21 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "prs_struct.h"
#include "ft_expand_ret.h"
#include "prefix.h"
#include "libft.h"
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

static inline void				pre_format_str(void)
{
	while (!(g_flags.minus) && g_options.width - g_prefix.len > 0)
	{
		--g_options.width;
		g_ret.ret[++g_ret.i] = ' ';
	}
}

static inline void	format_str(void *str)
{
	int	size;

	size = g_options.width < g_prefix.len ? g_prefix.len : g_options.width;
	while (g_ret.i + size >= g_ret.max)
		ft_expand_ret(size);
	pre_format_str();
	ret_str(str);
	while (g_flags.minus && g_options.width > 0)
	{
		--g_options.width;
		g_ret.ret[++g_ret.i] = ' ';
	}
}

void				ft_str(void	*str)
{
	reset_prefix();
	if (g_modifier.l)
		g_prefix.len = ft_wcslen((wchar_t*)str);
	else
		g_prefix.len = ft_strlen((char*)str);
	if (g_options.precision > -1 && g_options.precision < g_prefix.len)
		g_prefix.len = g_options.precision;
	format_str(str);
}

void				ft_wstr(void *str)
{
	g_modifier.l = 1;
	ft_str(str);
}
