/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fwprintf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 15:35:34 by abarthel          #+#    #+#             */
/*   Updated: 2019/01/28 16:01:30 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fwprintf.c"

int		ft_fwprintf(FILE *restrict stream, const wchar_t *restrict format, ...)
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
