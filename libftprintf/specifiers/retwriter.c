/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   retwriter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 11:48:50 by abarthel          #+#    #+#             */
/*   Updated: 2019/03/05 16:26:01 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prs_struct.h"
#include "prs_tools.h"
#include "libft.h"

#ifndef BUFF
# define BUFF 1024
#endif

/*
** RETWRITER handles char type. It writes to the given string and applies
** options such as width, precision, minus, plus...
** RETWRITER is called by the specifier functions returned by the dispatcher.
*/

extern t_ret		g_ret;
extern t_options	g_options; 
extern _Bool		g_error;

static inline void	ft_strcpy_special(char *dst, const char *src)
{
	int	count;

	count = -1;
	while (src[++count])
		dst[count] = src[count];
	g_ret.i += count - 1;
}

void				retwriter(char *str, int size)
{
	int	width_diff;
	
	width_diff = 0;
	if (g_ret.i + size >= g_ret.max)
	{
		ft_expand_ret(size < g_options.width ? g_options.width : size);
		if (g_error)
		{
			return ;
		}
	}
	if (g_options.min = 0)
	{
		while (size + width_diff < g_options.width)
		{
			++width_diff;
			g_ret.ret[++g_ret.i] = ' ';
		}
		ft_strcpy_special(&g_ret.ret[++g_ret.i], str);
	}
}
