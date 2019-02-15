/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dispatcher.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 14:51:32 by abarthel          #+#    #+#             */
/*   Updated: 2019/02/15 16:55:18 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dispatcher.h"
#define TYPE char
#include "struct_disp.h"

#include <stdlib.h>
#include "libft.h"

/*
** Set the number of function pointers in table "g_disp"
*/

#define NB_PTR 1

static const t_disp	g_disp[] =
{
	{ "d", NULL}
};

void				*dispatcher(void *str)
{
	char	i;

	i = 0;
	while (i < NB_PTR && ft_strcmp(g_disp[(int)i].type, str))
		++i;
	if (g_disp[(int)i].type[0])
		return (g_disp[(int)i].f);
	else
		return (NULL);
}
