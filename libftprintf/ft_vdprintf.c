/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vdprintf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 13:51:19 by abarthel          #+#    #+#             */
/*   Updated: 2019/03/05 12:56:08 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>

#include "ft_vasprintf.h"
#include "libft.h"

int	ft_vdprintf(int fd, const char *restrict format, va_list ap)
{
	char	*str;
	int		ret;

	ret = ft_vasprintf(&str, format, ap);
	if (ret != -1 && str)
		write(fd, str, ret);
	ft_memdel((void**)&str);
	return (ret);
}
