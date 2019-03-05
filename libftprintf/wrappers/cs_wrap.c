/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cs_wrap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 10:38:50 by abarthel          #+#    #+#             */
/*   Updated: 2019/03/05 15:04:32 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdlib.h>

#include "prs_struct.h"

extern t_ret		g_ret;
extern t_options	g_options;
extern t_modifier	g_modifier;
extern _Bool		g_error;

void	cs_wrap(void *(*f)(), va_list ap)
{
	wchar_t	*ws;
	int		i;
	int		rubbish;

	i = 0;
	while (++i < g_options.val_dol)
		rubbish = va_arg(ap, int);
	if (g_modifier.l)
	{
		ws = (wchar_t*)va_arg(ap, typeof(ap));
		i = -1;
		while (ws[++i])
			if (ws[i] > 0x00FF)
			{
				g_error = 1;
				return ;
			}
		f(ws);
	}
	else
		f(va_arg(ap, typeof(ap)));
	++g_options.i_ap;
}
