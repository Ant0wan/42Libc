/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dispatcher.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 14:51:32 by abarthel          #+#    #+#             */
/*   Updated: 2019/02/18 17:30:31 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dispatcher.h"
#define T_ (void*)
#include "struct_disp.h"

#include <stdlib.h>
#include "libft.h"

#define NB_PTR 10

/*
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
	{ 'o', T_ & ft_putnbr_octal},
	{ 's', T_ & ft_putstr},
	{ 'u', T_ & ft_putnbr},
	{ 'x', T_ & ft_putnbr_lowhexa},
	{ 'X', T_ & ft_putnbr_upphexa}
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
