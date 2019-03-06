/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wretwriter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 11:48:50 by abarthel          #+#    #+#             */
/*   Updated: 2019/03/06 16:38:11 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "prs_struct.h"
#include "prs_tools.h"
#include "libft.h"
#include "utf8.h"

#ifndef BUFF
# define BUFF 1024
#endif

#ifndef RET_ERROR
# define RET_ERROR -1
#endif

extern t_ret	g_ret;
extern _Bool	g_error;

#include "ft_wchar.h"
#include <stdio.h>

static inline void	ft_wcsncpy_special(char *dst, wchar_t *src)
{
	int		count;
	int		add;
	char    buf[4];
	wchar_t	wc;

	count = -1;
	add = -1;
	while (src[++count])
	{
		++add;
		wc = src[count];
		if (wc >= 0x00)
		{
			if (wc <= 0x007F)
				dst[count + add] = (char)src[count];
			else
			{
				buf[0] = 0;
				buf[1] = 0;
				buf[2] = 0;
				buf[3] = 0;
				if (utf8_encoder(&wc) == RET_ERROR)
				{
					g_error = 1;
					return ;
				}
				else
				{
					printf("value before:%d\n", (int)dst[count + add - 1]);
					printf("value onspot:%d\n", (int)dst[count + add]);
					if ((buf[0] = wc >> 24))
					{
						printf("buf0:%d\t, add val:%d\n", (int)buf[0], add);
						dst[count + add] = buf[0];
						++add;
					}
					if ((buf[1] = wc >> 16))
					{
						printf("buf1:%d\t, add val:%d\n", (int)buf[1], add);
						dst[count + add] = buf[1];
						++add;
					}
					if ((buf[2] = wc >> 8))
					{
						dst[count + add] = buf[2];
						printf("buf2:%d\t, add val:%d\n", (int)buf[2], add);
						++add;
					}
					if ((buf[3] = wc))
					{
						dst[count + add] = buf[3];
						printf("buf3:%d\t, add val:%d\n", (int)buf[3], add);
						++add;
					}
					--add;
				}
			}
		}
	}
	g_ret.i += add > count ? add + 6 : count - 1;
}

extern inline void	wretwriter(wchar_t *ws, int size)
{
	int width_diff;

	width_diff = 0;
	if (g_ret.i + size + g_options.width >= g_ret.max)
	{
		ft_expand_ret(size < g_options.width ? g_options.width : size);
		if (g_error)
			return ;
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
