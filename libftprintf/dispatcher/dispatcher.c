/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dispatcher.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 14:51:32 by abarthel          #+#    #+#             */
/*   Updated: 2019/02/20 10:19:29 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dispatcher.h"
#define T_ (void*)
#include "struct_disp.h"

#include <stdlib.h>
#include "libft.h"
#include "ft_wchar.h"

#define NB_PTR 28

static const t_specifier	g_specifier[] =
{
	{ 'c', T_ & ft_putchar},
	{ 'd', T_ & ft_putnbr},
	{ 'e', T_ & ft_putnbr},
	{ 'f', T_ & ft_putnbr},
	{ 'i', T_ & ft_putnbr},
	{ 'o', T_ & ft_putnbr_octal},
	{ 's', T_ & ft_putstr},
	{ 'u', T_ & ft_putnbr},
	{ 'x', T_ & ft_putnbr_lowhexa},
	{ 'X', T_ & ft_putnbr_upphexa},
	{ 'C', T_ & ft_putwchar},
	{ 'p', T_ & ft_putaddr},
	{ 'n', T_ & ft_putaddr},
	{ 'D', T_ & ft_putuint},
	{ 'O', T_ & ft_putuint_octal},
	{ 'U', T_ & ft_putaddr},
	{ 'E', T_ & ft_putaddr},
	{ 'F', T_ & ft_putaddr},
	{ 'g', T_ & ft_putaddr},
	{ 'G', T_ & ft_putaddr},
	{ 'a', T_ & ft_putaddr},
	{ 'A', T_ & ft_putaddr},
	{ 'S', T_ & ft_putwstr},
	{ '%', T_ & ft_putchar},
	{ 'k', T_ & ft_putaddr},
	{ 'r', T_ & ft_putaddr},
	{ 'B', T_ & ft_putwcbits},
	{ 'b', T_ & ft_printbits}
};

void				*dispatcher(char c)
{
	char	i;

	i = 0;
	while (i < NB_PTR && ft_strcmp(&g_specifier[(int)i].type, &c))
		++i;
	if (i == NB_PTR)
		return (NULL);
	else
		return (g_specifier[(int)i].f);
}
