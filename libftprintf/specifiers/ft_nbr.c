/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 14:39:26 by abarthel          #+#    #+#             */
/*   Updated: 2019/03/20 15:09:50 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include <limits.h>

#include "prs_struct.h"
#include "specifiers.h"
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
	if (nb == 0)
		if (g_options.precision == -1 || g_options.precision == 1)
		   ++len;
	return (len);
}

static inline int				ft_get_object_size(int len, _Bool negative)
{
	int		size;

	size = 0;
	if (negative || g_flags.plus)
	{
		if (g_options.precision > g_options.width)
			size = g_options.precision > len ? g_options.precision + 1
				: len + 1;
		else
			size = g_options.width > len ? g_options.width : len + 1;
	}
	else
	{
		size = len > g_options.width ? len : g_options.width;
		if (size < g_options.precision)
			size = g_options.precision;
	}
	if (g_flags.space)
		if (!(negative))
			if (!(g_options.width > len))
				++size;
	return (size);
}

void							ft_nbr(intmax_t nb)
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
	if (nb < 0)
		negative = 1;
	size = ft_get_object_size(len, negative);
	if (!(str = (char*)ft_memalloc(sizeof(char)	* size)))
	{
		g_error = G_ERROR;
		return ;
	}
	ft_format(nb, str, size, len, negative);
	retwriter(str, size);
	free(str);
}
