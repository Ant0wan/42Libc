/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 18:19:57 by abarthel          #+#    #+#             */
/*   Updated: 2019/03/12 12:44:45 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "prs_struct.h"
#include "retwriter.h"
#include "libft.h"
#include "ft_wchar.h"

#define UTF8ENCOD_SIZE  4

extern t_options	g_options;
extern t_modifier	g_modifier;

void	ft_str(char *str)
{
	if (g_modifier.l)
		wretwriter((wchar_t*)str, ft_wcslen((wchar_t*)str) * UTF8ENCOD_SIZE);
	else
		retwriter(str, g_options.precision ? g_options.precision
				: ft_strlen(str));
}
