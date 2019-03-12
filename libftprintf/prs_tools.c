/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prs_tools.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 15:49:12 by abarthel          #+#    #+#             */
/*   Updated: 2019/03/12 16:04:56 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "prs_tools.h"
#include "libft.h"

#ifndef BUFF
# define BUFF 2048
#endif

#define G_ERROR 1

extern t_ret		g_ret;
extern t_modifier	g_modifier;
extern _Bool		g_error;

inline void	reset_globals(void)
{
	g_options.width = 0;
	g_options.precision = -1;
	g_options.val_dol = 0;
	g_flags.hash = 0;
	g_flags.zero = 0;
	g_flags.minus = 0;
	g_flags.space = 0;
	g_flags.plus = 0;
	g_flags.apost = 0;
	g_modifier.hh = 0;
	g_modifier.h = 0;
	g_modifier.l = 0;
	g_modifier.ll = 0;
	g_modifier.j = 0;
	g_modifier.t = 0;
	g_modifier.z = 0;
	g_modifier.upl = 0;
}

inline int	ft_atoi_special(const char *str)
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

inline int	ft_getif_dollar(const char *str)
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
		g_ret.fmt_i += i;
		return (nbr);
	}
	return (0);
}

inline void	ft_expand_ret(int size)
{
	void	*new_ret;

	g_ret.max += size < BUFF ? BUFF : size;
	if (!(new_ret = (char*)ft_memalloc(sizeof(char) * g_ret.max + 1)))
	{
		g_error = G_ERROR;
		return ;
	}
	else
	{
		if (g_ret.i > -1)
			ft_memcpy(new_ret, g_ret.ret, g_ret.i + 1);
		ft_memdel((void**)&g_ret.ret);
		g_ret.ret = (char*)new_ret;
	}
}
