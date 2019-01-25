/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 14:27:49 by abarthel          #+#    #+#             */
/*   Updated: 2019/01/25 18:36:26 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char * restrict format, ...)
{
	va_list ap;
	
	va_start(ap, format);
	va_end(ap);
	ft_putstr("\n");



	void *(*f)();
	f = dispatcher("c");
	f('o');
	f = dispatcher("s");
	f("Hello World !\n");
	f = dispatcher("d");
	ft_putstr(f(-42));



	return (0);
}
