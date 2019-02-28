/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   retwriter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 11:48:50 by abarthel          #+#    #+#             */
/*   Updated: 2019/02/28 12:23:04 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUFF
# define BUFF 1024
#endif

#include <stdlib.h>

extern t_ret	g_ret;

static void	ft_strcpy_special(char *dst, const char *src)
{
	size_t	count;

	count = -1;
	while (src[++count])
		dst[count] = src[count];
	g_ret.i += count;
}

void		retwriter(char *str, int size)
{
	//	char	*new_ret;
	//	if (g_ret.i + size >= max)
	//		if (!(*new_ret = (char*)ft_memalloc(sizeof(**ret) * (max + BUFF + 1))))
	//			return (RET_ERROR);
	//	set the new max
	//	copy the ret to new ret
	//	g_ret.ret = new_ret; // set new ret

	// copy char *str to g_ret.ret
	ft_strcpy_special(&g_ret.ret[g_ret.i], str);
}
