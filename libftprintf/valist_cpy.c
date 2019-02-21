/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valist_cpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 17:39:02 by abarthel          #+#    #+#             */
/*   Updated: 2019/02/21 18:12:36 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_prs.h"
#include "prs_struct.h"

#include <stdlib.h>
#include <stdarg.h>

#include "libft.h"

t_ap	g_ap;

int	valist_cpy(va_list ap, va_list **array)
{
	(void)ap;
	(void)array;
	*array = (va_list*)ft_memalloc(sizeof(va_list) * g_ap.nb_ap);
	return (0);
}
