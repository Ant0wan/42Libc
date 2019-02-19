/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 10:55:44 by abarthel          #+#    #+#             */
/*   Updated: 2019/02/19 11:15:40 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

#define HEXA_SIZE 16

static void	ft_putint(size_t nbr, char *base)
{
	if (nbr >= HEXA_SIZE)
	{
		ft_putint(nbr / HEXA_SIZE, base);
		ft_putint(nbr % HEXA_SIZE, base);
	}
	else
		ft_putchar(base[nbr]);
}

static void	ft_putnbrhexa(size_t nbr)
{
	char	*base;

	base = "0123456789abcdef\0";
	ft_putint(nbr, base);
}

void		ft_putaddr(void **ptr)
{
	ft_putstr("0x");
	ft_putnbrhexa((size_t)ptr);
}
