/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 18:19:57 by abarthel          #+#    #+#             */
/*   Updated: 2019/03/19 17:39:50 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

static inline int	ft_get_str_object_size(int len)
{
	int size;

	size = len;
	if (g_options.precision != -1)
		if (g_options.precision < len)
			size = g_options.precision;
	if (g_options.width > size)
		size = g_options.width;
	return (size);
}

#include <stdio.h>
static inline void	ft_fill_object(char *obj, wchar_t *str, int len, int size)
{
	int	i;
	int	j;
	wchar_t	wc;

	i = 0;
	j = 0;
	if (g_options.precision == -1 || g_options.precision > len)
		g_options.precision = len;
	if (g_flags.minus)
	{
		while (g_options.precision >= 0)
		{
//			printf("precision %d\n", g_options.precision);
			wc = str[j];
			utf8_encoder(&wc);
			if ((char)(wc >> 24))
			{
				obj[i] = (char)(wc >> 24);
				++i;
				--g_options.precision;
				--size;
			}
			if ((char)(wc >> 16))
			{
				obj[i] = (char)(wc >> 16);
				++i;
				--g_options.precision;
				--size;
			}
			if ((char)(wc >> 8))
			{
				obj[i] = (char)(wc >> 8);
				++i;
				--g_options.precision;
				--size;
			}
			if ((char)wc)
			{
				obj[i] = (char)wc;
				++i;
				--g_options.precision;
				--size;
			}
			++j;
		}
		while (size >= 0)
		{
			obj[i] = ' ';
			++i;
			--size;
		}
	}
}

void				ft_wstr(wchar_t *str)
{
	char	*object;
	int		size;
	int		len;

	len = encodlen(str);
	size = ft_get_str_object_size(len);
	if (!(object = (char*)ft_memalloc(sizeof(char) * size)))
	{
		g_error = G_ERROR;
		return ;
	}
	ft_fill_object(object, str, len, size);
	retwriter(object, size);
	free(object);
}
