/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cs_wrap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 10:38:50 by abarthel          #+#    #+#             */
/*   Updated: 2019/03/05 16:26:42 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** CS_WRAP give the specifiers the correct argument and verify conditions
** given by modifiers. CS_WRAP is returned by the dispatcher and wrappes
** the specifiers functions.
** This particular wrapper, verify conditions for 'l' modifier using 's'
** and 'c' specifier. It casts char in wchar_t if 'l' applies and verify
** the string is valide i.e. wchar_t val contained in a byte.
*/

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
