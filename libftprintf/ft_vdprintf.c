/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vdprintf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 13:51:19 by abarthel          #+#    #+#             */
/*   Updated: 2019/02/21 17:08:45 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>

#include "ft_vasprintf.h"
#include "libft.h"

int	ft_vdprintf(int fd, const char *restrict format, va_list ap)
{
	int		ret;
	char	*str;

	ret = ft_vasprintf(&str, format, ap);
	if (ret != -1 && str)
		write(fd, str, ft_strlen(str));
	ft_memdel((void**)&str);
	return (ret);
}
