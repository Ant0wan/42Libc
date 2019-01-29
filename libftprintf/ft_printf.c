/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 14:27:49 by abarthel          #+#    #+#             */
/*   Updated: 2019/01/29 19:09:38 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_wchar.h"

#include <stdarg.h>
#include <unistd.h>

int		ft_printf(const char *restrict format, ...)
{
	va_list ap;
	int		ret;

	va_start(ap, format);

	// format in fwprintf is not char but wchar_t carefull to treat properly !!
	ret = ft_fwprintf(STDOUT_FILENO, format, ap);
	va_end(ap);
	return (ret);
}
