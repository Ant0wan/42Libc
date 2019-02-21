/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dispatcher.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 14:51:32 by abarthel          #+#    #+#             */
/*   Updated: 2019/02/21 13:50:10 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dispatcher.h"
#define T_ (void*)
#define W_ (void *(*)())
#include "struct_disp.h"
#include "wrappers.h"

#include <stdlib.h>
#include "libft.h"
#include "ft_wchar.h"

#include <stdio.h> // DEBUGGING

#define NB_PTR 28

static const t_specifier	g_specifier[] =
{
	{ 'c', T_ & ft_putchar, W_ & passivewrap},
	{ 'd', T_ & ft_putnbr, W_ & passivewrap},
	{ 'e', T_ & ft_putnbr, W_ & passivewrap},
	{ 'f', T_ & ft_putnbr, W_ & passivewrap},
	{ 'i', T_ & ft_putnbr, W_ & passivewrap},
	{ 'o', T_ & ft_putnbr_octal, W_ & passivewrap},
	{ 's', T_ & ft_putstr, W_ & passivewrap},
	{ 'u', T_ & ft_putuint, W_ & passivewrap},
	{ 'x', T_ & ft_putnbr_lowhexa, W_ & passivewrap},
	{ 'X', T_ & ft_putnbr_upphexa, W_ & passivewrap},
	{ 'C', T_ & ft_putwchar, W_ & passivewrap},
	{ 'p', T_ & ft_putaddr, W_ & passivewrap},
	{ 'n', T_ & ft_putaddr, W_ & passivewrap},
	{ 'D', T_ & ft_putuint, W_ & passivewrap},
	{ 'O', T_ & ft_putuint_octal, W_ & passivewrap},
	{ 'U', T_ & ft_putuint, W_ & passivewrap},
	{ 'E', T_ & ft_putaddr, W_ & passivewrap},
	{ 'F', T_ & ft_putaddr, W_ & passivewrap},
	{ 'g', T_ & ft_putaddr, W_ & passivewrap},
	{ 'G', T_ & ft_putaddr, W_ & passivewrap},
	{ 'a', T_ & ft_putaddr, W_ & passivewrap},
	{ 'A', T_ & ft_putaddr, W_ & passivewrap},
	{ 'S', T_ & ft_putwstr, W_ & passivewrap},
	{ '%', T_ & ft_putchar, W_ & passivewrap},
	{ 'k', T_ & ft_putaddr, W_ & passivewrap},
	{ 'r', T_ & ft_putaddr, W_ & passivewrap},
	{ 'B', T_ & ft_putwcbits, W_ & passivewrap},
	{ 'b', T_ & ft_printbits, W_ & passivewrap}
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
