/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_double.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 14:39:26 by abarthel          #+#    #+#             */
/*   Updated: 2019/04/18 14:28:40 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <stdlib.h>
#include <stdarg.h>

#include "prs_struct.h"
#include "prefix.h"
#include "cast.h"
#include "format.h"

extern t_flags		g_flags;
extern t_prefix		g_prefix;
extern t_modifier	g_modifier;

#include <stdio.h>
void							ft_double(va_list ap)
{
	if (g_modifier.upl)
		printf("%Lf", va_arg(ap, long double));
	else
		printf("%f", va_arg(ap, double));
}
