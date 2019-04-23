/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_double.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 14:39:26 by abarthel          #+#    #+#             */
/*   Updated: 2019/04/23 13:59:09 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <stdlib.h>
#include <stdarg.h>
#include <float.h>

#include "grisu.h"
#include "prs_struct.h"
#include "ft_printf.h"

extern t_modifier	g_modifier;

void							ft_double(va_list ap)
{
	if (g_modifier.upl)
		ft_printf("%d", va_arg(ap, long double));
	else
		ft_printf("%d", va_arg(ap, double));
}
