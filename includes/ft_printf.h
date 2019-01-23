/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 14:27:04 by abarthel          #+#    #+#             */
/*   Updated: 2019/01/23 17:01:19 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>

# include <stdio.h> // DEBUGGING

typedef struct	s_typeop
{
	char	*type;
	void	*(*f)();
}				t_typeop;

t_typeop	g_typeoptab[] =
{
	{ "d", (void*)&ft_itoa},
	{ "\0", (void*)0}
};

int				ft_printf(const char *restrict format, ...);

#endif