/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartel <jmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 10:46:53 by jmartel           #+#    #+#             */
/*   Updated: 2019/04/05 16:53:42 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int			main(void)
{
	int ret;
	int		nb = 0;
	ret = ft_printf("%o", nb);
	printf("|%d\n", ret);
	ret = printf("%o", nb);
	printf("|%d\n", ret);
	ret = ft_printf("test X:%o", nb);
	printf("|%d\n", ret);
	ret = printf("test X:%o", nb);
	printf("|%d\n", ret);
	ret = ft_printf("Hash:%#o", nb);
	printf("|%d\n", ret);
	ret = printf("Hash:%#o", nb);
	printf("|%d\n", ret);
	ret = ft_printf("prec / grande:%.5o", nb);
	printf("|%d\n", ret);
	ret = printf("prec / grande:%.5o", nb);
	printf("|%d\n", ret);
	ret = ft_printf("prec / petite:%.0o", nb);
	printf("|%d\n", ret);
	ret = printf("prec / petite:%.0o", nb);
	printf("|%d\n", ret);
	ret = ft_printf("hash + prec / grande:%#.5o", nb);
	printf("|%d\n", ret);
	ret = printf("hash + prec / grande:%#.5o", nb);
	printf("|%d\n", ret);
	ret = ft_printf("hash + prec / petite:%#.1o", nb);
	printf("|%d\n", ret);
	ret = printf("hash + prec / petite:%#.1o", nb);
	printf("|%d\n", ret);
	ret = ft_printf("prec + 0: %0.5o", nb);
	printf("|%d\n", ret);
	ret = printf("prec + 0: %0.5o", nb);
	printf("|%d\n", ret);
	ret = ft_printf("Prec + minus:%-.5o", nb);
	printf("|%d\n", ret);
	ret = printf("Prec + minus:%-.5o", nb);
	printf("|%d\n", ret);
	ret = ft_printf("size:%5o", nb);
	printf("|%d\n", ret);
	ret = printf("size:%5o", nb);
	printf("|%d\n", ret);
	ret = ft_printf("size + prec:%7.3o", nb);
	printf("|%d\n", ret);
	ret = printf("size + prec:%7.3o", nb);
	printf("|%d\n", ret);
	ret = ft_printf("size + mminus:%-5o", nb);
	printf("|%d\n", ret);
	ret = printf("size + mminus:%-5o", nb);
	printf("|%d\n", ret);
	ret = ft_printf("size + 0:%05o", nb);
	printf("|%d\n", ret);
	ret = printf("size + 0:%05o", nb);
	printf("|%d\n", ret);
	ret = ft_printf("size + 0 + hash:%#05o", nb);
	printf("|%d\n", ret);
	ret = printf("size + 0 + hash:%#05o", nb);
	printf("|%d\n", ret);
	ret = ft_printf("size + 0 + prec:%05.3o", nb);
	printf("|%d\n", ret);
	ret = printf("size + 0 + prec:%05.3o", nb);
	printf("|%d\n", ret);
	ret = ft_printf("size + minus + prec:%-5.3o", nb);
	printf("|%d\n", ret);
	ret = printf("size + minus + prec:%-5.3o", nb);
	printf("|%d\n", ret);
	ret = ft_printf("size + hash + 0 + prec:%#05.3o", nb);
	printf("|%d\n", ret);
	ret = printf("size + hash + 0 + prec:%#05.3o", nb);
	printf("|%d\n", ret);
	ret = ft_printf("size + hash + 0 + prec:%0#5.3o", nb);
	printf("|%d\n", ret);
	ret = printf("size + hash + 0 + prec:%0#5.3o", nb);
	printf("|%d\n", ret);
	ret = ft_printf("size + hash + minus + prec:%-#7.3o", nb);	
	printf("|%d\n", ret);
	ret = printf("size + hash + minus + prec:%-#7.3o", nb);
	printf("|%d\n", ret);
	ret = printf("");
	nb = 0;
	ft_printf("null prec : %.0x\n", nb);
	dprintf(2, "null prec : %.0x\n", nb);
	ft_printf("null prec : %.x\n", nb);
	dprintf(2, "null prec : %.x\n", nb);
	ft_printf("null prec : %12.0x\n", nb);
	dprintf(2, "null prec : %12.0x\n", nb);
	ft_printf("null prec : %-5.x\n", nb);
	dprintf(2, "null prec : %-5.x\n", nb);

	ft_printf("null prec : %#.0x\n", nb);
	dprintf(2, "null prec : %#.0x\n", nb);
	ft_printf("null prec : %#.x\n", nb);
	dprintf(2, "null prec : %#.x\n", nb);
	ft_printf("null prec : %#12.0x\n", nb);
	dprintf(2, "null prec : %#12.0x\n", nb);
	ft_printf("null prec : %#-5.x\n", nb);
	dprintf(2, "null prec : %#-5.x\n", nb);

	nb = 0;
	ft_printf("null prec : %.0X\n", nb);
	dprintf(2,"null prec : %.0X\n", nb);
	ft_printf("null prec : %.X\n", nb);
	dprintf(2,"null prec : %.X\n", nb);
	ft_printf("null prec : %12.0X\n", nb);
	dprintf(2,"null prec : %12.0X\n", nb);
	ft_printf( "null prec : %-5.X\n", nb);
	dprintf(2,"null prec : %-5.X\n", nb);

	ft_printf("null prec : %#.0X\n", nb);
	dprintf(2, "null prec : %#.0X\n", nb);
	ft_printf("null prec : %#.X\n", nb);
	dprintf(2, "null prec : %#.X\n", nb);
	ft_printf("null prec : %#12.0X\n", nb);
	dprintf(2, "null prec : %#12.0X\n", nb);
	ft_printf("null prec : %#-5.X\n", nb);
	dprintf(2, "null prec : %#-5.X\n", nb);

	nb = 0;
	ft_printf("null prec : %.0o\n", nb);
	dprintf(2,"null prec : %.0o\n", nb);
	ft_printf("null prec : %.o\n", nb);
	dprintf(2,"null prec : %.o\n", nb);
	ft_printf("null prec : %12.0o\n", nb);
	dprintf(2,"null prec : %12.0o\n", nb);
	ft_printf( "null prec : %-5.o\n", nb);
	dprintf(2,"null prec : %-5.o\n", nb);

	ft_printf(".0null prec : %#.0o\n", nb);
	dprintf(2, ".0null prec : %#.0o\n", nb);
	ft_printf(".null prec : %#.o\n", nb);
	dprintf(2, ".null prec : %#.o\n", nb);
	ft_printf("12.0null prec : %#12.0o\n", nb);
	dprintf(2, "12.0null prec : %#12.0o\n", nb);
	ft_printf("-5.null prec : %#-5.o\n", nb);
	dprintf(2, "-5.null prec : %#-5.o\n", nb);

	nb = 21;
	ft_printf("null prec : %.0x\n", nb);
	dprintf(2, "null prec : %.0x\n", nb);
	ft_printf("null prec : %.x\n", nb);
	dprintf(2, "null prec : %.x\n", nb);
	ft_printf("null prec : %12.0x\n", nb);
	dprintf(2, "null prec : %12.0x\n", nb);
	ft_printf("null prec : %-5.x\n", nb);
	dprintf(2, "null prec : %-5.x\n", nb);

	nb = 21;
	ft_printf("null prec : %.0X\n", nb);
	dprintf(2,"null prec : %.0X\n", nb);
	ft_printf("null prec : %.X\n", nb);
	dprintf(2,"null prec : %.X\n", nb);
	ft_printf("null prec : %12.0X\n", nb);
	dprintf(2,"null prec : %12.0X\n", nb);
	ft_printf( "null prec : %-5.X\n", nb);
	dprintf(2,"null prec : %-5.X\n", nb);

	nb = 21;
	ft_printf("null prec : %.0o\n", nb);
	dprintf(2,"null prec : %.0o\n", nb);
	ft_printf("null prec : %.o\n", nb);
	dprintf(2,"null prec : %.o\n", nb);
	ft_printf("null prec : %12.0o\n", nb);
	dprintf(2,"null prec : %12.0o\n", nb);
	ft_printf( "null prec : %-5.o\n", nb);
	dprintf(2,"null prec : %-5.o\n", nb);

	nb = -543;
	ft_printf("null prec : %.0x\n", nb);
	dprintf(2, "null prec : %.0x\n", nb);
	ft_printf("null prec : %.x\n", nb);
	dprintf(2, "null prec : %.x\n", nb);
	ft_printf("null prec : %12.0x\n", nb);
	dprintf(2, "null prec : %12.0x\n", nb);
	ft_printf("null prec : %-5.x\n", nb);
	dprintf(2, "null prec : %-5.x\n", nb);

	nb = -543;
	ft_printf("null prec : %.0X\n", nb);
	dprintf(2,"null prec : %.0X\n", nb);
	ft_printf("null prec : %.X\n", nb);
	dprintf(2,"null prec : %.X\n", nb);
	ft_printf("null prec : %12.0X\n", nb);
	dprintf(2,"null prec : %12.0X\n", nb);
	ft_printf( "null prec : %-5.X\n", nb);
	dprintf(2,"null prec : %-5.X\n", nb);

	nb = -543;
	ft_printf("null prec : %.0o\n", nb);
	dprintf(2,"null prec : %.0o\n", nb);
	ft_printf("null prec : %.o\n", nb);
	dprintf(2,"null prec : %.o\n", nb);
	ft_printf("null prec : %12.0o\n", nb);
	dprintf(2,"null prec : %12.0o\n", nb);
	ft_printf( "null prec : %-5.o\n", nb);
	dprintf(2,"null prec : %-5.o\n", nb);
	return (0);
}
