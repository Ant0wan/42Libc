/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   disptacher.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 12:37:47 by abarthel          #+#    #+#             */
/*   Updated: 2019/01/25 14:03:36 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_typeop	g_typeoptab[] =
{
	{ "s", (void*)&ft_putstr},
	{ "d", (void*)&ft_itoa},
	{ "ll", (void*)&ft_itoa},
	{ "\0", (void*)0}
};

void		*dispatcher(char *str)
{
	int	i;

	i = 0;
	while (g_typeoptab[i].type[0] && ft_strcmp(g_typeoptab[i].type, str))
		++i;
	if (g_typeoptab[i].type[0])
	{
			ft_putnbr((int)g_typeoptab[i].f);
			return(g_typeoptab[i].f);
	}
	return ((void*)0);
}
