/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 17:27:50 by abarthel          #+#    #+#             */
/*   Updated: 2019/03/21 16:14:16 by abarthel         ###   ########.fr       */
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
	//	void	(*f)();

	setlocale(LC_ALL, "");
	//	f = dispatcher("o");
	//	printf("%d\n", (int)f);
	//	f = dispatcher("d");
	//	printf("%d\n", (int)f);
	//	if (f)
	//		f(2000);
//	int o;
//	int k;

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

	ret1 = printf("|%.10lc|", L'😄');
	printf("%d\n", ret1);
	ret2 = ft_printf("|%.10lc|", L'😄');
	printf("%d\n", ret2);

	printf("\n\n");
		ret1 = printf("|% 10lc|", L'😄');
	printf("%d\n", ret1);
	ret2 = ft_printf("|% 10lc|", L'😄');
	printf("%d\n", ret2);
	printf("\n\n");
		ret1 = printf("|% -10lc|", L'😄');
	printf("%d\n", ret1);
	ret2 = ft_printf("|% -10lc|", L'😄');
	printf("%d\n", ret2);
	printf("\n\n");
//
//	ret1 = printf("%   %");
//	printf("%d\n", ret1);
//	ret2 = ft_printf("%   %");
//	printf("%d\n", ret2);
//	printf("\n\n");

//	ret1 = printf("Hello %ls!%s%s", L"World", "Damn", "okay");
//	printf("%d\n", ret1);
//	ret2 = ft_printf("Hello %ls!%s%s", L"World", "Damn", "okay");
//	printf("%d\n", ret2);
//	printf("\n\n");
//
//	ret1 = printf("Hello %s!%s%s", "World", "Damn", "okay");
//	printf("%d\n", ret1);
//	ret2 = ft_printf("Hello %s!%s%s", "World", "Damn", "okay");
//	printf("%d\n", ret2);
//	printf("\n\n");
//
//	ret1 = printf("Hello %s!%s%s", "😄", "Damn", "okay");
//	printf("%d\n", ret1);
//	ret2 = ft_printf("Hello %s!%s%s", "😄", "Damn", "okay");
//	printf("%d\n", ret2);
//	printf("\n\n");

//	ret1 = printf("Hello %ls!%s%s", L"😄<", "Damn", "okay");
//	printf("%d\n", ret1);
//	ret2 = printf("Hello %ls!%s%s", L"😄<", "Damn", "okay");
//	printf("%d\n", ret2);
//	printf("\n\n");
//	ret1 = printf("1Hello %ls!", L"~");
//	printf("%d\n", ret1);
//	ret2 = printf("1Hello %ls!", L"~"); // 256
//	printf("%d\n", ret2);
//	printf("\n\n");
//	ret1 = printf("Hello %ls!%s", L"\x160", "BOY");
//	printf("%d\n", ret1);
//	ret2 = printf("Hello %ls!%s", L"\x160", "BOY"); // 256
//	printf("%d\n", ret2);
//	printf("\n\n");
//	ret1 = printf("2Hellowidth %-12ls!%s%s", L"\x0FF", "Damn", "okay"); // 255
//	printf("%d\n", ret1);
//	ret2 = printf("2Hellowidth %-12ls!%s%s", L"\x0FF", "Damn", "okay");
//	printf("%d\n", ret2);
//	printf("\n\n");
//	ret1 = printf("Hello %ls!%s%s", L"\x100", "Damn", "okay");
//	printf("%d\n", ret1);
//	ret2 = printf("Hello %ls!%s%s", L"\x100", "Damn", "okay");
//	printf("%d\n", ret2);
//	printf("\n\n");
//
//	
//	ret1 = printf("5Hello %ls! !%s%s", L"\x100", "Damn", "okay");
//	printf("%d\n", ret1);
//	ret2 = printf("5Hello %ls! !%s%s", L"\x100", "Damn", "okay");
//	printf("%d\n", ret2);
//	printf("\n\n");
//	ret1 = printf("Hello");
//	printf("%d\n", ret1);
//	ret2 = printf("Hello");
//	printf("%d\n", ret2);
//	printf("\n\n");
//		ret1 = printf("w10Hello %s %10s ! ", "Awesome", "World");
//	printf("%d\n", ret1);
//	ret2 = ft_printf("w10Hello %s %10s ! ", "Awesome", "World");
//	printf("%d\n", ret2);	
//	printf("\n\n");
//		ret1 = printf(">w1Hello %s %1s ! ", "Awesome", "World");
//	printf("%d\n", ret1);
//	ret2 = ft_printf(">w1Hello %s %1s ! ", "Awesome", "World");
//	printf("%d\n", ret2);	
//	printf("\n\n");
//		ret1 = printf(">w4Hello %s %4s ! ", "Awesome", "World");
//	printf("%d\n", ret1);
//	ret2 = ft_printf(">w4Hello %s %4s ! ", "Awesome", "World");
//	printf("%d\n", ret2);	
//	printf("\n\n");
//		ret1 = printf("Hello %.0s %10s ! ", "Awesome", "World");
//	printf("%d\n", ret1);
//	ret2 = ft_printf("Hello %.0s %10s ! ", "Awesome", "World");
//	printf("%d\n", ret2);	
//	printf("\n\n");
//
//		ret1 = printf("Hello %.0s %10.s ! ", "Awesome", "World");
//	printf("%d\n", ret1);
//	ret2 = ft_printf("Hello %.0s %10.s ! ", "Awesome", "World");
//	printf("%d\n", ret2);	
//
//
//	printf("\n\n");
//	ret1 = printf("Hello %.2s!", "World ");
//	printf("%d\n", ret1);
//	ret2 = ft_printf("Hello %.2s!", "World ");
//	printf("%d\n", ret2);
//	printf("\n\n");
//
//	ret1 = printf("Hello %20s!", "World ");
//	printf("%d\n", ret1);
//	ret2 = ft_printf("Hello %20s!", "World ");
//	printf("%d\n", ret2);
//	printf("\n\n");
//
//
//	ret1 = printf("Hello %-20s!", "World ");
//	printf("%d\n", ret1);
//	ret2 = ft_printf("Hello %-20s!", "World ");
//	printf("%d\n", ret2);
//	printf("\n\n");
//
//	ret1 = printf("Hello %.12s!", "World ");
//	printf("%d\n", ret1);
//	ret2 = ft_printf("Hello %.12s!", "World ");
//	printf("%d\n", ret2);
//	printf("\n\n");
//
//	ret1 = printf("Hello %.2s!", "World ");
//	printf("%d\n", ret1);
//	ret2 = ft_printf("Hello %.2s!", "World ");
//	printf("%d\n", ret2);
//	printf("\n\n");


//	
	ret1 = printf("|%c|", -800);
	printf("%d\n", ret1);
	ret2 = ft_printf("|%c|", -800);
	printf("%d\n", ret2);
	printf("\n\n");

	ret1 = printf("|%c|", 100);
	printf("%d\n", ret1);
	ret2 = ft_printf("|%c|", 100);
	printf("%d\n", ret2);
	printf("\n\n");

	ret1 = printf("|%c|", -800);
	printf("%d\n", ret1);
	ret2 = ft_printf("|%c|", -800);
	printf("%d\n", ret2);
	printf("\n\n");

//	INT MAX + 1 =  2147483648
//	INT_MAX -1 || INT_MAX
	return (0);
}
