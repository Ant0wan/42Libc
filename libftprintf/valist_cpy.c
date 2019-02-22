/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valist_cpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 17:39:02 by abarthel          #+#    #+#             */
/*   Updated: 2019/02/22 14:29:41 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_prs.h"
#include "prs_struct.h"
#include "struct_disp.h"

#include <stdlib.h>
#include <stdarg.h>

#include "libft.h"

#define RET_ERROR   -1

#include <stdio.h> // DEBUGGGG

extern const t_specifier g_specifier[];

t_ap	g_ap;

int	valist_cpy(va_list ap, va_list **array, const char *fmt)
{
	unsigned short	i;
	_Bool			specifier;

	(void)ap;
	specifier = 1;
	i = -1;
	while (fmt[++i])
		if (!(fmt[i] ^ '%')) // enter cycle if there is a %
			while (fmt[++i] && specifier)
				if (!(fmt[i] ^ '*')) // check it is a wildcard
				{
					printf("flag:\"%c\"\n", fmt[i - 1]);
					printf("disp:\"%c\"\n", g_specifier[1].type);
					if (!(fmt[i] ^ g_specifier[1].type)) // make sure it is a valid specifier (lookup dispatcher)
					{
						specifier = 0;
					//	printf("flag:\"%c\"\n", fmt[i]);
						++g_ap.nb_ap;
					}
				}
	if (!(*array = (va_list*)ft_memalloc(sizeof(va_list) * g_ap.nb_ap)))
		return (RET_ERROR);
	return (0);
}
