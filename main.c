/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 17:27:50 by abarthel          #+#    #+#             */
/*   Updated: 2019/04/15 16:09:47 by abarthel         ###   ########.fr       */
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


	ret1 = printf("hello%4294967298d|", 1234);
	printf("%d\n", ret1);
	ret2 = ft_printf("hello%4294967298d|", 1234);
	printf("%d\n", ret2);
	printf("\n\n");
	ret1 = printf("wd%2147483647d|", 1234);
	printf("%d\n", ret1);
	ret2 = ft_printf("wd%2147483647d|", 1234);
	printf("%d\n", ret2);
	printf("\n\n");
	ret1 = printf("%-4294967292.2s is a string", "");
	printf("%d\n", ret1);
	ret2 = ft_printf("%-4294967292.2s is a string", "");
	printf("%d\n", ret2);
	printf("\n\n");

	return (0);
}
