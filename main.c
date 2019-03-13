/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 17:27:50 by abarthel          #+#    #+#             */
/*   Updated: 2019/03/13 12:08:53 by abarthel         ###   ########.fr       */
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
//	printf(" LENGTH sizeof size_t: %lu\n", sizeof(size_t));
//	printf(" LENGTH sizeof intmax_t: %lu\n", sizeof(intmax_t));
//	printf(" LENGTH sizeof long long: %lu\n", sizeof(long long));
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
//	printf("Hello%d a %**.* *C  b %*.*send  \n", 5454, L'😄', "DONE", 1, 54, 68, 55, 68, 88);
//	ft_printf("Hello%d a %**.* *C  b %*.*send  \n", 5454, L'😄', "DONE", 1, 54, 68, 55, 68, 88);
//	ft_printf("%*.*d\n", 10, 20, 42);
//	printf("%*.*d\n", 10, 20, 42);
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

//	ret1 = printf("%2$s%1$s", "World", "Hello ");
//	printf("%d\n", ret1);
//	ret2 = ft_printf("%2$s%1$s", "World", "Hello ");
//	printf("%d\n", ret2);
//	printf("\n\n");
//
//	ret1 = printf("%2$40s%1$s%3$s", "World", "Hello ", "!");
//	printf("%d\n", ret1);
//	ret2 = ft_printf("%2$40s%1$s%3$s", "World", "Hello ", "!");
//	printf("%d\n", ret2);
//	printf("\n\n");



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
//	ret1 = printf("%");
//	printf("%d\n", ret1);
//	ret2 = ft_printf("%");
//	printf("%d\n", ret2);
//	printf("\n\n");
//
//	ret1 = printf("%   %", "Hello");
//	printf("%d\n", ret1);
//	ret2 = ft_printf("%   %", "Hello");
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

//	ret1 = printf("Hello %s!%s%s", "😄", "Damn", "okay");
//	printf("%d\n", ret1);
//	ret2 = ft_printf("Hello %s!%s%s", "😄", "Damn", "okay");
//	printf("%d\n", ret2);
//	printf("\n\n");

//	ret1 = printf("Hello %ls!%s%s", L"😄<", "Damn", "okay");
//	printf("%d\n", ret1);
//	ret2 = ft_printf("Hello %ls!%s%s", L"😄<", "Damn", "okay");
//	printf("%d\n", ret2);
//	printf("\n\n");
//	ret1 = printf("Hello %ls!%s%s", L"\x160", "Damn", "okay");
//	printf("%d\n", ret1);
//	ret2 = ft_printf("Hello %ls!%s%s", L"\x160", "Damn", "okay"); // 352 it checks the overflow before putting char in wchar
//	printf("%d\n", ret2);
//	printf("\n\n");
//	ret1 = printf("Hello %ls!%s%s", L"\x00F", "Damn", "okay");
//	printf("%d\n", ret1);
//	ret2 = ft_printf("Hello %ls!%s%s", L"\x00F", "Damn", "okay"); // 256
//	printf("%d\n", ret2);
//	printf("\n\n");
//	ret1 = printf("1Hello %ls!", L"~");
//	printf("%d\n", ret1);
//	ret2 = ft_printf("1Hello %ls!", L"~"); // 256
//	printf("%d\n", ret2);
//	printf("\n\n");
//	ret1 = printf("Hello %ls!%s", L"\x160", "BOY");
//	printf("%d\n", ret1);
//	ret2 = ft_printf("Hello %ls!%s", L"\x160", "BOY"); // 256
//	printf("%d\n", ret2);
//	printf("\n\n");
//	ret1 = printf("2Hellowidth %12ls!%-1s%10s", L"\x0FF", "Damn", "okay"); // 255
//	printf("%d\n", ret1);
//	ret2 = ft_printf("2Hellowidth %12ls!%-1s%10s", L"\x0FF", "Damn", "okay");
//	printf("%d\n", ret2);
//	printf("\n\n");
//	ret1 = printf("2Hellowidth %-12ls!%s%s", L"\x0FF", "Damn", "okay"); // 255
//	printf("%d\n", ret1);
//	ret2 = ft_printf("2Hellowidth %-12ls!%s%s", L"\x0FF", "Damn", "okay");
//	printf("%d\n", ret2);
//	printf("\n\n");
//	ret1 = printf("Hello %ls!%s%s", L"\x100", "Damn", "okay");
//	printf("%d\n", ret1);
//	ret2 = ft_printf("Hello %ls!%s%s", L"\x100", "Damn", "okay");
//	printf("%d\n", ret2);
//	printf("\n\n");

