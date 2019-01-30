/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   disptacher.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 12:37:47 by abarthel          #+#    #+#             */
/*   Updated: 2019/01/30 17:02:09 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dispatcher.h"
#include "struct_dispatch.h"

#include <stdlib.h>

#include "libft.h"
#include "ft_wchar.h"

static const t_operator	g_flag[] =
{
	{ L" ", NULL},
	{ L"+", NULL},
	{ L"-", NULL},
	{ L"#", NULL},
	{ L"0", NULL},
	{ L"\'", NULL},
	{ L"I", NULL},
	{ L"\0", NULL}
};

static const t_operator	g_precision[] =
{
	{ L"o", NULL},
	{ L"x", NULL},
	{ L"X", NULL},
	{ L"e", NULL},
	{ L"E", NULL},
	{ L"g", NULL},
	{ L"G", NULL},
	{ L"\0", NULL}
};

static const t_operator	g_specifier[] =
{
	{ L"c", NULL},
	{ L"hd", NULL},
	{ L"hu", NULL},
	{ L"u", NULL},
	{ L"u", NULL},
	{ L"f", NULL},
	{ L"d", (void*)&ft_itoa},
	{ L"i", (void*)&ft_itoa},
	{ L"ld", (void*)&ft_itoa},
	{ L"lu", (void*)&ft_itoa},
	{ L"lld", (void*)&ft_itoa},
	{ L"llu", (void*)&ft_itoa},
	{ L"lf", NULL},
	{ L"Lf", NULL},
	{ L"s", (void*)&ft_putstr},
	{ L"\0", NULL}
};

void					*dispatcher(char *str)
{
	int	i;

	i = 0;
	while (g_specifier[i].type[0] && ft_wcscmp(g_specifier[i].type, str))
		++i;
	if (g_specifier[i].type[0])
		return (g_specifier[i].f);
	return (NULL);
}
