/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vdprintf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 13:51:19 by abarthel          #+#    #+#             */
/*   Updated: 2019/02/22 18:03:38 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>

#include "ft_vasprintf.h"
#include "prs_struct.h"
#include "libft.h"

extern t_ret	g_ret;

int	ft_vdprintf(int fd, const char *restrict format, va_list ap)
{
	int		ret;
	char	*str;

	ret = ft_vasprintf(&str, format, ap);
	if (ret != -1 && str)
		write(fd, str, (g_ret.i + 1));
	ft_memdel((void**)&str);
	return (ret);
}
