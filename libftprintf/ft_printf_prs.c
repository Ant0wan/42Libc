/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_prs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 12:39:43 by abarthel          #+#    #+#             */
/*   Updated: 2019/02/20 14:55:24 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdarg.h>

#include "dispatcher.h"
#include "libft.h"
#include "prs_struct.h"

#include "stdio.h"

static t_ret	g_ret;

int	printf_prs(char **ret, const char *format, va_list ap)
{
	size_t	i;
	void	(*f)();

	g_ret.ret = (char*)ret;
	i = -1;
	while (format[++i])
	{
		if (format[i] == '%')
			if (format[i + 1])
			{
				if ((f = dispatcher(format[i + 1])))
					f(va_arg(ap, typeof(ap)));
				while (format[i])
					++i;
			}
		(*ret)[i] = format[i];
	}
	return (0);
}
