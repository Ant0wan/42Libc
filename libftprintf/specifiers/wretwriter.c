/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wretwriter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 11:48:50 by abarthel          #+#    #+#             */
/*   Updated: 2019/03/05 18:37:03 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "prs_struct.h"
#include "prs_tools.h"
#include "libft.h"
#include "ft_wchar.h"

#ifndef BUFF
# define BUFF 1024
#endif

extern t_ret	g_ret;
extern _Bool	g_error;

static inline void	ft_wcsncpy_special(char *dst, const wchar_t *src)
{
	int	count;

	count = -1;
	while (src[++count])
		dst[count] = (char)src[count];
	g_ret.i += count - 1;
}

extern inline void	wretwriter(wchar_t *ws, int size)
{
	int width_diff;

	width_diff = 0;
	if (g_ret.i + size + g_options.width >= g_ret.max)
	{
		ft_expand_ret(size < g_options.width ? g_options.width : size);
		if (g_error)
		{
			return ;
		}
	}
	if (g_flags.minus == 0)
	{
		while (size + width_diff < g_options.width)
		{
			++width_diff;
			g_ret.ret[++g_ret.i] = ' ';
		}
		ft_wcsncpy_special(&g_ret.ret[++g_ret.i], ws);
	}
	else if (g_flags.minus == 1)
	{
		ft_wcsncpy_special(&g_ret.ret[++g_ret.i], ws);
		while (size + width_diff < g_options.width)
		{
			++width_diff;
			g_ret.ret[++g_ret.i] = ' ';
		}
	}
}
