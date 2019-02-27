/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prs_tools.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 15:49:12 by abarthel          #+#    #+#             */
/*   Updated: 2019/02/27 16:01:54 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prs_tools.h"

extern t_ret	g_ret;

int	ft_atoi_special(const char *str)
{
	int	nbr;

	nbr = 0;
	while (str[g_ret.i] > 47 && str[g_ret.i] < 58)
	{
		nbr = nbr * 10 + (str[g_ret.i] ^ '0');
		++g_ret.i;
	}
	--g_ret.i;
	return (nbr);
}

int	ft_getif_dollar(const char *str)
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
