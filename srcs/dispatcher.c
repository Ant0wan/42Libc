/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   disptacher.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 12:37:47 by abarthel          #+#    #+#             */
/*   Updated: 2019/01/24 19:45:11 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_typeop	g_typeoptab[] =
{
	{ "s", (void*)&ft_putstr},
	{ "d", (void*)&ft_itoa},
	{ "\0", (void*)0}
};

void		*dispatcher(char *str)
{
	int	i;

	i = 0;
	while (g_typeoptab[i].type[0] && g_typeoptab[i].type[0] != *str)
		++i;
	if (g_typeoptab[i].type[0] && g_typeoptab[i].type[0] == *str)
		return(g_typeoptab[i].f);
	return ((void*)0);
}
