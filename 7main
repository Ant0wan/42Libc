/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartel <jmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 10:46:53 by jmartel           #+#    #+#             */
/*   Updated: 2019/04/04 16:26:43 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int			main(void)
{
	int ret;
	int		nb = 12;
	ret = ft_printf("%X", nb);
	printf("|%d\n", ret);
	ret = printf("%X", nb);
	printf("|%d\n", ret);
	ret = ft_printf("test X:%X", nb);
	printf("|%d\n", ret);
	ret = printf("test X:%X", nb);
	printf("|%d\n", ret);
	ret = ft_printf("Hash:%#X", nb);
	printf("|%d\n", ret);
	ret = printf("Hash:%#X", nb);
	printf("|%d\n", ret);
	ret = ft_printf("prec / grande:%.5X", nb);
	printf("|%d\n", ret);
	ret = printf("prec / grande:%.5X", nb);
	printf("|%d\n", ret);
	ret = ft_printf("prec / petite:%.0X", nb);
	printf("|%d\n", ret);
	ret = printf("prec / petite:%.0X", nb);
	printf("|%d\n", ret);
	ret = ft_printf("hash + prec / grande:%#.5X", nb);
	printf("|%d\n", ret);
	ret = printf("hash + prec / grande:%#.5X", nb);
	printf("|%d\n", ret);
	ret = ft_printf("hash + prec / petite:%#.1X", nb);
	printf("|%d\n", ret);
	ret = printf("hash + prec / petite:%#.1X", nb);
	printf("|%d\n", ret);
	ret = ft_printf("prec + 0: %0.5X", nb);
	printf("|%d\n", ret);
	ret = printf("prec + 0: %0.5X", nb);
	printf("|%d\n", ret);
	ret = ft_printf("Prec + minus:%-.5X", nb);
	printf("|%d\n", ret);
	ret = printf("Prec + minus:%-.5X", nb);
	printf("|%d\n", ret);
	ret = ft_printf("size:%5X", nb);
	printf("|%d\n", ret);
	ret = printf("size:%5X", nb);
	printf("|%d\n", ret);
	ret = ft_printf("size + prec:%7.3X", nb);
	printf("|%d\n", ret);
	ret = printf("size + prec:%7.3X", nb);
	printf("|%d\n", ret);
	ret = ft_printf("size + mminus:%-5X", nb);
	printf("|%d\n", ret);
	ret = printf("size + mminus:%-5X", nb);
	printf("|%d\n", ret);
	ret = ft_printf("size + 0:%05X", nb);
	printf("|%d\n", ret);
	ret = printf("size + 0:%05X", nb);
	printf("|%d\n", ret);
	ret = ft_printf("size + 0 + hash:%#05X", nb);
	printf("|%d\n", ret);
	ret = printf("size + 0 + hash:%#05X", nb);
	printf("|%d\n", ret);
	ret = ft_printf("size + 0 + prec:%05.3X", nb);
	printf("|%d\n", ret);
	ret = printf("size + 0 + prec:%05.3X", nb);
	printf("|%d\n", ret);
	ret = ft_printf("size + minus + prec:%-5.3X", nb);
	printf("|%d\n", ret);
	ret = printf("size + minus + prec:%-5.3X", nb);
	printf("|%d\n", ret);
	ret = ft_printf("size + hash + 0 + prec:%#05.3X", nb);
	printf("|%d\n", ret);
	ret = printf("size + hash + 0 + prec:%#05.3X", nb);
	printf("|%d\n", ret);
	ret = ft_printf("size + hash + 0 + prec:%0#5.3X", nb);
	printf("|%d\n", ret);
	ret = printf("size + hash + 0 + prec:%0#5.3X", nb);
	printf("|%d\n", ret);
	ret = ft_printf("size + hash + minus + prec:%-#7.3X", nb);	
	printf("|%d\n", ret);
	ret = printf("size + hash + minus + prec:%-#7.3X", nb);
	printf("|%d\n", ret);
	ret = printf("");
	return (0);
}
