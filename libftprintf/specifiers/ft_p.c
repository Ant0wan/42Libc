/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 17:00:19 by abarthel          #+#    #+#             */
/*   Updated: 2019/04/08 16:17:08 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

#include "prs_struct.h"
#include "specifiers.h"

#ifndef X64BYTES
# define X64BYTES 8
#endif

extern t_flags		g_flags;
extern t_modifier	g_modifier;

void	ft_p(void *ptr)
{
	g_flags.hash = 1;
	g_flags.apost = 0;
	if (sizeof(void*) == X64BYTES)
		g_modifier.l = 1;
	ft_lhexa((intmax_t)ptr);
}
