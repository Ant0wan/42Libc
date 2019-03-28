/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrapper.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 12:47:59 by abarthel          #+#    #+#             */
/*   Updated: 2019/03/28 12:52:27 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

#include "prs_struct.h"

extern t_options	g_options;

extern inline void	wrapper(void *(*f)(), va_list ap)
{
	int	i;
	int	rubbish;

	i = 0;
	while (++i < g_options.val_dol)
		rubbish = va_arg(ap, int);
	f(va_arg(ap, typeof(ap)));
	++g_options.i_ap;
}
