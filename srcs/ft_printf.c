/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 14:27:49 by abarthel          #+#    #+#             */
/*   Updated: 2019/01/24 19:42:56 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char * restrict format, ...)
{
	va_list ap;

	va_start(ap, format);
	va_end(ap);
	ft_putstr("here s:");
	dispatcher("s");
	ft_putstr("\n");
	ft_putstr("here d:");
	dispatcher("d");
	ft_putstr("\n");
	ft_putstr("here X:");
	dispatcher("X");
	ft_putstr("\n");
	ft_putstr("here 0:");
	dispatcher("0");
	ft_putstr("\n");
	return (0);
}
