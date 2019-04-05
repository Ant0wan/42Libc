/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unbr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 20:01:40 by abarthel          #+#    #+#             */
/*   Updated: 2019/04/05 15:26:52 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "prs_struct.h"
#include "specifiers.h"
#include "prefix.h"
#include "format.h"

extern t_flags	g_flags;
extern t_prefix	g_prefix;

void	ft_unbr(intmax_t nb)
{
	g_prefix.len = ft_nbrlen(nb);
	g_flags.space = 0;
	g_flags.plus = 0;
	ft_nbr(nb);
}
