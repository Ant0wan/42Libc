/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   disptacher.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 12:37:47 by abarthel          #+#    #+#             */
/*   Updated: 2019/01/25 15:35:30 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_typeop	g_modifiers[] =
{
	{ " ", (void*)0},
	{ "+", (void*)0},
	{ "-", (void*)0},
	{ "#", (void*)0},
	{ "0", (void*)0},
	{ "\'", (void*)0},
	{ "I", (void*)0},
	{ "\0", (void*)0}
};

t_typeop	g_conversions[] =
{
	{ "o", (void*)0},
	{ "x", (void*)0},
	{ "X", (void*)0},
	{ "e", (void*)0},
	{ "E", (void*)0},
	{ "g", (void*)0},
	{ "G", (void*)0},
	{ "\0", (void*)0}
};

t_typeop	g_typeoptab[] =
{
	{ "c", (void*)&ft_wputchar},	 // char && unsigned char		1 bytes
	{ "hd", (void*)0},				 // short int					2 bytes
	{ "hu", (void*)0},				 // unsigned short int			2 bytes
	{ "u", (void*)0},				 // unsigned int				4 bytes
	{ "u", (void*)0},				 // unsigned int				4 bytes
	{ "f", (void*)0},				 // float						4 bytes
	{ "d", (void*)&ft_itoa},		 // int							4 bytes
	{ "i", (void*)&ft_itoa},		 // int							4 bytes
	{ "ld", (void*)&ft_itoa},		 // long int					4 bytes
	{ "lu", (void*)&ft_itoa},		 // unsigned long int			4 bytes
	{ "lld", (void*)&ft_itoa},		 // long long int				8 bytes
	{ "llu", (void*)&ft_itoa},		 // unsigned long long int		8 bytes
	{ "lf", (void*)0},				 // double						8 bytes
	{ "Lf", (void*)0},				 // long double				   12 bytes
	{ "s", (void*)&ft_putstr},		 // char pointer				8 bytes
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
			return(g_typeoptab[i].f);
	return ((void*)0);
}
