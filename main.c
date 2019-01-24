/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 17:35:29 by abarthel          #+#    #+#             */
/*   Updated: 2019/01/24 14:54:51 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main()
{
	printf("ft_putstr: %s\n", g_typeoptab[0].f("Hello dispatcher"));
	printf("ft_itoa then ft_putstr: %s\n", g_typeoptab[1].f(42));
	ft_printf("Hello World\n");
	return (0);
}
