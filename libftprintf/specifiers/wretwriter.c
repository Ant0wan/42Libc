/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wretwriter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 11:48:50 by abarthel          #+#    #+#             */
/*   Updated: 2019/03/05 14:53:03 by abarthel         ###   ########.fr       */
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

static void	ft_wcsncpy_special(char *dst, const wchar_t *src)
{
	int	count;

	count = -1;
	while (src[++count])
	{
		dst[count] = (char)src[count];
	}
	g_ret.i += count - 1;
}

void		wretwriter(wchar_t *ws, int size)
{
	if (g_ret.i + size >= g_ret.max)
	{
		ft_expand_ret(size);
		if (g_error)
		{
			return ;
		}
	}
	ft_wcsncpy_special(&g_ret.ret[++g_ret.i], ws);
}
