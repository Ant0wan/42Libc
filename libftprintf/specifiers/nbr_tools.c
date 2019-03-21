/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nbr_tools.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/21 16:50:04 by abarthel          #+#    #+#             */
/*   Updated: 2019/03/21 16:51:56 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include <limits.h>

#include "prs_struct.h"
#include "specifiers.h"
#include "retwriter.h"

#ifndef G_ERROR
# define G_ERROR 1
#endif

extern t_modifier	g_modifier;
extern _Bool		g_error;

extern inline int	ft_get_object_size(int len, _Bool negative)
{
	int		size;

	size = 0;
	if (negative || g_flags.plus)
	{
		if (g_options.precision > g_options.width)
			size = g_options.precision > len ? g_options.precision + 1
				: len + 1;
		else
			size = g_options.width > len ? g_options.width : len + 1;
	}
	else
	{
		size = len > g_options.width ? len : g_options.width;
		if (size < g_options.precision)
			size = g_options.precision;
	}
	if (g_flags.space)
		if (!(negative))
			if (!(g_options.width > len))
				++size;
	return (size);
}
