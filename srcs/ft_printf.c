/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 14:36:30 by abarthel          #+#    #+#             */
/*   Updated: 2019/01/21 16:12:05 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *restrict format, ...)
{
	va_list ap;
	void *str;

	va_start(ap, format);

	str = va_arg(ap, int);
	
	va_end(ap);

	return (0);
}