//	ret1 = printf("3All ok Hello %ls!%ls%s", L"~", L"Damnijefihwfiwhf~", "Ookay");
//	printf("%d\n", ret1);
//	ret2 = ft_printf("3All ok Hello %ls!%ls%s", L"~", L"Damnijefihwfiwhf~", "Ookay");
//	printf("%d\n", ret2);
//	printf("\n\n");
//	ret1 = printf("4Ko on sec arg Hello %ls! %ls%s", L"~", L"Damn\x100ijefihwfiwhf~", "okay");
//	printf("%d\n", ret1);
//	ret2 = ft_printf("4Ko on sec arg Hello %ls! %ls%s", L"~", L"Damn\x100ijefihwfiwhf~", "okay");
//	printf("%d\n", ret2);
//	printf("\n\n");
//	
//	ret1 = printf("5Hello %ls! !%s%s", L"\x100", "Damn", "okay");
//	printf("%d\n", ret1);
//	ret2 = ft_printf("5Hello %ls! !%s%s", L"\x100", "Damn", "okay");
//	printf("%d\n", ret2);
//	printf("\n\n");
//	ret1 = printf("Hello");
//	printf("%d\n", ret1);
//	ret2 = ft_printf("Hello");
//	printf("%d\n", ret2);
//	printf("\n\n");
//		ret1 = printf("Hello %s %s ! \n", "Awesome", "World");
//	printf("%d\n", ret1);
//	ret2 = ft_printf("Hello %s %s ! \n", "Awesome", "World");
//	printf("%d\n", ret2);	

//	ret1 = printf("Hello %s!", "World ");
//	printf("%d\n", ret1);
//	ret2 = ft_printf("Hello %s!", "World ");
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


