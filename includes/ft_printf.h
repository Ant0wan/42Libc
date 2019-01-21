/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 09:37:30 by abarthel          #+#    #+#             */
/*   Updated: 2019/01/21 14:26:59 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>

t_type	g_typetab[] =
{
	{ "c", &conv_chr},
	{ "s", &conv_str},
	{ "p", &na},
	{ "d", &na},
	{ "i", &na},
	{ "o", &na},
	{ "u", &na},
	{ "x", &na},
	{ "X", &na},
	{ "hh", &na},
	{ "h", &na},
	{ "l", &na},
	{ "ll", &na},
	{ "L", &na},
	{ "f", &na},
	{ "b", &na},
	{ "r", &na},
	{ "k", &na}
};

t_flag	g_flag_tab[] =
{
	{ "%", &na},
	{ "#", &na},
	{ "0", &na},
	{ "-", &na},
	{ "+", &na},
	{ ".", &na},
	{ "*", &na},
	{ "$", &na},
	{ "'", &na},
};

#endif
