/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prs_tools.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 15:49:12 by abarthel          #+#    #+#             */
/*   Updated: 2019/03/01 16:41:33 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "prs_tools.h"
#include "libft.h"

#ifndef BUFF
# define BUFF 1024
#endif

#define G_ERROR 1

extern t_ret	g_ret;
extern _Bool	g_error;

int		ft_atoi_special(const char *str)
{
	int	nbr;

	nbr = 0;
	while (str[g_ret.fmt_i] > 47 && str[g_ret.fmt_i] < 58)
	{
		nbr = nbr * 10 + (str[g_ret.fmt_i] ^ '0');
		++g_ret.fmt_i;
	}
	--g_ret.fmt_i;
	return (nbr);
}

int		ft_getif_dollar(const char *str)
{
	int	nbr;
	int	i;

	nbr = 0;
	i = 0;
	while (str[i] > 47 && str[i] < 58)
	{
		nbr = nbr * 10 + (str[i] ^ '0');
		++i;
	}
	if (!(str[i] ^ '$'))
	{
		g_ret.i += i;
		return (nbr);
	}
	return (0);
}

void	ft_expand_ret(int size)
{
	void	*ptr_to_free;

	ptr_to_free = NULL;
	ptr_to_free = g_ret.ret;
	g_ret.max = size < BUFF ? BUFF : size + 1;
	if (!(g_ret.ret = (char*)ft_memalloc()))
	{
		g_error = G_ERROR;
		return ;
	}
	else
	{
	}
}
