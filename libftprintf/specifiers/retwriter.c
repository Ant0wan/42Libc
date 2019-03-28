/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   retwriter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 11:48:50 by abarthel          #+#    #+#             */
/*   Updated: 2019/03/28 13:34:16 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prs_struct.h"
#include "ft_expand_ret.h"
#include "libft.h"

#ifndef BUFF
# define BUFF 1024
#endif

extern t_ret		g_ret;
extern _Bool		g_error;

static inline void	ft_strcpy_special(char *dst, const char *src, int size)
{
	int	count;

	count = -1;
	while (src[++count] && count < size)
		dst[count] = src[count];
	g_ret.i += count - 1;
}

extern inline void	retwriter(char *str, int size)
{
	if (g_ret.i + size >= g_ret.max)
	{
		ft_expand_ret(size);
		if (g_error)
			return ;
	}
	ft_strcpy_special(&g_ret.ret[++g_ret.i], str, size);
}
