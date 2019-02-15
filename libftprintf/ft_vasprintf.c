/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vasprintf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 16:13:29 by abarthel          #+#    #+#             */
/*   Updated: 2019/02/15 18:05:31 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

#include "ft_vdprintf.h"
#include "libft.h"

#define BUFF 1024

int	ft_vasprintf(char **ret, const char *format, va_list ap)
{
	(void)ret;
	(void)format;
	(void)ap;
	if (!(ret = (char**)ft_memalloc(sizeof(**ret) * BUFF + 1)))
		return (-1);
	return (2);
}
