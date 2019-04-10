/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 14:39:26 by abarthel          #+#    #+#             */
/*   Updated: 2019/04/10 13:54:58 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "prs_struct.h"
#include "prefix.h"
#include "libft.h"
#include "ft_wchar.h"
#include "str_format.h"

#ifndef NULL_STR
# define NULL_STR "(null)"
#endif

extern t_options	g_options;
extern t_modifier	g_modifier;
extern t_prefix		g_prefix;

void	ft_str(void	*str)
{
	reset_prefix();
	if (!(str))
		str = NULL_STR;
	if (g_modifier.l)
		g_prefix.len = ft_wcslen((wchar_t*)str);
	else
		g_prefix.len = ft_strlen((char*)str);
	if (g_options.precision > -1 && g_options.precision < g_prefix.len)
		g_prefix.len = g_options.precision;
	str_format(str);
}

void	ft_wstr(void *str)
{
	g_modifier.l = 1;
	ft_str(str);
}