//	ret1 = printf("%-2147483649s", "World ");
//	printf("%d\n", ret1);
//	ret2 = ft_printf("%-2147483649s", "World ");
//	printf("%d\n", ret2);
//	printf("\n\n");
// "Hello %ls!%ls%ls", L"电脑是新的", L",电脑死机了。", L"电脑坏了。😢 "
//	ret1 = printf("Hello %ls", L"电脑是新的");
//	printf("%d\n", ret1);
//	ret2 = ft_printf("Hello %ls", L"电脑是新的");
//	printf("%d\n", ret2);
//	printf("\n\n");
//	ret1 = printf("电");
//	printf("%d\n", ret1);
//	ret2 = ft_printf("电");
//	printf("%d\n", ret2);
//	printf("\n\n");
//	ret1 = printf("Ā");
//	printf("%d\n", ret1);
//	ret2 = ft_printf("Ā");
//	printf("%d\n", ret2);
//	printf("\n\n");
//	ret1 = printf("%ls", L"\x100");
//	printf("%d\n", ret1);
//	ret2 = ft_printf("%ls", L"\x100");
//	printf("%d\n", ret2);
//	printf("\n\n");
//	ret1 = printf("%ls", L"电脑坏了。😢 ");
////	ret1 = printf("%ls", L"电脑坏了");
//	printf("%d\n", ret1);
//	ret2 = ft_printf("%ls", L"电脑坏了。😢 ");
////	ret2 = ft_printf("%ls", L"电脑坏了");
//	printf("%d\n", ret2);
//	printf("\n\n");
//
//	ret1 = printf("%ls", L"😢 ");
//	printf("%d\n", ret1);
//	ret2 = ft_printf("%ls", L"😢 ");
//	printf("%d\n", ret2);
//	printf("\n\n");
//
//	ret1 = printf("0 test %'1.42d %'.0d %'d %'5d", -0, 0 , 0, 0);
//	printf("\t%d\n", ret1);
//	ret2 = ft_printf("0 test %'1.42d %'.0d %'d %'5d", -0, 0 , 0, 0);
//	printf("\t%d\n", ret2);
//	printf("\n\n");
//	
//	ret1 = printf("0 test %'+1.42d %'+.0d %'+d %'+5d", -0, 0 , 0, 0);
//	printf("\t%d\n", ret1);
//	ret2 = ft_printf("0 test %'+1.42d %'+.0d %'+d %'+5d", -0, 0 , 0, 0);
//	printf("\t%d\n", ret2);
//	printf("\n\n");
//	
//	ret1 = printf("0 test %'+-1.42d %'+-.0d %'+-d %'+-5d", -0, 0 , 0, 0);
//	printf("\t%d\n", ret1);
//	ret2 = ft_printf("0 test %'+-1.42d %'+-.0d %'+-d %'+-5d", -0, 0 , 0, 0);
//	printf("\t%d\n", ret2);
//	printf("\n\n");
//	
//	ret1 = printf("0 test %1$'1.42d %2$'.0d %3$'d %4$'5d", -0, 0 , 0, 0);
//	printf("\t%d\n", ret1);
//	ret2 = ft_printf("0 test %1$'1.42d %2$'.0d %3$'d %4$'5d", -0, 0 , 0, 0);
//	printf("\t%d\n", ret2);
//	printf("\n\n");
//	
//	ret1 = printf("%1$'1.0d%2$'d%3$'.0d%4$'0.0d", -1548, INT_MAX + 1, 42, 0);
//	printf("\t%d\n", ret1);
//	ret2 = ft_printf("%1$'1.0d%2$'d%3$'.0d%4$'0.0d", -1548, INT_MAX + 1, 42, 0);
//	printf("\t%d\n", ret2);
//	printf("\n\n");
//	
//	ret1 = printf("%1$'+1.42d%2$'+d%3$'+.0d%4$'+5d", -1548, INT_MAX + 1, 42, 0);
//	printf("\t%d\n", ret1);
//	ret2 = ft_printf("%1$'+1.42d%2$'+d%3$'+.0d%4$'+5d", -1548, INT_MAX + 1, 42, 0);
//	printf("\t%d\n", ret2);
//	printf("\n\n");
//	
//	ret1 = printf("normal test %1$'+0.42d %2$'d %3$'d %4$'5d", 1548, INT_MAX + 1, 42, 0);
//	printf("\t%d\n", ret1);
//	ret2 = ft_printf("normal test %1$'+0.42d %2$'d %3$'d %4$'5d", 1548, INT_MAX + 1, 42, 0);
//	printf("\t%d\n", ret2);
//	printf("\n\n");
//	
//	ret1 = printf("0width test%+d %.0d %d %d", 1548, INT_MAX + 1, 42, 0);
//	printf("\t%d\n", ret1);
//	ret2 = ft_printf("0width test%+d %.0d %d %d", 1548, INT_MAX + 1, 42, 0);
//	printf("\t%d\n", ret2);
//	printf("\n\n");
//	
//	ret1 = printf("space test%+'d %+-d% d %d", 1548, INT_MAX + 1, 42, 0);
//	printf("\t%d\n", ret1);
//	ret2 = ft_printf("space test%+'d %+-d% d %d", 1548, INT_MAX + 1, 42, 0);
//	printf("\t%d\n", ret2);
//	printf("\n\n");
//	
//	ret1 = printf("2nd 0width test %+-.0d %.0d %.1d %5.3d", 1548, INT_MAX + 1, 42, 0);
//	printf("\t%d\n", ret1);
//	ret2 = ft_printf("2nd 0width test %+-.0d %.0d %.1d %5.3d", 1548, INT_MAX + 1, 42, 0);
//	printf("\t%d\n", ret2);
//	printf("\n\n");
//	
//	ret1 = printf("2nd 0width test %+-.0d %.0d %.10d %5.3d", 1548, INT_MAX + 1, 42, 0);
//	printf("\t%d\n", ret1);
//	ret2 = ft_printf("2nd 0width test %+-.0d %.0d %.10d %5.3d", 1548, INT_MAX + 1, 42, 0);
//	printf("\t%d\n", ret2);
//	printf("\n\n");
//	
//	ret1 = printf("normal test %+-100.42d %d %d %5d", 1548, INT_MAX + 1, 42, 0);
//	printf("\t%d\n", ret1);
//	ret2 = ft_printf("normal test %+-100.42d %d %d %5d", 1548, INT_MAX + 1, 42, 0);
//	printf("\t%d\n", ret2);
//	printf("\n\n");
//	
//	ret1 = printf("overflow on prec test %1$-100.2147483649d %2$d %3$d %4$5d", 1548, INT_MAX + 1, 42, 0);
//	printf("\t%d\n", ret1);
//	ret2 = ft_printf("overflow on prec test %1$-100.42147483649d %2$d %3$d %4$5d", 1548, INT_MAX + 1, 42, 0);
//	printf("\t%d\n", ret2);
//	printf("\n\n");
//	
//	ret1 = printf("%-10.2s%s%s", "World", "Hello ", "!");
//	printf("%d\n", ret1);
//	ret2 = ft_printf("%-10.2s%s%s", "World", "Hello ", "!");
//	printf("%d\n", ret2);
//	printf("\n\n");
//
//	ret1 = printf("%10.2s%s%s", "World", "Hello ", "!");
//	printf("%d\n", ret1);
//	ret2 = ft_printf("%10.2s%s%s", "World", "Hello ", "!");
//	printf("%d\n", ret2);
//	printf("\n\n");
//	ret1 = printf("normal test %1$d %2$d %3$d %4$5d", 1548, INT_MAX + 1, 42, -1);
//	printf("\t%d\n", ret1);
//	ret2 = ft_printf("normal test %1$d %2$d %3$d %4$5d", 1548, INT_MAX + 1, 42, -1);
//	printf("\t%d\n", ret2);
//	printf("\n\n");
//	
//	
//	ret1 = printf("Dollars test %1$d %2$d %3$d %4$d", INT_MAX + 2, INT_MAX + 1, 42, -15);
//	printf("\t%d\n", ret1);
//	ret2 = ft_printf("Dollars test %1$d %2$d %3$d %4$d", INT_MAX + 2, INT_MAX + 1, 42, -15);
//	printf("\t%d\n", ret2);
//	printf("\n\n");

