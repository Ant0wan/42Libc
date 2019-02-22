/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valist_cpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 17:39:02 by abarthel          #+#    #+#             */
/*   Updated: 2019/02/22 16:33:16 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_prs.h"
#include "prs_struct.h"
#include "struct_disp.h"

#include <stdlib.h>
#include <stdarg.h>

#include "libft.h"

#define RET_ERROR -1

#include <stdio.h> // DEBUGGING

extern const t_specifier	g_specifier[];
t_ap						g_ap;

static _Bool	isspecifier(char c)
{
	unsigned short	i;

	i = -1;
	while (++i < NB_PTR)
		if (!(c ^ g_specifier[i].type))
			return (1);
	return (0);
}

static _Bool	feed_aplist(void)
{
	if (!(g_ap.ap_list = (va_list*)ft_memalloc(sizeof(va_list) * g_ap.nb_ap)))
		return (RET_ERROR);
	else
		return (0);
}

_Bool			valist_cpy(va_list ap, const char *fmt)
{
	unsigned short	i;
	_Bool			specifier;

	(void)ap;
	i = -1;
	while (fmt[++i])
		if (!(fmt[i] ^ '%'))
		{
			specifier = 1;
			while (fmt[++i] && specifier)
			{
				if (!(fmt[i] ^ '*'))
					++g_ap.nb_ap;
				else if (isspecifier(fmt[i]))
				{
					specifier = 0;
					++g_ap.nb_ap;
				}
			}
		}
	if (feed_aplist())
		return (RET_ERROR);
	return (0);
}
