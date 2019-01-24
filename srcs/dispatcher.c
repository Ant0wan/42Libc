/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   disptacher.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 12:37:47 by abarthel          #+#    #+#             */
/*   Updated: 2019/01/24 14:58:52 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_typeop	g_typeoptab[] =
{
	{ "s", (void*)&ft_putstr},
	{ "d", (void*)&ft_itoa}
};

void	*dispatcher_hash(char *str)
{
	return ((void*)str);
}
