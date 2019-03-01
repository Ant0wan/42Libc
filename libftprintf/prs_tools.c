/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prs_tools.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 15:49:12 by abarthel          #+#    #+#             */
/*   Updated: 2019/03/01 14:54:15 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prs_tools.h"
#include "libft.h"

#ifndef BUFF
# define BUFF 1
#endif

#define RET_ERROR -1

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

void	ft_realloc_cpy(void)
{
	char	*new_ret;
	char	*tmp;

	g_ret.max += BUFF;
	tmp = g_ret.ret;
	if (!(new_ret = (char*)ft_memalloc(sizeof(*g_ret.ret) * g_ret.max)))
	{
		g_error = RET_ERROR;
		return ;
	}
	else
	{
		ft_strcpy(new_ret, g_ret.ret);
		g_ret.ret = new_ret;
		ft_memdel((void**)&tmp);
	}
}
