/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nmemdel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 16:21:55 by abarthel          #+#    #+#             */
/*   Updated: 2019/07/29 17:03:41 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdlib.h>

#include "libft.h"

void	ft_nmemdel(size_t n, void **ptr, ...)
{
	va_list	ap;
	
	va_start(ap, ptr);
	while (n)
		ft_memdel(va_arg(ap, void**));
	va_end(ap);
}
