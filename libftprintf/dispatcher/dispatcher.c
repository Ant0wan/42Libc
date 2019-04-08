/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dispatcher.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 14:51:32 by abarthel          #+#    #+#             */
/*   Updated: 2019/04/08 14:35:27 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "struct_disp.h"
#include "specifiers.h"

#ifndef T_
# define T_ (void*)
#endif

#ifndef NB_PTR
# define NB_PTR 27
#endif

static const t_specifier	g_specifier[] =
{
	{ 'c', T_ & ft_nbr},
	{ 'd', T_ & ft_nbr},
	{ 'e', T_ & ft_nbr},
	{ 'f', T_ & ft_nbr},
	{ 'i', T_ & ft_nbr},
	{ 'o', T_ & ft_octal},
	{ 's', T_ & ft_nbr},
	{ 'u', T_ & ft_unbr},
	{ 'x', T_ & ft_lhexa},
	{ 'X', T_ & ft_uhexa},
	{ 'C', T_ & ft_nbr},
	{ 'p', T_ & ft_p},
	{ 'n', T_ & ft_nbr},
	{ 'D', T_ & ft_nbr},
	{ 'O', T_ & ft_octal},
	{ 'U', T_ & ft_unbr},
	{ 'E', T_ & ft_nbr},
	{ 'F', T_ & ft_nbr},
	{ 'g', T_ & ft_nbr},
	{ 'G', T_ & ft_nbr},
	{ 'a', T_ & ft_nbr},
	{ 'A', T_ & ft_nbr},
	{ 'S', T_ & ft_nbr},
	{ 'k', T_ & ft_nbr},
	{ 'r', T_ & ft_nbr},
	{ 'b', T_ & ft_b},
	{ 'y', T_ & ft_nbr}
};

void	*dispatcher(char c)
{
	char	i;

	i = 0;
	while (i < NB_PTR && g_specifier[(int)i].type ^ c)
		++i;
	if (!(i ^ NB_PTR))
		return (NULL);
	else
		return (g_specifier[(int)i].f);
}
