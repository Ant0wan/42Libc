/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 15:28:13 by abarthel          #+#    #+#             */
/*   Updated: 2019/01/29 15:03:45 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_wprintf.h"

#include <stdarg.h>

int		ft_wprintf(const wchar_t *restrict format, ...)
{
	int	stream = STDOUT_FILENO;  // ??? stream

	ft_fwprintf(FILE *restrict stream, const wchar_t *restrict format, ...);
	return (0);
}
