/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unbr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 20:01:40 by abarthel          #+#    #+#             */
/*   Updated: 2019/04/03 20:16:35 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "prs_struct.h"
#include "specifiers.h"

extern t_flags	g_flags;

void	ft_unbr(intmax_t nb)
{
	g_flags.space = 0;
	g_flags.plus = 0;
	ft_nbr(nb);
}
