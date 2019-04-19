/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_double.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 14:39:26 by abarthel          #+#    #+#             */
/*   Updated: 2019/04/19 17:44:38 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <stdlib.h>
#include <stdarg.h>
#include <float.h>

#include "grisu.h"
#include "prs_struct.h"

extern t_modifier	g_modifier;

#include <stdio.h> // DEBUGG
void							ft_double(va_list ap)
{
	printf("size struct:%zu\n", sizeof(t_dfp));
	(void)ap;
	if (g_modifier.upl)
		printf("%Lf", va_arg(ap, long double));
	else
		printf("%f", va_arg(ap, double));
}
