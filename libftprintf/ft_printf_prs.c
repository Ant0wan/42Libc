/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_prs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 12:39:43 by abarthel          #+#    #+#             */
/*   Updated: 2019/02/20 12:08:26 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdarg.h>

#include "dispatcher.h"
#include "libft.h"
#include "prs_struct.h"

int	printf_prs(char **ret, const char *format, va_list ap)
{
	size_t	i;
	void	(*f)();

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
