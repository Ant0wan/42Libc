/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vdprintf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 14:59:46 by abarthel          #+#    #+#             */
/*   Updated: 2019/02/13 15:07:42 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdlib.h>

#include <stdio.h> // for DEBUGGING

int	ft_vdprintf(int fd, const char *restrict format, va_list ap)
{
	int		ret;

	ret = vdprintf(fd, format, ap);
	return (ret);
}
