/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_n.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 17:00:19 by abarthel          #+#    #+#             */
/*   Updated: 2019/04/17 11:03:22 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prs_struct.h"

extern t_ret	g_ret;

void	ft_n(int *__restrict__ ptr)
{
	if (ptr)
		*ptr = g_ret.i + 1;
}
