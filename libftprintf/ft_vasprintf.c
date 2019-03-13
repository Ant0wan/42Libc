/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vasprintf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 16:13:29 by abarthel          #+#    #+#             */
/*   Updated: 2019/03/13 16:07:55 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

#include "ft_printf_prs.h"
#include "prs_struct.h"
#include "libft.h"

#ifndef RET_ERROR
# define RET_ERROR -1
#endif

#ifndef BUFF
# define BUFF 2048
#endif

int	ft_vasprintf(char **ret, const char *format, va_list ap)
{
	extern t_ret	g_ret;
	int				parse_ret;

	g_ret.max = BUFF;
	g_ret.i = -1;
	if (!(*ret = (char*)ft_memalloc(sizeof(**ret) * BUFF + 1)))
		return (RET_ERROR);
	g_ret.ret = *ret;
	if (((parse_ret = printf_prs(format, ap)) == RET_ERROR))
	{
		*ret = g_ret.ret;
		return (RET_ERROR);
	}
	*ret = g_ret.ret;
	return (parse_ret);
}
