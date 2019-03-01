/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   retwriter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 11:48:50 by abarthel          #+#    #+#             */
/*   Updated: 2019/03/01 14:56:01 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prs_struct.h"
#include "libft.h"

#ifndef BUFF
# define BUFF 1
#endif

#define RET_ERROR -1

extern t_ret	g_ret;
extern _Bool	g_error;

static void	ft_strcpy_special(char *dst, const char *src)
{
	int	count;

	count = -1;
	while (src[++count])
		dst[count] = src[count];
	g_ret.i += count - 1;
}

void		retwriter(char *str, int size)
{
	char	*new_ret;

	if (g_ret.i + size >= g_ret.max)
	{
		g_ret.max += BUFF;
		if (!(new_ret = (char*)ft_memalloc(sizeof(*g_ret.ret) * g_ret.max)))
		{
			g_error = RET_ERROR;
			return ;
		}
		else
		{
			ft_strcpy(new_ret, g_ret.ret);
			g_ret.ret = new_ret;
			ft_strcpy_special(&g_ret.ret[++g_ret.i], str);
		}
	}
}
