/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_lowhexa.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 18:11:18 by abarthel          #+#    #+#             */
/*   Updated: 2019/02/18 17:18:03 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

#define HEXA_SIZE 16

static void	ft_putint(unsigned int nbr, char *base)
{
	if (nbr >= HEXA_SIZE)
	{
		ft_putint(nbr / HEXA_SIZE, base);
		ft_putint(nbr % HEXA_SIZE, base);
	}
	else
		ft_putchar(base[nbr]);
}

void		ft_putnbr_lowhexa(int nbr)
{
	char	*base;

	base = "0123456789abcdef\0";
	if (nbr >= 0)
		ft_putint(nbr, base);
	else if (nbr < 0)
	{
		ft_putchar('-');
		ft_putint((nbr * -1), base);
	}
}
