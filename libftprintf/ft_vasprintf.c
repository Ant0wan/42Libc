/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vasprintf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 16:13:29 by abarthel          #+#    #+#             */
/*   Updated: 2019/02/14 13:43:12 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

#include "ft_vdprintf.h"

#include <stdio.h> // debugging

#include "libft.h"

int	ft_vasprintf(char **ret, const char *format, va_list ap)
{
	int	nb_bytes;

	ft_putstr(format);
	ft_putnbr(va_arg(ap, int));
	
	return (nb_bytes);
}
