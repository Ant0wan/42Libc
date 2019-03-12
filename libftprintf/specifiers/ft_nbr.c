/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 14:39:26 by abarthel          #+#    #+#             */
/*   Updated: 2019/03/12 19:22:47 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

#include "prs_struct.h"
#include "retwriter.h"
#include "libft.h"

extern t_modifier	g_modifier;
extern _Bool		g_error;

static inline void	ft_cast_nbr(intmax_t *nb)
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

static inline char	*ft_give_space_to_write(size_t len)
{
	size_t	i;
	char	*string;

	i = -1;
	if (len == 0)
		++len;
	if (!(string = (char*)malloc(sizeof(char) * (len + 1))))
		g_error = 1;
	else
	{
		while (++i < len)
			string[i] = '0';
		string[i] = 0;
	}
	return (string);
}

static inline void	ft_addplus(char *str, int len)
{
	char *new;

	if (!(new = (char*)ft_memalloc(sizeof(char) * len + 2)))
	{
		g_error = 1;
		return ;
	}
	*new = '+';
	ft_memcpy(&new[1], str, len + 1);
	if (g_options.precision != 0)
		retwriter(new, len == 0 ? 2 : len + 1);
	else
		retwriter(new, len == 0 ? 1 : len + 1);
}

void	ft_nbr(intmax_t nb)
{
	int			i;
	int			len;
	int			size;
	char		*string;
	uintmax_t	cp;

	ft_cast_nbr(&nb);
	if (g_flags.zero)
	{
		g_options.precision = g_options.width;
		g_options.width = 0;
		if (nb > 0 && !(g_flags.plus))
			g_flags.zero = 0;
	}
	cp = nb < 0 ? nb * -1 : nb;
	i = 0;
	while (cp > 0 && ++i)
		cp = (cp - cp % 10) / 10;
	len = i;
	size = g_options.precision > len ? g_options.precision - g_flags.zero : len;
	if (!(string = ft_give_space_to_write(nb <= 0 ? size + 1 : size)))
		return ;
	if (nb <= 0)
		*string = nb == 0 ? '0' : '-';
	cp = nb < 0 ? nb * -1 : nb;
	i = nb < 0 ? size + 1 : size;
	len = i;
	while (cp)
	{
		string[--i] = (cp % 10) ^ 0x30;
		cp = (cp - cp % 10) / 10;
	}
	if (g_flags.plus && nb >= 0)
		ft_addplus(string, len);
	else if (g_options.precision != 0 || nb)
		retwriter(string, len == 0 ? 1 : len);
	else
		retwriter(string, 0);
	free(string);
}
