/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 14:39:26 by abarthel          #+#    #+#             */
/*   Updated: 2019/03/11 13:16:21 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdint.h>

#include "prs_struct.h"
#include "retwriter.h"
#include "libft.h"

#define MAX_DIGITS_NB 128

#include <stdio.h>

static inline void	ft_cast_nbr(intmax_t *nb)
{
	if (1)
		*nb = (int)(*nb);
}

void	ft_nbr(intmax_t nb)
{
	char		string[MAX_DIGITS_NB];
	int			i;
	int			len;
	intmax_t	cp;

	ft_cast_nbr(&nb);
	cp = nb < 0 ? nb * -1 : nb;
	i = (nb <= 0 ? 1 : 0);
	while (cp > 0 && ++i)
		cp = (cp - cp % 10) / 10;
	len = i + 1;
	if (nb <= 0)
		*string = nb == 0 ? '0' : '-';
	string[i] = 0;
	cp = nb < 0 ? nb * -1 : nb;
	while (cp)
	{
		string[--i] = (cp % 10) ^ 0x30;
		cp = (cp - cp % 10) / 10;
	}
	retwriter(string, len);
}
