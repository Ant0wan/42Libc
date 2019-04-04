/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_o_basic1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartel <jmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 10:46:53 by jmartel           #+#    #+#             */
/*   Updated: 2019/04/04 16:55:49 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int			main(void)
{
	int ret;
	int	nb = 45;
	ret = ft_printf("test b:%b", nb);
	printf("|%d\n", ret);
	ret = printf("test b:%b", nb);
	printf("|%d\n", ret);
	ret = ft_printf("hash:%#b", nb);
	printf("|%d\n", ret);
	ret = printf("hash:%#b", nb);
	printf("|%d\n", ret);
	ret = ft_printf("precisibn / grande:%.5b", nb);
	printf("|%d\n", ret);
	ret = printf("precisibn / grande:%.5b", nb);
	printf("|%d\n", ret);
	ret = ft_printf("Prec + hash / grande:%#.5b", nb);
	printf("|%d\n", ret);
	ret = printf("Prec + hash / grande:%#.5b", nb);
	printf("|%d\n", ret);
	ret = ft_printf("Prec + hash / petite:%#.1b", nb);
	printf("|%d\n", ret);
	ret = printf("Prec + hash / petite:%#.1b", nb);
	printf("|%d\n", ret);
	ret = ft_printf("Prec + 0:%0.5b", nb);
	printf("|%d\n", ret);
	ret = printf("Prec + 0:%0.5b", nb);
	printf("|%d\n", ret);
	ret = ft_printf("Prec + minus:%-.5b", nb);
	printf("|%d\n", ret);
	ret = printf("Prec + minus:%-.5b", nb);
	printf("|%d\n", ret);
	ret = ft_printf("Size:%5b", nb);
	printf("|%d\n", ret);
	ret = printf("Size:%5b", nb);
	printf("|%d\n", ret);
	ret = ft_printf("size + prec:%7.3b", nb);
	printf("|%d\n", ret);
	ret = printf("size + prec:%7.3b", nb);
	printf("|%d\n", ret);
	ret = ft_printf("size + minus:%-5b", nb);
	printf("|%d\n", ret);
	ret = printf("size + minus:%-5b", nb);
	printf("|%d\n", ret);
	ret = ft_printf("size + zerb:%05b", nb);
	printf("|%d\n", ret);
	ret = printf("size + zerb:%05b", nb);
	printf("|%d\n", ret);
	ret = ft_printf("size + zerb + hash:%#05b", nb);
	printf("|%d\n", ret);
	ret = printf("size + zerb + hash:%#05b", nb);
	printf("|%d\n", ret);
	ret = ft_printf("size + zerb + prec:%05.3b", nb);
	printf("|%d\n", ret);
	ret = printf("size + zerb + prec:%05.3b", nb);
	printf("|%d\n", ret);
	ret = ft_printf("size + minus + prec:%-5.3b", nb);
	printf("|%d\n", ret);
	ret = printf("size + minus + prec:%-5.3b", nb);
	printf("|%d\n", ret);
	ret = ft_printf("size + hash + zerb + prec:%#05.3b", nb);
	printf("|%d\n", ret);
	ret = printf("size + hash + zerb + prec:%#05.3b", nb);
	printf("|%d\n", ret);
	ret = ft_printf("size + hash + zerb + prec:%0#5.3b", nb);
	printf("|%d\n", ret);
	ret = printf("size + hash + zerb + prec:%0#5.3b", nb);
	printf("|%d\n", ret);
	ret = ft_printf("size + hash + minus + prec:%-#7.3b", nb);
	printf("|%d\n", ret);
	ret = printf("size + hash + minus + prec:%-#7.3b", nb);
	printf("|%d\n", ret);
	printf("\n\n");
	printf("\n\n");
	return (0);
}
