/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 17:27:50 by abarthel          #+#    #+#             */
/*   Updated: 2019/03/25 12:06:44 by abarthel         ###   ########.fr       */
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

//	printf("\n____ PADDING TEST ____\n");
//	printf(" LENGTH va_list: %lu\n", sizeof(va_list));
//	printf(" LENGTH t_ret: %lu\n", sizeof(t_ret));
//	printf(" LENGTH t_modifier: %lu\n", sizeof(t_modifier));
//	printf(" LENGTH t_flags: %lu\n", sizeof(t_flags));
//	printf(" LENGTH t_options: %lu\n", sizeof(t_options));
//	printf(" LENGTH sizeof unsigned char: %lu\n", sizeof(unsigned char));
//	printf(" LENGTH sizeof short: %lu\n", sizeof(short));
//	printf(" LENGTH sizeof int: %lu\n", sizeof(int));
//	printf(" LENGTH sizeof size_t: %lu\n", sizeof(size_t));
//	printf(" LENGTH sizeof intmax_t: %lu\n", sizeof(intmax_t));
//	printf(" LENGTH sizeof long long: %lu\n", sizeof(long long));
//	printf("‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾\n\n");

	int ret1;
	int ret2;

	ret1 = printf("a|%-.x|", 0);
	printf("%d\n", ret1);
	ret2 = ft_printf("a|%-.x|", 0);
	printf("%d\n", ret2);
	ret1 = printf("a|%-#.x|", 0);
	printf("%d\n", ret1);
	ret2 = ft_printf("a|%-#.x|", 0);
	printf("%d\n", ret2);
	printf("\n\n");
//
	ret1 = printf("b|%- 0.0x|", &ret1);
	printf("%d\n", ret1);
	ret2 = ft_printf("b|%- 0.0x|", &ret1);
	printf("%d\n", ret2);
	ret1 = printf("b|%-# 0.0x|", &ret1);
	printf("%d\n", ret1);
	ret2 = ft_printf("b|%-# 0.0x|", &ret1);
	printf("%d\n", ret2);
	printf("\n\n");

	ret1 = printf("c|%-.50x|", &ret1);
	printf("%d\n", ret1);
	ret2 = ft_printf("c|%-.50x|", &ret1);
	printf("%d\n", ret2);
	ret1 = printf("c|%-#40.0x|", &ret1);
	printf("%d\n", ret1);
	ret2 = ft_printf("c|%-#40.0x|", &ret1);
	printf("%d\n", ret2);
	printf("\n\n");
	
	ret1 = printf("5|%-.5x|", &ret1);
	printf("%d\n", ret1);
	ret2 = ft_printf("5|%-.5x|", &ret1);
	printf("%d\n", ret2);
	ret1 = printf("5|%-#.5x|", &ret1);
	printf("%d\n", ret1);
	ret2 = ft_printf("5|%-#.5x|", &ret1);
	printf("%d\n", ret2);
	printf("\n\n");

	ret1 = printf("d|%-x|", 0);
	printf("%d\n", ret1);
	ret2 = ft_printf("d|%-x|", 0);
	printf("%d\n", ret2);
	ret1 = printf("d|%-#2x|", 0);
	printf("%d\n", ret1);
	ret2 = ft_printf("d|%-#2x|", 0);
	printf("%d\n", ret2);
	printf("\n\n");
	
	ret1 = printf("e|%-10.8x|", &ret1);
	printf("%d\n", ret1);
	ret2 = ft_printf("e|%-10.8x|", &ret1);
	printf("%d\n", ret2);
	ret1 = printf("e|%-#10.8x|", &ret1);
	printf("%d\n", ret1);
	ret2 = ft_printf("e|%-#10.8x|", &ret1);
	printf("%d\n", ret2);
	printf("\n\n");

	ret1 = printf("e.|%-#10.9x|", &ret1);
	printf("%d\n", ret1);
	ret2 = ft_printf("e.|%-#10.9x|", &ret1);
	printf("%d\n", ret2);
	printf("\n\n");

	ret1 = printf("f.|%-#10.9x|", 87945612);
	printf("%d\n", ret1);
	ret2 = ft_printf("f.|%-#10.9x|", 87945612);
	printf("%d\n", ret2);
	ret1 = printf("f.|%-#10.8x|", 87945612);
	printf("%d\n", ret1);
	ret2 = ft_printf("f.|%-#10.8x|", 87945612);
	printf("%d\n", ret2);
	ret1 = printf("f.|%-#10.7x|", 87945612);
	printf("%d\n", ret1);
	ret2 = ft_printf("f.|%-#10.7x|", 87945612);
	printf("%d\n", ret2);
	ret1 = printf("f.|%-#10.10x|", 87945612);
	printf("%d\n", ret1);
	ret2 = ft_printf("f.|%-#10.10x|", 87945612);
	printf("%d\n", ret2);
	ret1 = printf("f.|%-10.9x|", 87945612);
	printf("%d\n", ret1);
	ret2 = ft_printf("f.|%-10.9x|", 87945612);
	printf("%d\n", ret2);
	printf("\n\n");

	ret1 = printf("f|%-10.9x|", UINT_MAX);
	printf("%d\n", ret1);
	ret2 = ft_printf("f|%-10.9x|", UINT_MAX);
	printf("%d\n", ret2);
	ret1 = printf("f|%-#10.9x|", UINT_MAX + 4);
	printf("%d\n", ret1);
	ret2 = ft_printf("f|%-#10.9x|", UINT_MAX + 4);
	printf("%d\n", ret2);
	printf("\n\n");

	ret1 = printf(">|%-10.10hx|", INT_MAX);
	printf("%d\n", ret1);
	ret2 = ft_printf(">|%-10.10hx|", INT_MAX);
	printf("%d\n", ret2);
	ret1 = printf(">|%-#10.10hx|", INT_MAX);
	printf("%d\n", ret1);
	ret2 = ft_printf(">|%-#10.10hx|", INT_MAX);
	printf("%d\n", ret2);
	printf("\n\n");

	ret1 = printf("z|%-#14.10hhx|", LONG_MIN);
	printf("%d\n", ret1);
	ret2 = ft_printf("z|%-#14.10hhx|", LONG_MIN);
	printf("%d\n", ret2);
	ret1 = printf("z|%-#14.10hx|", LONG_MIN);
	printf("%d\n", ret1);
	ret2 = ft_printf("z|%-#14.10hx|", LONG_MIN);
	printf("%d\n", ret2);
	printf("\n\n");

	
	return (0);
}
