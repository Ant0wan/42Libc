/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dispatcher.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 14:51:32 by abarthel          #+#    #+#             */
/*   Updated: 2019/03/28 12:08:23 by abarthel         ###   ########.fr       */
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
	{ 'c', T_ & ft_chr},
	{ 'd', T_ & ft_nbr},
	{ 'e', T_ & ft_nbr},
	{ 'f', T_ & ft_nbr},
	{ 'i', T_ & ft_nbr},
	{ 'o', T_ & ft_o},
	{ 's', T_ & ft_str},
	{ 'u', T_ & ft_unbr},
	{ 'x', T_ & ft_xlow},
	{ 'X', T_ & ft_xupp},
	{ 'C', T_ & ft_wchr},
	{ 'p', T_ & ft_p},
	{ 'n', T_ & ft_n},
	{ 'D', T_ & ft_unbr},
	{ 'O', T_ & ft_o},
	{ 'U', T_ & ft_uold},
	{ 'E', T_ & ft_p},
	{ 'F', T_ & ft_p},
	{ 'g', T_ & ft_p},
	{ 'G', T_ & ft_p},
	{ 'a', T_ & ft_p},
	{ 'A', T_ & ft_p},
	{ 'S', T_ & ft_wstr},
	{ 'k', T_ & ft_p},
	{ 'r', T_ & ft_p},
	{ 'b', T_ & ft_p},
	{ 'y', T_ & ft_p}
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