//	ret1 = printf("0 test+ %+1.42d %+.0d %+d %+5d", -0, 0 , 0, 0);
//	printf("\t%d\n", ret1);
//	ret2 = ft_printf("0 test+ %+1.42d %+.0d %+d %+5d", -0, 0 , 0, 0);
//	printf("\t%d\n", ret2);
//	printf("\n\n");
//	
//	ret1 = printf("1 test - %+-1.42d %+-.0d %d %+-5d", -0, 0 , 0, 0);
//	printf("\t%d\n", ret1);
//	ret2 = ft_printf("1 test - %+-1.42d %+-.0d %d %+-5d", -0, 0 , 0, 0);
//	printf("\t%d\n", ret2);
//	printf("\n\n");
//	
//	ret1 = printf("0z test+zero +01.42d|%+01.42d| 0+.0|%0+.0d| 0+d|%0+d| 0+5d|%0+5d|", -0, 0 , 0, 0);
//	printf("\t%d\n", ret1);
//	ret2 = ft_printf("0z test+zero +01.42d|%+01.42d| 0+.0|%0+.0d| 0+d|%0+d| 0+5d|%0+5d|", -0, 0 , 0, 0);
//	printf("\t%d\n", ret2);
//	printf("\n\n");
//	
//	ret1 = printf("1z testzero %001.42d %0+.0d %0+d %0+5d", -0, 0 , 0, 0);
//	printf("\t%d\n", ret1);
//	ret2 = ft_printf("1z testzero %001.42d %0+.0d %0+d %0+5d", -0, 0 , 0, 0);
//	printf("\t%d\n", ret2);
//	printf("\n\n");
//
//   ret1 = printf("Dollars test %4$d %3$010d %2$d %1$d", INT_MAX + 2, INT_MAX + 1, 42, -1515151515);
//   printf("\t%d\n", ret1);
//   ret2 = ft_printf("Dollars test %4$d %3$010d %2$d %1$d", INT_MAX + 2, INT_MAX + 1, 42, -1515151515);
//   printf("\t%d\n", ret2);
//   printf("\n\n");

	printf("\n\n");
	ret1 = printf("1>>Dollars test %4$040d %3$d %1$.0d %2$+d", 0, -0, 42, -15);
	printf("\t%d\n", ret1);
	ret2 = ft_printf("1<<Dollars test %4$040d %3$d %1$.0d %2$d", 0, -0, 42, -15);
	printf("\t%d\n", ret2);	
	printf("\n");
	ret1 = printf("2>>Dollars test %4$40d %3$d %1$+d %2$+d", 0, -0, 42, -15);
	printf("\t%d\n", ret1);
	ret2 = ft_printf("2<<Dollars test %4$40d %3$d %1$+d %2$d", 0, -0, 42, -15);
	printf("\t%d\n", ret2);	
	printf("\n");
	ret1 = printf("3>>Dollars test %4$+40d %3$d %1$d %2$+d", 0, -0, 42, 15);
	printf("\t%d\n", ret1);
	ret2 = ft_printf("3<<Dollars test %4$+40d %3$d %1$d %2$+d", 0, -0, 42, 15);
	printf("\t%d\n", ret2);	
	printf("\n");
	ret1 = printf("4>>Dollars test %04$+40d %3$d %1$d %2$+d", 0, -0, 42, 15);
	printf("\t%d\n", ret1);
	ret2 = ft_printf("4<<Dollars test %04$+40d %3$d %1$d %2$d", 0, -0, 42, 15);
	printf("\t%d\n", ret2);	
	printf("\n");
	ret1 = printf("5>>Dollars test %04$+.40d %3$d %1$d %2$+d", 0, -0, 42, 15);
	printf("\t%d\n", ret1);
	ret2 = ft_printf("5<<Dollars test %04$+.40d %3$d %1$d %2$d", 0, -0, 42, 15);
	printf("\t%d\n", ret2);	
	printf("\n");
	ret1 = printf("6>>Dollars test %4$.40d %3$d %1$d %2$+d", 0, -0, 42, 15);
	printf("\t%d\n", ret1);
	ret2 = ft_printf("6<<Dollars test %4$.40d %3$d %1$d %2$d", 0, -0, 42, 15);
	printf("\t%d\n", ret2);	
	printf("\n\n");
	printf("\n\n");
	printf("\n\n");
	printf("\n\n");
	printf("\n\n");
	printf("\n\n");
	printf("\n\n");
	printf("\n\n");

