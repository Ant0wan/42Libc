/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 18:19:57 by abarthel          #+#    #+#             */
/*   Updated: 2019/03/20 14:03:11 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <limits.h>

#include "prs_struct.h"
#include "retwriter.h"
#include "libft.h"
#include "ft_wchar.h"
#include "utf8.h"
#include "specifiers.h"

#ifndef G_ERROR
# define G_ERROR 1
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

static inline void	ft_fill_object(char *obj, char *str, int len, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (g_options.precision == -1 || g_options.precision > len)
		g_options.precision = len;
	if (g_flags.minus)
	{
		while (g_options.precision)
		{
			obj[i] = str[i];
			++i;
			--g_options.precision;
			--size;
		}
		while (size >= 0)
		{
			obj[i] = ' ';
			++i;
			--size;
		}
	}
	else
	{
		len = g_options.precision < len ? g_options.precision : len;
		while (size - len)
		{
			obj[i] = ' ';
			++i;
			--size;
		}
		while (size && j <= len)
		{
			obj[i] = str[j];
			++j;
			++i;
			--size;
		}
	}
}

void				ft_str(char *str)
{
	char	*object;
	int		size;
	int		len;

	if (g_modifier.l)
	{
		ft_wstr(str);
		return ;
	}
	else if (g_options.width == INT_MAX || g_options.width == INT_MAX -1)
	{
		g_error = G_ERROR;
		return ;
	}
	len = ft_strlen(str);
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
