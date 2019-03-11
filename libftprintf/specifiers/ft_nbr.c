/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 14:39:26 by abarthel          #+#    #+#             */
/*   Updated: 2019/03/11 16:26:23 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdint.h>
#include <stddef.h>

#include "prs_struct.h"
#include "retwriter.h"
#include "libft.h"

#define MAX_DIGITS_NB 64

extern t_modifier	g_modifier;

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

void	ft_nbr(intmax_t nb)
{
	char		string[MAX_DIGITS_NB];
	size_t		i;
	size_t		len;
	uintmax_t	cp;

	ft_cast_nbr(&nb);
	cp = nb < 0 ? nb * -1 : nb;
	i = (nb <= 0 ? 1 : 0);
	while (cp > 0 && ++i)
		cp = (cp - cp % 10) / 10;
	len = i;
	if (nb <= 0)
		*string = nb == 0 ? '0' : '-';
	string[i] = 0;
	cp = nb < 0 ? nb * -1 : nb;
	while (cp)
	{
		string[--i] = ((cp % 10) ^ 0x30);
		cp = (cp - cp % 10) / 10;
	}
	retwriter(string, len);
}
