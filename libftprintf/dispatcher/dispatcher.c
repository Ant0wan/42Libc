/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dispatcher.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 14:51:32 by abarthel          #+#    #+#             */
/*   Updated: 2019/02/18 16:45:08 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dispatcher.h"
#define T_ (void*)
#include "struct_disp.h"

#include <stdlib.h>
#include "libft.h"

#define NB_PTR 10

/*
** Printf format specifiers
** %c	character
** %d	decimal (integer) number (base 10)
** %e	exponential floating-point number
** %f	floating-point number
** %i	integer (base 10)
** %o	octal number (base 8)
** %s	a string of characters
** %u	unsigned decimal (integer) number
** %x	number in hexadecimal (base 16)
** %%	print a percent sign // not in specifieratcher
** \%	print a percent sign // not in specifieratcher
*/

static const t_specifier	g_specifier[] =
{
	{ 'c', T_ & ft_putchar},
	{ 'd', T_ & ft_putnbr},
	{ 'e', T_ & ft_putnbr},
	{ 'f', T_ & ft_putnbr},
	{ 'i', T_ & ft_putnbr},
	{ 'o', T_ & ft_putnbr},
	{ 's', T_ & ft_putnbr},
	{ 'u', T_ & ft_putnbr},
	{ 'x', T_ & ft_putnbr},
	{ 'X', T_ & ft_putnbr}
};

void				*dispatcher(char c)
{
	char	i;

	i = 0;
	while (i < NB_PTR && ft_strcmp(&g_specifier[(int)i].type, &c))
		++i;
	if (i == NB_PTR)
		return (NULL);
	else
		return (g_specifier[(int)i].f);
}
