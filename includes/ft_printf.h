/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 14:27:04 by abarthel          #+#    #+#             */
/*   Updated: 2019/01/25 17:30:27 by abarthel         ###   ########.fr       */
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

extern t_typeop	g_modifiers[];

extern t_typeop	g_conversions[];

extern t_typeop	g_typeoptab[];

void			ft_wputchar(wchar_t c);

int				ft_printf(const char *restrict format, ...);

void			*dispatcher(char *str);

#endif
