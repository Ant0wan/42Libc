/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dispatcher.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 14:51:32 by abarthel          #+#    #+#             */
/*   Updated: 2019/03/25 12:25:05 by abarthel         ###   ########.fr       */
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
# define NB_PTR 27
#endif

static const t_specifier	g_specifier[] =
{
	{ 'c', T_ & ft_chr}, // OK
	{ 'd', T_ & ft_nbr}, // OK
	{ 'e', T_ & ft_putnbr},
	{ 'f', T_ & ft_putnbr},
	{ 'i', T_ & ft_nbr}, // OK
	{ 'o', T_ & ft_putnbr_octal},
	{ 's', T_ & ft_str}, // OK
	{ 'u', T_ & ft_unbr}, // OK
	{ 'x', T_ & ft_x},
	{ 'X', T_ & ft_x},
	{ 'C', T_ & ft_wchr}, // not all OK
	{ 'p', T_ & ft_putaddr},
	{ 'n', T_ & ft_n}, // OK
	{ 'D', T_ & ft_putuint},
	{ 'O', T_ & ft_putuint_octal},
	{ 'U', T_ & ft_uold}, // OK
	{ 'E', T_ & ft_putaddr},
	{ 'F', T_ & ft_putaddr},
	{ 'g', T_ & ft_putaddr},
	{ 'G', T_ & ft_putaddr},
	{ 'a', T_ & ft_putaddr},
	{ 'A', T_ & ft_putaddr},
	{ 'S', T_ & ft_wstr}, // not all OK
	{ 'k', T_ & ft_putaddr}, // date in ISO
	{ 'r', T_ & ft_putaddr}, // non printable character print
	{ 'b', T_ & ft_printbits}, // binary print of the characterm use modifiers for the length
	{ 'y', T_ & ft_printbits} // wild cards should works, modifiers are Bold/italic.. width is foreground color, and precision is background color, what about options ? try to use forum marksup
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
