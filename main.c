/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 17:27:50 by abarthel          #+#    #+#             */
/*   Updated: 2019/03/01 09:30:58 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dispatcher.h"
#include "ft_printf.h"
#include "prs_struct.h"
#include <stdio.h>
#include <locale.h>
#include <limits.h>
#include <stdlib.h>

int main(void)
{
	//	void	(*f)();

//	setlocale(LC_ALL, "");
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
//	printf(" LENGTH sizeof size_t: %lu\n", sizeof(size_t));
//	printf("‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾\n\n");

//	t_flags	flags;

//	flags.hash = 1;
// 	printf("\n\n%d\n", flags.hash);
	
//	ft_printf("%B", L'😄');
//	ft_printf("%D", UINT_MAX * -1); // OK
//	ft_printf("%O", UINT_MAX * 2); // OK
	
//	printf("\n\n %*.*d \n\n",24,55, 10);
	
//	printf("Hello%nj%sijoj%n", &o,"Hello", &k);
// 	printf("\n\n%d\n", o);
// 	printf("%2$d\n", 42);
	//printf("Hello%d a %**.* *C  b %*.*send  \n", 5454, L'😄', "DONE", 1, 54, 68, 55, 68, 88);
//	ft_printf("Hello%d a %**.* *C  b %*.*send  \n", 5454, L'😄', "DONE", 1, 54, 68, 55, 68, 88);
	//ft_printf("%*.*d\n", 10, 20, 42);
	//printf("%*.*d\n", 10, 20, 42);
	//printf("%2$d,  %*.*d\n", 10, 20, 42, 5, 6);
//	ft_printf("%*21d\n", 10, 42);
//	printf("%*21d\n", 10, 42);
//	printf("%.*2$d\n", 10, 42);
//	printf("%*2$d\n", 10, 42);
	//printf("H%3$H%de3$re:%*3$.*2$d\n", 10, 42, 10, 21); // KEY BEHAVIOR with dollars and stars
//	printf("H%3$H%3$de3$re:%*3$.*3$3$d\n", 10, 42, 10, 21); // KEY BEHAVIOR with dollars and stars
//	printf("This: % *.-42.954do\n", 42, 10, 15, 45);
//	ft_printf("This: % *.-42.954do\n", 42, 10, 15, 45);
//	printf("This: % * +- 0 ..9..** do\n", 18, 10, 15, 45, 66);
//	ft_printf("This: % * +- 0 ..9..** do\n", 18, 10, 15, 45, 66);
//	printf("This: % * # 0 ..9..** do\n", 18, 10, 15, 45, 66);
//	ft_printf("This: % * # 0 ..9..** do\n", 18, 10, 15, 45, 66);
//	printf("This: % * ..9..*45 .12* do\n", 18, 10, 15, 45, 66);
//	ft_printf("This: % * ..9..*45 .12* do\n", 18, 10, 15, 45, 66);

//	ft_printbits(' ');
//	ft_putchar('\n');
//	int i;
//
//	i = 0;
//	while (++i <= 128)
//	{
//		if (!(((i & ' ')) ^ ' ') && i < '1')
//			printf("%c\n", i);
//	}


//	printf("This: % 400 0*# ..9..*45 .124.* 220do\n", 18, 10, 15, 45, 66);
//	ft_printf("This: % 400 0*# ..9..*45 .124.* 220do\n", 18, 10, 15, 45, 66);
///////	//printf("This: % 400 0*# .-.9..*45 .124.* 220do\n", 18, 10, 15, 45, 66);
///////	//ft_printf("This: % 400 0*# .-.9..*45 .124.* 220do\n", 18, 10, 15, 45, 66);
//	printf("This: % *.q3 4 9do\n", 18, 10, 15, 45);
//	ft_printf("This: % *.q3 4 9do\n", 18, 10, 15, 45);

//	printf("This: % -61do\n", 42, 10, 15, 45);
//	printf("This: % -61.7 do\n", 42, 10, 15, 45);
//	printf("% 0.42.-61do\n", 42, 10, 15, 45);
//	ft_printf("% 0.-42.*do\n", 42, 10, 15, 45);
//	printf("This: % 0.-42.*do\n", 42, 10, 15, 45);
//	printf("This: % *.*d\n", 42, 10, 15, 45);
//	printf("This: % .** 10d\n", 42, 10, 15, 45);
	//	printf("\n\n");
//	printf("%*.*d\n", 10, 20, 42);
//	printf("%12.9$d\n", 10, 20, 42);
//	printf("%12.99999$d\n", 10, 20, 42);
//	printf("%12 1$d\n", 10, 20, 42);
//	printf("%12,1$d\n", 10, 20, 42);
//	printf("%12/1$d\n", 10, 20, 42);
//	printf("Hello%d a %**.* *  b %*.*send  \n", 5454, L'😄', "DONE", 1, 54, 68, 55, 68, 88);
//	ft_printf(" #eH!&\(+-,/ ell*o# world * \n%0*#1.*d %4*#.*d %d\n", 5454, 42, 21, 1, 54, 68);
//	printf("s\n%d %d\n", 5454);
//	printf("%i", -INT_MIN); 
//	printf("%O", UINT_MAX * 2); // OK
//	printf("%D", UINT_MAX * -1); // OK
//	printf("%.s", 428);
//	ft_printf("\ntest nothing except line\n");
	//ft_printf("Hello %d\n", INT_MAX);
//	printf("Hello %n\n", &o);
//	printf("%d\n", o);
//	ft_printf("Hello %Z\n", INT_MAX);
//	printf("\n\n");
//	ft_printf("%.s", 42);

//	ft_printf("Hello World%d", 2147483648);
//	printf("\n\n");
//	printf("Hello World |%3$d|%1$d\n", 100, 24, 1);
//	printf("Hello World%*d", 2147483648, 45); // intersting behavior
//	printf("\n\n");
//	ft_printf("Hello World%d   k\n", -99420000000);
//	ft_printf("Hello World%p   k\n", o);
//	printf("\n\n");
//	printf("Hello World%d   k", -99420000000);
//	printf("Hello World%p   k", o);
//	printf("\n\n");
//	ft_printf("%d\n", "😄");// OK
//	printf("\n\n");
//	printf("%d\n", "😄"); // OK
//	printf("\n\n");
//	printf("4567 |%10]5d| plip\n", 12);
//	ft_printf("4567 |%10]5d| plip\n", 12);
//	printf("\n\n");
//	printf("4567 |%-10]5d| plip%d\n", 12);
//	ft_printf("4567 |%-10]5d| plip%d\n", 12);
//	printf("\n\n");
//	printf("I4567 |%-10!d| plip\n", 12);
//	ft_printf("I4567 |%-10!d| plip\n", 12);
//	printf("\n\n");
//	printf("I4567 |%10!d| plip\n", 12);
//	ft_printf("I4567 |%10!d| plip\n", 12);
//	printf("\n\n");
//	printf("I4567 |%1😄0!d| plip\n", 12); //hoho
//	ft_printf("I4567 |%1😄0!d| plip\n", 12); //hoho
//	printf("\n\n");
//	printf("4567 |%-10'\0'5d| plip\n", 12);
//	printf("\n\n");
//	printf("\n\n");
//	ft_printf("4567 |%-10'\0'5d| plip\n", 12);
//	printf("\n\n");
//	printf("4567 |%d-10'\0'5d| plip\n", 12);
//	ft_printf("4567 |%d-10'\0'5d| plip\n", 12);
//	printf("4567 |%d-10'\0'5d| plip\n", 12);
//	printf("\n\n");
//	printf("4567 |%", 12);
//	ft_printf("4567 |%", 12);
//	printf("4567 |%-10]5d| plip\n", 12);
//	ft_printf("4567 |%-10]5d| plip\n", 12);
//	printf("4567 |%10]5d| plip\n", 12);
//	printf("|%10 30.5.10 15d|\n", -12);
//	ft_printf("|%10 30.5.10 15d|\n", -12);
//	printf("|%10d|\n", -12);
//	printf("|%010d|\n", -12); 
//	ft_printf("|%010d|\n", -12); 
//	printf("|%-10.5d|\n", -12);
//	ft_printf("|%-10.5d|\n", -12);
//	printf("|%-010.5d|\n", -12);
//	ft_printf("|%-010.5d|\n", -12);

//////// DOLARS SECTION //////////////

//	printf("%*3d\n", 18, 45, 67, 62);
//	printf("%* d\n", 18, 45, 67, 62);
//	printf("%*3$d\n", 18, 45, 67, 62);
//	ft_printf("%*3$d\n", 18, 45, 67, 62);
//	printf("\n\n");
//	printf("%*45 .12 .* d\n", 18, 45, 67, 62);
//	ft_printf("%*45 .12 .* d\n", 18, 45, 67, 62);
//	printf("%.*3$d\n", 18, 45, 67, 62);
//	ft_printf("%.*3$d\n", 18, 45, 67, 62);
//	printf("\n\n");
//	printf("%*.*3$d\n", 18, 45, 67, 62);
//	ft_printf("%*.*3$d\n", 18, 45, 67, 62);
//	printf("%.*3$2$d\n", 18, 45, 67, 62);
//	printf("%.*3$ 2$d\n", 18, 45, 67, 62);
//	printf("%3$*d\n", 18, 45, 67, 62);
//	printf("%* 3$d\n", 18, 45, 67, 62);

//	printf("%3$d %*1$2$d\n", 18, 45, 67, 62);
//	ft_printf("%3$d %*1$2$d\n", 18, 45, 67, 62);
//	printf("\n\n");
//	printf("%3$d $ %*d\n", 18, 45, 67, 62);
//	ft_printf("%3$d $ %*d\n", 18, 45, 67, 62);
//	printf("\n\n");
//	printf("%3$$d $ %*d\n", 18, 45, 150, 62);
//	ft_printf("%3$$d $ %*d\n", 18, 45, 150, 62);
//	printf("\n\n");
//	printf("%10.4d\n", 18, 45, 100);
//	ft_printf("%10.4d\n", 18, 45, 100);
//	printf("\n\n");
//	printf("%2$d\n", 18, 45);
//	ft_printf("%2$d\n", 18, 45);
//	printf("\n\n");
//	printf("%2$45d\n", 18, 45);
//	ft_printf("%2$45d\n", 18, 45);
//	printf("\n\n");
//	printf("%3$10.4d\n", 18, 45, 100);
//	ft_printf("%3$10.4d\n", 18, 45, 100);
//	printf("\n\n");
//	printf("% 0.-42.*do\n", 42, 10, 15, 45);
//	ft_printf("% 0.-42.*do\n", 42, 10, 15, 45);
	
	int ret1;
	int ret2;
//	int i = 100000;
//	while (--i)
//		ret1 = printf("%d\n", L"😄");
//	printf("%d\n", ret1);
//	printf("\n\n");
//	ret2 = ft_printf("%d\n", L"😄");
//	printf("%d\n", ret2);

//		ret1 = printf("%d\n", L'😄');
//	printf("%d\n", ret1);
//	printf("\n\n");
//	ret2 = ft_printf("%d\n", L'😄');
//	printf("%d\n", ret2);
//	printf("\n\n");
		ret1 = printf("%s", "World");
	printf("%d\n", ret1);
	ret2 = ft_printf("%s", "World");
	printf("%d\n", ret2);
	printf("\n\n");

		ret1 = printf("%s!", "World");
	printf("%d\n", ret1);
	ret2 = ft_printf("%s!", "World");
	printf("%d\n", ret2);

	printf("\n\n");
		ret1 = printf("Hello %s %s ! \n", "Awesome", "World");
	printf("%d\n", ret1);
	ret2 = ft_printf("Hello %s %s ! \n", "Awesome", "World");
	printf("%d\n", ret2);	

	return (0);
}
