/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 17:12:52 by abarthel          #+#    #+#             */
/*   Updated: 2019/04/05 17:14:06 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
	int		nb;
	char	c;
	nb = 0;
	c = 'W';
	ft_printf("%5p\n", &nb);
	dprintf(2,"%5p\n", &nb);
	ft_printf("%-15p\n", &nb);
	dprintf(2,"%-15p\n", &nb);
	ft_printf("%-5p\n", &nb);
	dprintf(2,"%-5p\n", &nb);
	ft_printf("%42p\n", &nb);
	dprintf(2,"%42p\n", &nb);
	ft_printf("%-18p\n", &nb);
	dprintf(2,"%-18p\n", &nb);
	ft_printf("%42p\n", &nb);
	dprintf(2,"%42p\n", &nb);
	ft_printf("%5p\n", &c);
	dprintf(2,"%5p\n", &c);
	ft_printf("%-15p\n", &c);
	dprintf(2,"%-15p\n", &c);
	ft_printf("%-5p\n", &c);
	dprintf(2,"%-5p\n", &c);
	ft_printf("%42p\n", &c);
	dprintf(2,"%42p\n", &c);
	ft_printf("%-18p\n", &c);
	dprintf(2,"%-18p\n", &c);
	ft_printf("%42p\n", &c);
	dprintf(2,"%42p\n", &c);

	return (0);
}
