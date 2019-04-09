/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 17:27:50 by abarthel          #+#    #+#             */
/*   Updated: 2019/04/09 18:54:14 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dispatcher.h"
#include "ft_printf.h"
#include "prs_struct.h"
#include <stdio.h>
#include <locale.h>
#include <limits.h>
#include <stdlib.h>


// make test && gcc -fsanitize=address -Wall -Wextra -Werror main.c libftprintf.a -I./libftprintf/dispatcher/ -I./libftprintf && ./a.out

int main(void)
{

	setlocale(LC_ALL, "");
	int ret;
	char    *str;
	str = "Okalm";

	ft_printf("test basique:%s\n", str);
	dprintf(2, "test basique:%s\n", str);
	ft_printf("precision / zero:%.0s\n", str);
	dprintf(2, "precision / zero:%.0s\n", str);
	ft_printf("precision / petite:%.5s\n", str);
	dprintf(2, "precision / petite:%.5s\n", str);
	ft_printf("precision / grande:%.15s\n", str);
	dprintf(2, "precision / grande:%.15s\n", str);
	ft_printf("prec + minus:%-.5s\n", str);
	dprintf(2, "prec + minus:%-.5s\n", str);
	ft_printf("size / petite:%5s\n", str);
	dprintf(2, "size / petite:%5s\n", str);
	ft_printf("size / grande:%15s\n", str);
	dprintf(2, "size / grande:%15s\n", str);
	ft_printf("Minus + size / petite:%-5s\n", str);
	dprintf(2, "Minus + size / petite:%-5s\n", str);
	ft_printf("Minus + size / grande:%-15s\n", str);
	dprintf(2, "Minus + size / grande:%-15s\n", str);
	ft_printf("Minus + size + prec:%-15.5s\n", str);
	dprintf(2, "Minus + size + prec:%-15.5s\n", str);
	ft_printf("NULL:%12s\n", NULL);
	dprintf(2, "NULL:%12s\n", NULL);
	ft_printf("NULL:%1s\n", NULL);
	dprintf(2, "NULL:%1s\n", NULL);
	ft_printf("NULL:%-5.6s\n", NULL);
	dprintf(2, "NULL:%-5.6s\n", NULL);
	ft_printf("NULL:%-.8s\n", NULL);
	dprintf(2, "NULL:%-.8s\n", NULL);
	ft_printf("NULL:%.12s\n", NULL);
	dprintf(2, "NULL:%.12s\n", NULL);
	ft_printf("empty:%-.5s\n", "");
	dprintf(2, "empty:%-.5s\n", "");
	ft_printf("empty:%-1.32s\n", "");
	dprintf(2, "empty:%-1.32s\n", "");
	ft_printf("empty:%1.4s\n", "");
	dprintf(2, "empty:%1.4s\n", "");
	ft_printf("empty:%23s\n", "");
	dprintf(2, "empty:%23s\n", "");






	return (0);
}
