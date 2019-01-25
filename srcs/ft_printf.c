/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 14:27:49 by abarthel          #+#    #+#             */
/*   Updated: 2019/01/25 17:41:07 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char * restrict format, ...)
{
	va_list ap;
	
	va_start(ap, format);
	va_end(ap);
	ft_putstr("here s:");
	ft_putnbr((int)dispatcher("s"));
	ft_putstr("\n");
	ft_putstr("here d:");
	ft_putnbr((int)dispatcher("d"));
	ft_putstr("\n");
	ft_putstr("here X:");
	ft_putnbr((int)dispatcher("X"));
	ft_putstr("\n");
	ft_putstr("here 0:");
	ft_putnbr((int)dispatcher("0"));
	ft_putstr("\n");
	ft_putstr("here ll:");
	ft_putnbr((int)dispatcher("ll"));
	ft_putstr("\n");
	ft_putstr("here c:");
	ft_putnbr((int)dispatcher("c"));
	ft_putstr("\n");
	void *(*f)();
	f = dispatcher("c");
	f('K');

	return (0);
}
