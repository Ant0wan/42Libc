/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 18:50:40 by abarthel          #+#    #+#             */
/*   Updated: 2019/04/03 19:31:24 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
	int		nb;
	nb = 125;
	ft_printf("space% hhd\n", nb);
	dprintf(2, "space% hhd\n", nb);
	ft_printf("plus:%+hhd\n", nb);
	dprintf(2, "plus:%+hhd\n", nb);
	ft_printf("precision:%.5hhd\n", nb);
	dprintf(2, "precision:%.5hhd\n", nb);
	ft_printf("space + prec:% .5hhd\n", nb);
	dprintf(2, "space + prec:% .5hhd\n", nb);
	ft_printf("Plus + prec / grande:%+.5hhd\n", nb);
	dprintf(2, "Plus + prec / grande:%+.5hhd\n", nb);
	ft_printf("Plus + prec / petite:%+.0hhd\n", nb);
	dprintf(2, "Plus + prec / petite:%+.0hhd\n", nb);
	ft_printf("Prec + 0:%0.5hhd\n", nb);
	dprintf(2, "Prec + 0:%0.5hhd\n", nb);
	ft_printf("Prec + minus:%-.5hhd\n", nb);
	dprintf(2, "Prec + minus:%-.5hhd\n", nb);
	ft_printf("size:%5hhd\n", nb);
	dprintf(2, "size:%5hhd\n", nb);
	ft_printf("size + space:% 5hhd\n", nb);
	dprintf(2, "size + space:% 5hhd\n", nb);
	ft_printf("size + plus:%+5hhd\n", nb);
	dprintf(2, "size + plus:%+5hhd\n", nb);
	ft_printf("size + minus:%-5hhd\n", nb);
	dprintf(2, "size + minus:%-5hhd\n", nb);
	ft_printf("size + 0:%05hhd\n", nb);
	dprintf(2, "size + 0:%05hhd\n", nb);
	ft_printf("size + 0 + plus:%+05hhd\n", nb);
	dprintf(2, "size + 0 + plus:%+05hhd\n", nb);
	ft_printf("size + 0 + plus:%0+5hhd\n", nb);
	dprintf(2, "size + 0 + plus:%0+5hhd\n", nb);
	ft_printf("size + 0 + prec:%05.3hhd\n", nb);
	dprintf(2, "size + 0 + prec:%05.3hhd\n", nb);
	ft_printf("size + minus + prec:%-5.3hhd\n", nb);
	dprintf(2, "size + minus + prec:%-5.3hhd\n", nb);
	ft_printf("size + plus + 0 + prec:%+05.3hhd\n", nb);
	dprintf(2, "size + plus + 0 + prec:%+05.3hhd\n", nb);
	ft_printf("size + espace + zero + prec:%0 5.3hhd\n", nb);
	dprintf(2, "size + espace + zero + prec:%0 5.3hhd\n", nb);
	ft_printf("size + espace + zero + prec:% 05.3hhd\n", nb);
	dprintf(2, "size + espace + zero + prec:% 05.3hhd\n", nb);
	ft_printf("size + minus + plus + prec:%-+5.3hhd\n", nb);
	dprintf(2, "size + minus + plus + prec:%-+5.3hhd\n", nb);

	nb = -125;
	printf("\n\n");
	ft_printf("space% d\n", nb);
	dprintf(2, "space% d\n", nb);
	ft_printf("plus:%+d\n", nb);
	dprintf(2, "plus:%+d\n", nb);
	ft_printf("precision:%.5d\n", nb);
	dprintf(2, "precision:%.5d\n", nb);
	ft_printf("space + prec:% .5d\n", nb);
	dprintf(2, "space + prec:% .5d\n", nb);
	ft_printf("Plus + prec / grande:%+.5d\n", nb);
	dprintf(2, "Plus + prec / grande:%+.5d\n", nb);
	ft_printf("Plus + prec / petite:%+.0d\n", nb);
	dprintf(2, "Plus + prec / petite:%+.0d\n", nb);
	ft_printf("Prec + 0:%0.5d\n", nb);
	dprintf(2, "Prec + 0:%0.5d\n", nb);
	ft_printf("Prec + minus:%-.5d\n", nb);
	dprintf(2, "Prec + minus:%-.5d\n", nb);
	ft_printf("size:%5d\n", nb);
	dprintf(2, "size:%5d\n", nb);
	ft_printf("size + space:% 5d\n", nb);
	dprintf(2, "size + space:% 5d\n", nb);
	ft_printf("size + plus:%+5d\n", nb);
	dprintf(2, "size + plus:%+5d\n", nb);
	ft_printf("size + minus:%-5d\n", nb);
	dprintf(2, "size + minus:%-5d\n", nb);
	ft_printf("size + 0:%05d\n", nb);
	dprintf(2, "size + 0:%05d\n", nb);
	ft_printf("size + 0 + plus:%+05d\n", nb);
	dprintf(2, "size + 0 + plus:%+05d\n", nb);
	ft_printf("size + 0 + plus:%0+5d\n", nb);
	dprintf(2, "size + 0 + plus:%0+5d\n", nb);
	ft_printf("size + 0 + prec:%05.3d\n", nb);
	dprintf(2, "size + 0 + prec:%05.3d\n", nb);
	ft_printf("size + minus + prec:%-5.3d\n", nb);
	dprintf(2, "size + minus + prec:%-5.3d\n", nb);
	ft_printf("size + plus + 0 + prec:%+05.3d\n", nb);
	dprintf(2, "size + plus + 0 + prec:%+05.3d\n", nb);
	ft_printf("size + espace + zero + prec:%0 5.3d\n", nb);
	dprintf(2, "size + espace + zero + prec:%0 5.3d\n", nb);
	ft_printf("size + espace + zero + prec:% 05.3d\n", nb);
	dprintf(2, "size + espace + zero + prec:% 05.3d\n", nb);
	ft_printf("size + minus + plus + prec:%-+5.3d\n", nb);
	dprintf(2, "size + minus + plus + prec:%-+5.3d\n", nb);
	printf("\n\n");
	return (0);
}
