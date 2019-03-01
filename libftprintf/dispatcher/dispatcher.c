/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dispatcher.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 14:51:32 by abarthel          #+#    #+#             */
/*   Updated: 2019/03/01 13:54:20 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "dispatcher.h"
#define T_ (void*)
#define W_ (void *(*)())
#include "struct_disp.h"
#include "wrappers.h"
#include "libft.h"
#include "ft_wchar.h"
#include "specifiers.h"

const t_specifier	g_specifier[] =
{
	{ 'c', T_ & ft_putchar, W_ & passive_wrap},
	{ 'd', T_ & signedint, W_ & passive_wrap},
	{ 'e', T_ & ft_putnbr, W_ & passive_wrap},
	{ 'f', T_ & ft_putnbr, W_ & passive_wrap},
	{ 'i', T_ & ft_putnbr, W_ & passive_wrap},
	{ 'o', T_ & ft_putnbr_octal, W_ & passive_wrap},
	{ 's', T_ & ft_str, W_ & cs_wrap},
	{ 'u', T_ & ft_putuint, W_ & passive_wrap},
	{ 'x', T_ & ft_putnbr_lowhexa, W_ & passive_wrap},
	{ 'X', T_ & ft_putnbr_upphexa, W_ & passive_wrap},
	{ 'C', T_ & ft_putwchar, W_ & passive_wrap},
	{ 'p', T_ & ft_putaddr, W_ & passive_wrap},
	{ 'n', T_ & ft_putaddr, W_ & passive_wrap},
	{ 'D', T_ & ft_putuint, W_ & passive_wrap},
	{ 'O', T_ & ft_putuint_octal, W_ & passive_wrap},
	{ 'U', T_ & ft_putuint, W_ & passive_wrap},
	{ 'E', T_ & ft_putaddr, W_ & passive_wrap},
	{ 'F', T_ & ft_putaddr, W_ & passive_wrap},
	{ 'g', T_ & ft_putaddr, W_ & passive_wrap},
	{ 'G', T_ & ft_putaddr, W_ & passive_wrap},
	{ 'a', T_ & ft_putaddr, W_ & passive_wrap},
	{ 'A', T_ & ft_putaddr, W_ & passive_wrap},
	{ 'S', T_ & ft_putwstr, W_ & passive_wrap},
	{ '%', T_ & ft_putchar, W_ & passive_wrap},
	{ 'k', T_ & ft_putaddr, W_ & passive_wrap},
	{ 'r', T_ & ft_putaddr, W_ & passive_wrap},
	{ 'B', T_ & ft_putwcbits, W_ & passive_wrap},
	{ 'b', T_ & ft_printbits, W_ & passive_wrap}
};

t_specifier				dispatcher(char c)
{
	char	i;

	i = 0;
	while (i < NB_PTR && g_specifier[(int)i].type != c)
		++i;
	if (i == NB_PTR)
		return ((t_specifier){.f = NULL, .wrapper = NULL});
	else
		return ((t_specifier){.f = g_specifier[(int)i].f,
				.wrapper = g_specifier[(int)i].wrapper});
}