//	ret1 = printf("posDoll test %4$+040hd %3$d %1$d %2$+d", INT_MAX + 2, INT_MAX + 1, 42, (short)12);
//	printf("\t%d\n", ret1);
//	ret2 = ft_printf("posDoll test %4$+040hd %3$d %1$d %2$+d", INT_MAX + 2, INT_MAX + 1, 42, (short)12);
//	printf("\t%d\n", ret2);	
//	printf("\n\n");
//
//	ret1 = printf("Dollars test %4$040d %3$0hhd %1$d %2$+d", INT_MAX + 2, INT_MAX + 1, (signed char)(4200 * -1), -15);
//	printf("\t%d\n", ret1);
//	ret2 = ft_printf("Dollars test %4$040d %3$0hhd %1$d %2$+d", INT_MAX + 2, INT_MAX + 1, (signed char)(4200 * -1), -15);
//	printf("\t%d\n", ret2);	
//	printf("\n\n");
//
//	printf("\n*******************************************************\n");
//	ret1 = printf("lld Dollars test %4$40.10lld %3$.20hhd %1$ld %2$hd", LONG_MAX + 2, (short)(SHRT_MAX + 4), (char)CHAR_MAX, LLONG_MAX + 1);
//	printf("\t%d\n", ret1);
//	ret2 = ft_printf("lld Dollars test %4$40.10lld %3$.20hhd %1$ld %2$hd", LONG_MAX + 2, (short)(SHRT_MAX + 4), (char)CHAR_MAX, LLONG_MAX + 1);
//	printf("\t%d\n", ret2);	
//	printf("\n\n");
//
//	ret1 = printf("lld Dollars test %4$40lld %3$d %1$d %2$+d", INT_MAX + 2, INT_MAX + 1, 42, (LLONG_MAX + 3) * -1);
//	printf("\t%d\n", ret1);
//	ret2 = ft_printf("lld Dollars test %4$40lld %3$d %1$d %2$d", INT_MAX + 2, INT_MAX + 1, 42, (LLONG_MAX + 3) * -1);
//	printf("\t%d\n", ret2);	
//	printf("\n\n");
//
//	ret1 = printf("lld Dollars test %4$40lld %3$d %1$d %2$+d", INT_MAX + 2, INT_MAX + 1, 42, LLONG_MIN - 1);
//	printf("\t%d\n", ret1);
//	ret2 = ft_printf("lld Dollars test %4$40lld %3$d %1$d %2$d", INT_MAX + 2, INT_MAX + 1, 42, LLONG_MIN - 1);
//	printf("\t%d\n", ret2);	
//	printf("\n\n");
//
//
//
//
//
//
//
//	ret1 = printf("%d", INT_MIN - 1);
//	printf("\t%d\n", ret1);
//	ret2 = ft_printf("%d", INT_MIN - 1);
//	printf("\t%d\n", ret2);
//	printf("\n\n");
//
//	ret1 = printf("%d", INT_MAX + 2);
//	printf("\t%d\n", ret1);
//	ret2 = ft_printf("%d", INT_MAX + 2);
//	printf("\t%d\n", ret2);
//	printf("\n\n");

	return (0);
}
