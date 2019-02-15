/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dispatcher.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 14:51:32 by abarthel          #+#    #+#             */
/*   Updated: 2019/02/15 18:41:59 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dispatcher.h"
#define TYPE char
#define T_ (void*)
#include "struct_disp.h"

#include <stdlib.h>
#include "libft.h"

#define NB_PTR 1

static const t_disp	g_disp[] =
{
	{ "d", T_ & ft_putnbr}
};

void				*dispatcher(void *str)
{
	char	i;

	i = 0;
	while (i < NB_PTR && ft_strcmp(g_disp[(int)i].type, (TYPE*)str))
		++i;
	if (i == NB_PTR)
		return (NULL);
	else
		return (g_disp[(int)i].f);
}
