/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 14:39:26 by abarthel          #+#    #+#             */
/*   Updated: 2019/03/14 12:07:40 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

#include "prs_struct.h"
#include "retwriter.h"
#include "libft.h"

#ifndef G_ERROR
# define G_ERROR 1
#endif

extern t_modifier	g_modifier;
extern _Bool		g_error;

static inline void				ft_cast_nbr(intmax_t *nb)
{
	if (g_modifier.hh)
		*nb = (signed char)(*nb);
	else if (g_modifier.h)
		*nb = (short)(*nb);
	else if (g_modifier.l)
		*nb = (long)(*nb);
	else if (g_modifier.ll)
		*nb = (long long)*nb;
	else if (g_modifier.j)
		*nb = (intmax_t)(*nb);
	else if (g_modifier.t)
		*nb = (ptrdiff_t)(*nb);
	else if (g_modifier.z)
		*nb = (size_t)(*nb);
	else
		*nb = (int)(*nb);
}

static inline unsigned short	ft_nbrlen(intmax_t nb)
{
	intmax_t		rest;
	unsigned short	len;

	len = 0;
	rest = nb;
	while (rest && ++ len)
		rest = (rest - (rest % 10)) / 10;
	if (nb == 0 && g_options.precision == -1)
		++len;
	return (len);
}

#include <stdio.h> // DEBUGGING
static inline int				ft_get_object_size(int len, _Bool negative)
{
	int		size;

	size = 0;
//	printf("pre:%d, wid:%d, zero:%d, neg:%d, plus:%d, len:%d\n", g_options.precision, g_options.width, g_flags.zero, negative, g_flags.plus, len);
	if (negative || g_flags.plus)
	{
		if (g_options.precision > g_options.width)
			size = g_options.precision > len ? g_options.precision + 1 : len + 1;
		else
			size = g_options.width > len ? g_options.width : len + 1;
	}
	else
	{
		size = len > g_options.width ? len : g_options.width;
		if (size < g_options.precision)
			size = g_options.precision;
	}
	return (size);
}

static inline void				ft_format(intmax_t nb, char *str, int size)
{
	int	i;
	(void)nb;

	i = -1;
	while (++i < size)
	{
		str[i] = ' ';
	}
}

void							ft_nbr(intmax_t nb)
{
	int				size;
	unsigned short	len;
	_Bool			negative;
	char			*str;

/* Casts the nb */
	ft_cast_nbr(&nb);
/* Get nb len   */
	len = ft_nbrlen(nb);
	negative = 0;
	if (nb < 0)
		negative = 1;
/* Get object size */
	size = ft_get_object_size(len, negative);
/* Malloc size */
	if (!(str = (char*)ft_memalloc(sizeof(char)	* size)))
	{
		g_error = G_ERROR;
		return ;
	}
/* Fill the string and introduce all the formatting */
	ft_format(nb, str, size);	
/* Retwriter */
	retwriter(str, size);
/* Free */
	free(str);
}
