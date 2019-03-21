/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 18:19:57 by abarthel          #+#    #+#             */
/*   Updated: 2019/03/21 16:18:20 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <limits.h>

#include "prs_struct.h"
#include "retwriter.h"
#include "libft.h"
#include "ft_wchar.h"
#include "utf8.h"

#ifndef G_ERROR
# define G_ERROR 1
#endif

#ifndef ET_ERROR
# define RET_ERROR -1
#endif

extern t_options	g_options;
extern t_modifier	g_modifier;

static inline int	ft_get_wstr_object_size(int len)
{
	int size;

	size = len;
	if (g_options.precision != -1 && g_options.precision >= 0)
		if (g_options.precision < len)
			size = g_options.precision;
	if (g_options.width > size)
		size = g_options.width;
	return (size);
}

static inline void	ft_fill_object(char *obj, wchar_t wc)
{
	int	i;

	i = 0;
	if (g_flags.minus)
	{
		utf8_encoder(&wc);
		if ((char)(wc >> 24))
		{
			obj[i] = (char)(wc >> 24);
			++i;
			--g_options.precision;
			--g_options.width;
		}
		if ((char)(wc >> 16))
		{
			obj[i] = (char)(wc >> 16);
			++i;
			--g_options.precision;
			--g_options.width;
		}
		if ((char)(wc >> 8))
		{
			obj[i] = (char)(wc >> 8);
			++i;
			--g_options.precision;
			--g_options.width;
		}
		if ((char)wc)
		{
			obj[i] = (char)wc;
			++i;
			--g_options.precision;
			--g_options.width;
		}
		while (g_options.width > 0)
		{
			obj[i] = ' ';
			++i;
			--g_options.width;
		}
	}
	else
	{
		if (g_options.width > 0)
		{
			while (g_options.width - enchrlen(wc))
			{
				obj[i] = ' ';
				++i;
				--g_options.width;
			}
		}
		utf8_encoder(&wc);
		if ((char)(wc >> 24))
		{
			obj[i] = (char)(wc >> 24);
			++i;
			--g_options.precision;
			--g_options.width;
		}
		if ((char)(wc >> 16))
		{
			obj[i] = (char)(wc >> 16);
			++i;
			--g_options.precision;
			--g_options.width;
		}
		if ((char)(wc >> 8))
		{
			obj[i] = (char)(wc >> 8);
			++i;
			--g_options.precision;
			--g_options.width;
		}
		if ((char)wc)
		{
			obj[i] = (char)wc;
			++i;
			--g_options.precision;
			--g_options.width;
		}
	}
}

void				ft_wchr(wchar_t wc)
{
	char	*object;
	int		size;
	int		len;

	if (g_options.width >= INT_MAX - g_ret.i)
	{
		g_error = G_ERROR;
		return ;
	}
	len = enchrlen(wc);
	size = ft_get_wstr_object_size(len);
	if (!(object = (char*)ft_memalloc(sizeof(char) * size)))
	{
		g_error = G_ERROR;
		return ;
	}
	ft_fill_object(object, wc);
	retwriter(object, size);
	free(object);
}
