/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_octal.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 18:11:18 by abarthel          #+#    #+#             */
/*   Updated: 2019/02/20 10:29:53 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

#define OCTAL_SIZE 8
#define OCTAL_BASE "01234567\0"

static void	ft_putint(unsigned int nbr, const char *base)
{
	if (nbr >= OCTAL_SIZE)
	{
		ft_putint(nbr / OCTAL_SIZE, base);
		ft_putint(nbr % OCTAL_SIZE, base);
	}
	else
		ft_putchar(base[nbr]);
}

void		ft_putnbr_octal(int nbr)
{
	if (nbr >= 0)
		ft_putint(nbr, OCTAL_BASE);
	else if (nbr < 0)
	{
		ft_putchar('-');
		ft_putint((nbr * -1), OCTAL_BASE);
	}
}
