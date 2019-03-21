/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dispatcher.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 14:51:32 by abarthel          #+#    #+#             */
/*   Updated: 2019/03/21 16:35:24 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "specifiers.h"
#include "struct_disp.h"
#include "prs_tools.h"
#include "libft.h"
#include "ft_wchar.h"

#ifndef T_
# define T_ (void*)
#endif

#ifndef NB_PTR
# define NB_PTR 28
#endif

static const t_specifier	g_specifier[] =
{
	{ 'c', T_ & ft_chr},
	{ 'd', T_ & ft_nbr},
	{ 'e', T_ & ft_putnbr},
	{ 'f', T_ & ft_putnbr},
	{ 'i', T_ & ft_nbr},
	{ 'o', T_ & ft_putnbr_octal},
	{ 's', T_ & ft_str},
	{ 'u', T_ & ft_putuint},
	{ 'x', T_ & ft_putnbr_lowhexa},
	{ 'X', T_ & ft_putnbr_upphexa},
	{ 'C', T_ & ft_wchr},
	{ 'p', T_ & ft_putaddr},
	{ 'n', T_ & ft_n},
	{ 'D', T_ & ft_putuint},
	{ 'O', T_ & ft_putuint_octal},
	{ 'U', T_ & ft_putuint},
	{ 'E', T_ & ft_putaddr},
	{ 'F', T_ & ft_putaddr},
	{ 'g', T_ & ft_putaddr},
	{ 'G', T_ & ft_putaddr},
	{ 'a', T_ & ft_putaddr},
	{ 'A', T_ & ft_putaddr},
	{ 'S', T_ & ft_wstr},
	{ '%', T_ & ft_putchar},
	{ 'k', T_ & ft_putaddr},
	{ 'r', T_ & ft_putaddr},
	{ 'B', T_ & ft_putwcbits},
	{ 'b', T_ & ft_printbits}
};

void	*dispatcher(char c)
{
	char	i;

	i = 0;
	while (i < NB_PTR && g_specifier[(int)i].type != c)
		++i;
	if (i == NB_PTR)
		return (NULL);
	else
		return (g_specifier[(int)i].f);
}
