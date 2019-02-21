/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   passivewrap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 10:38:50 by abarthel          #+#    #+#             */
/*   Updated: 2019/02/21 15:17:14 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

#include "prs_struct.h"

#include <stdio.h>

extern t_ret	g_ret;

void	passivewrap(void *(*f)(), va_list ap)
{
	printf("g_ret.i: %d\n", g_ret.i);
	f(va_arg(ap, typeof(ap)));
}
