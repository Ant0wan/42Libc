/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_prs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 12:39:43 by abarthel          #+#    #+#             */
/*   Updated: 2019/02/18 13:00:15 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdarg.h>

#include <unistd.h>
#include <stdio.h>

int	printf_prs(char **ret, const char *format, va_list ap)
{
	size_t	i;
	(void)ap;

	i = -1;
	while (format[++i] && format[i] != '%')
		ret[0][i] = format[i];
	return (0);
}
