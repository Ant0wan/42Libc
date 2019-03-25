/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_x.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 14:39:26 by abarthel          #+#    #+#             */
/*   Updated: 2019/03/25 12:05:38 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include <limits.h>

#include "prs_struct.h"
#include "format_tools.h"
#include "retwriter.h"
#include "libft.h"

#ifndef G_ERROR
# define G_ERROR 1
#endif

#ifndef BASE
# define BASE 16
#endif

extern t_modifier	g_modifier;
extern _Bool		g_error;

static inline void				ft_cast_nbr(uintmax_t *nb)
{
	if (g_modifier.hh)
		*nb = (unsigned char)(*nb);
	else if (g_modifier.h)
		*nb = (unsigned short)(*nb);
	else if (g_modifier.l)
		*nb = (unsigned long)(*nb);
	else if (g_modifier.ll)
		*nb = (unsigned long long)*nb;
	else if (g_modifier.j)
		*nb = (uintmax_t)*nb;
	else if (g_modifier.t)
		*nb = (ptrdiff_t)(*nb);
	else if (g_modifier.z)
		*nb = (size_t)(*nb);
	else
		*nb = (unsigned int)(*nb);
}

static inline unsigned short	ft_nbrlen(uintmax_t nb)
{
	uintmax_t		rest;
	unsigned short	len;

	len = 0;
	rest = nb;
	while (rest && ++len)
		rest = (rest - (rest % BASE)) / BASE;
	if (nb == 0)
	{
		if (g_options.precision == -1 || g_options.precision == 1)
			++len;
	}
	return (len);
}

#include <stdio.h>
static inline int				ft_get_object_size_x(int len, uintmax_t nb)
{
	int		size;

	if (g_flags.hash && nb > 0)
	{
		size = len + 2 > g_options.width ? len + 2 : g_options.width;
		size = size > g_options.precision + 2 ? size : g_options.precision + 2;
	}
	else
	{
		size = len > g_options.width ? len : g_options.width;
		size = size > g_options.precision ? size : g_options.precision;
	}
	return (size);
}

void							ft_x(uintmax_t nb)
{
	int				size;
	unsigned short	len;
	_Bool			negative;
	char			*str;

	if (g_options.width >= INT_MAX - g_ret.i)
	{
		g_error = G_ERROR;
		return ;
	}
	ft_cast_nbr(&nb);
	len = ft_nbrlen(nb);
	negative = 0;
	g_flags.space = 0;
	g_flags.plus = 0;
	size = ft_get_object_size_x(len, nb);
	if (!(str = (char*)ft_memalloc(sizeof(char)	* size)))
	{
		g_error = G_ERROR;
		return ;
	}
	ft_xformat(nb, str, size, len);
	retwriter(str, size);
	ft_memdel((void**)&str);
}
