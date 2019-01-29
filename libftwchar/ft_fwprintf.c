/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fwprintf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 15:35:34 by abarthel          #+#    #+#             */
/*   Updated: 2019/01/29 15:27:44 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_wchar.h"

int		ft_fwprintf(g_FILE *restrict stream, const wchar_t *restrict format, ...)
{
	// test
	ft_putstr("\n");
	void *(*f)();
	f = dispatcher("c");
	f('o');
	f = dispatcher("s");
	f("Hello World !\n");
	f = dispatcher("d");
	ft_putstr(f(-42));
	// end test
	
	return (0);
}
