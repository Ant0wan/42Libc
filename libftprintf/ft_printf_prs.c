/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_prs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 12:39:43 by abarthel          #+#    #+#             */
/*   Updated: 2019/02/18 16:12:46 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdarg.h>

#include "dispatcher.h"
#include "libft.h"

//int	local_parser()

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
