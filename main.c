/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 17:27:50 by abarthel          #+#    #+#             */
/*   Updated: 2019/04/16 17:00:27 by abarthel         ###   ########.fr       */
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

//void	*malloc(size_t s)
//{
//	static int i;
//	void *ptr;
//
//	++i;
//	if (i % 2)
//	{
//		ptr = valloc(s);
//		return (ptr);
//
//	}
//	else
//		return NULL;
//}


int main(void)
{
	//	setlocale(LC_ALL, "");
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

	ret1 = printf("|%f|", 124.15545454545454);
	printf("%d\n", ret1);


//	ret1 = printf("hello%4294967298d|", 1234);
//	printf("%d\n", ret1);
//	ret2 = ft_printf("hello%4294967298d|", 1234);
//	printf("%d\n", ret2);
//	printf("\n\n");
//	ret1 = printf("wd%2147483647d|", 1234);
//	printf("%d\n", ret1);
//	ret2 = ft_printf("wd%2147483647d|", 1234);
//	printf("%d\n", ret2);
//	printf("\n\n");
//	ret1 = printf("%-4294967292.2s is a string", "");
//	printf("%d\n", ret1);
//	ret2 = ft_printf("%-4294967292.2s is a string", "");
//	printf("%d\n", ret2);
//	printf("\n\n");

	ret1 = printf("%p", 0);
	printf("%d\n", ret1);
	ret2 = ft_printf("%p", 0);
	printf("%d\n", ret2);
	printf("\n\n");
	ret1 = printf("% kZoooo");
	printf("%d\n", ret1);
	ret2 = ft_printf("% kZoooo");
	printf("%d\n", ret2);
	printf("\n\n");
	ret1 = printf("{%5p}", 0);
	printf("%d\n", ret1);
	ret2 = ft_printf("{%5p}", 0);
	printf("%d\n", ret2);
	printf("\n\n");
	ret1 = printf("{%03c}", 0);
	printf("%d\n", ret1);
	ret2 = ft_printf("{%03c}", 0);
	printf("%d\n", ret2);
	printf("\n\n");
	ret1 = printf("{% S}", NULL);
	printf("%d\n", ret1);
	ret2 = ft_printf("{% S}", NULL);
	printf("%d\n", ret2);
	printf("\n\n");
	ret1 = printf("{% 4.3s}", NULL);
	printf("%d\n", ret1);
	ret2 = ft_printf("{% 4.3s}", NULL);
	printf("%d\n", ret2);
	printf("\n\n");
	ret1 = printf("%.0p, %.p", 0, 0);
	printf("%d\n", ret1);
	ret2 = ft_printf("%.0p, %.p", 0, 0);
	printf("%d\n", ret2);
	printf("\n\n");
	ret1 = printf("%.p, %.0p", 0, 0);
	printf("%d\n", ret1);
	ret2 = ft_printf("%.p, %.0p", 0, 0);
	printf("%d\n", ret2);
	printf("\n\n");
	ret1 = printf("%O", LONG_MIN);
	printf("|%d\n", ret1);
	ret2 = ft_printf("%O", LONG_MIN);
	printf("|%d\n", ret2);
	printf("\n\n");
	ret1 = printf("% llO", LONG_MAX);
	printf("|%d\n", ret1);
	ret2 = ft_printf("% llO", LONG_MAX);
	printf("|%d\n", ret2);
	printf("\n\n");
	ret1 = printf("%#llO", ULONG_MAX);
	printf("|%d\n", ret1);
	ret2 = ft_printf("%#llO", ULONG_MAX);
	printf("|%d\n", ret2);
	printf("\n\n");
	ret1 = printf("{%*d}", -5, 42);
	printf("|%d\n", ret1);
	ret2 = ft_printf("{%*d}", -5, 42);
	printf("|%d\n", ret2);
	printf("\n\n");
	ret1 = printf("{%*p}", -5, 42);
	printf("|%d\n", ret1);
	ret2 = ft_printf("{%*p}", -5, 42);
	printf("|%d\n", ret2);
	printf("\n\n");
	ret1 = printf("{%05.*d}", -15, 42);
	printf("|%d\n", ret1);
	ret2 = ft_printf("{%05.*d}", -15, 42);
	printf("|%d\n", ret2);
	printf("\n\n");
	ret1 = printf("{%f}{%F}", 1.42, 1.42);
	printf("%d\n", ret1);
	ret2 = ft_printf("{%f}{%F}", 1.42, 1.42);
	printf("%d\n", ret2);
	printf("\n\n");
	ret1 = printf("{%-13p}", &strlen);
	printf("|%d\n", ret1);
	ret2 = ft_printf("{%-13p}", &strlen);
	printf("|%d\n", ret2);
	printf("\n\n");
	ret1 = printf("{%13p}", &strlen);
	printf("|%d\n", ret1);
	ret2 = ft_printf("{%13p}", &strlen);
	printf("|%d\n", ret2);
	printf("\n\n");
	ret1 = printf("{%03c}", 0);
	printf("|%d\n", ret1);
	ret2 = ft_printf("{%03c}", 0);
	printf("|%d\n", ret2);
	printf("\n\n");
	printf("\n\n");
	printf("\n\n");
	printf("\n\n");
	printf("\nUNDEFINED BEHAVIOR\n");
	printf("\n\n");
	// UNDEFINED BEHAVIOR //
	ret1 = printf("%jhd", 9223372036854775807);
	printf("%d\n", ret1);
	ret2 = ft_printf("%jhd", 9223372036854775807);
	printf("%d\n", ret2);
	printf("\n\n");
	ret1 = printf("@main_ftprintf: %####0000 33..1..#00d\n", 256);
	printf("%d\n", ret1);
	ret2 = ft_printf("@main_ftprintf: %####0000 33..1..#00d\n", 256);
	printf("%d\n", ret2);
	printf("\n\n");
	ret1 = printf("@main_ftprintf: %####0000 33..1..#00s\n", "DO");
	printf("%d\n", ret1);
	ret2 = ft_printf("@main_ftprintf: %####0000 33..1..#00s\n", "DO");
	printf("%d\n", ret2);
	printf("\n\n");
	ret1 = printf("%05%");
	printf("%d\n", ret1);
	ret2 = ft_printf("%05%");
	printf("%d\n", ret2);
	printf("\n\n");
	ret1 = printf("%010s is a string", "this");
	printf("%d\n", ret1);
	ret2 = ft_printf("%010s is a string", "this");
	printf("%d\n", ret2);
	printf("\n\n");
	printf("\n\n");
	printf("\n\n");
	printf("\n\n");
	printf("\n\n");
	printf("\nDEFINED\n");
	printf("\n\n");
	printf("\n\n");
	ret1 = printf("%p", &ret1);
	printf("|%d\n", ret1);
	ret2 = ft_printf("%p", &ret1);
	printf("|%d\n", ret2);
	printf("\n\n");
	ret1 = printf("{%03c}", 0);
	printf("|%d\n", ret1);
	ret2 = ft_printf("{%03c}", 0);
	printf("|%d\n", ret2);
	printf("\n\n");
	ret1 = printf("{%-13p}", &strlen);
	printf("|%d\n", ret1);
	ret2 = ft_printf("{%-13p}", &strlen);
	printf("|%d\n", ret2);
	printf("\n\n");
	ret1 = printf("{%-14p}", &strlen);
	printf("|%d\n", ret1);
	ret2 = ft_printf("{%-14p}", &strlen);
	printf("|%d\n", ret2);
	printf("\n\n");
	ret1 = printf("{%-12p}", &strlen);
	printf("|%d\n", ret1);
	ret2 = ft_printf("{%-12p}", &strlen);
	printf("|%d\n", ret2);
	printf("\n\n");
	ret1 = printf("{%-#6lx}", (unsigned long)121354);
	printf("|%d\n", ret1);
	ret2 = ft_printf("{%-#6lx}", (unsigned long)121354);
	printf("|%d\n", ret2);
	printf("\n\n");
	ret1 = printf("{%13p}", &strlen);
	printf("|%d\n", ret1);
	ret2 = ft_printf("{%13p}", &strlen);
	printf("|%d\n", ret2);
	printf("\n\n");
	ret1 = printf("{%*d}", -5, 42);
	printf("|%d\n", ret1);
	ret2 = ft_printf("{%*d}", -5, 42);
	printf("|%d\n", ret2);
	printf("\n\n");
	ret1 = printf("{%05.*d}", -15, 42);
	printf("|%d\n", ret1);
	ret2 = ft_printf("{%05.*d}", -15, 42);
	printf("|%d\n", ret2);
	printf("\n\n");
	ret1 = printf("{%05.0d}", 42);
	printf("|%d\n", ret1);
	ret2 = ft_printf("{%05.0d}", 42);
	printf("|%d\n", ret2);
	printf("\n\n");

	ret1 = printf("{%-30S}", L"ÊM-M-^QÊM-^XØ‰∏M-ÂM-^O™ÁM-^L´„M-M-^B");
	printf("|%d\n", ret1);
	ret2 = ft_printf("{%-30S}", L"ÊM-M-^QÊM-^XØ‰∏M-ÂM-^O™ÁM-^L´„M-M-^B");
	printf("|%d\n", ret2);
	printf("\n\n");
	return (0);
}
