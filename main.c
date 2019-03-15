/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 17:27:50 by abarthel          #+#    #+#             */
/*   Updated: 2019/03/15 18:40:16 by abarthel         ###   ########.fr       */
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

	printf("\n==================== NBR FORMATTING ===================\n");
	
	(void)ret1;
	(void)ret2;
	printf("|%d|\n", -150);
	ft_printf("|%d|\n", -150);
	printf("|%d|\n", 150);
	ft_printf("|%d|\n", 150);
	printf("|%0d|\n", -150);
	ft_printf("|%0d|\n", -150);
	printf("|%0d|\n", 150);
	ft_printf("|%0d|\n", 150);
	printf("|%+d|\n", -150);
	ft_printf("|%+d|\n", -150);
	printf("|%+d|\n", 150);
	ft_printf("|%+d|\n", 150);
	printf("|%40d|\n", -150);
	ft_printf("|%40d|\n", -150);
	printf("|%40d|\n", 150);
	ft_printf("|%40d|\n", 150);
	printf("|%.d|\n", -150); 
	ft_printf("|%.d|\n", -150); 
	printf("|%+.d|\n", -150); 
	ft_printf("|%+.d|\n", -150);
	printf("|%+.d|\n", 150); 
	ft_printf("|%+.d|\n", 150); 
	printf("|%45.d|\n", -150); 
	ft_printf("|%45.d|\n", -150); 
	printf("|%45.d|\n", 150);
	ft_printf("|%45.d|\n", 150);
	printf("|%+45.d|\n", -150); 
	ft_printf("|%+45.d|\n", -150); 
	printf("|%+45.d|\n", 150); 
	ft_printf("|%+45.d|\n", 150); 
	printf("|%.40d|\n", -150); 
	ft_printf("|%.40d|\n", -150); 
	printf("|%+.40d|\n", -150); 
	ft_printf("|%+.40d|\n", -150);
	printf("|%+.40d|\n", 150); 
	ft_printf("|%+.40d|\n", 150); 
	printf("|%45.40d|\n", -150); 
	ft_printf("|%45.40d|\n", -150); 
	printf("|%45.40d|\n", 150);
	ft_printf("|%45.40d|\n", 150);
	printf("|%+45.40d|\n", -150); 
	ft_printf("|%+45.40d|\n", -150); 
	printf("|%+45.40d|\n", 150); 
	ft_printf("|%+45.40d|\n", 150); 
	printf("|%040d|\n", -150);
	ft_printf("|%040d|\n", -150);
	printf("|%040d|\n", 150);
	ft_printf("|%040d|\n", 150);
	printf("|%+040d|\n", -150);
	ft_printf("|%+040d|\n", -150);
	printf("|%+040d|\n", 150);
	ft_printf("|%+040d|\n", 150);
	printf("|%0.40d|\n", -150);
	ft_printf("|%0.40d|\n", -150);
	printf("|%0.40d|\n", 150);
	ft_printf("|%0.40d|\n", 150);
	printf("|%0d|\n", -150);
	ft_printf("|%0d|\n", -150);
	printf("|%0d|\n", 1500);
	ft_printf("|%0d|\n", 1500);
	printf("|%010d|\n", 150);
	ft_printf("|%010d|\n", 150);
	printf("|%.0d|\n", -150);
	ft_printf("|%.0d|\n", -150);
	printf("|%+0.0d|\n", 0);
	ft_printf("|%+0.0d|\n", 0);
	printf("|%+0.0d|\n", 1);
	ft_printf("|%+0.0d|\n", 1);
	printf("|%+10.0d|\n", 1);
	ft_printf("|%+10.0d|\n", 1);
	printf("|%+0.10d|\n", 1);
	ft_printf("|%+0.10d|\n", 1);
	printf("|%+0.0d|\n", -1);
	ft_printf("|%+0.0d|\n", -1);
	printf("|%+10.0d|\n", -1);
	ft_printf("|%+10.0d|\n", -1);
	printf("|%+0.10d|\n", -1);
	ft_printf("|%+0.10d|\n", -1);
	printf("|%+0.0d|\n", INT_MAX);
	ft_printf("|%+0.0d|\n", INT_MAX);
	printf("|%+10.0d|\n", INT_MAX);
	ft_printf("|%+10.0d|\n", INT_MAX);
	printf("|%+0.10d|\n", INT_MAX);
	ft_printf("|%+0.10d|\n", INT_MAX);
	printf("|%+0.0d|\n", INT_MIN);
	ft_printf("|%+0.0d|\n", INT_MIN);
	printf("|%+10.0d|\n", INT_MIN);
	ft_printf("|%+10.0d|\n", INT_MIN);
	printf("|%+0.10d|\n", INT_MIN);
	ft_printf("|%+0.10d|\n", INT_MIN);
	printf("|%+.0d|\n", 0);
	ft_printf("|%+.0d|\n", 0);
	printf("|%+0d|\n", 0);
	ft_printf("|%+0d|\n", 0);
	printf("|%+.10d|\n", 0);
	ft_printf("|%+.10d|\n", 0);
	printf("|%+10d|\n", 0);
	ft_printf("|%+10d|\n", 0);
	printf("|%+d|\n", 0);
	ft_printf("|%+d|\n", 0);
	printf("|%.0d|\n", 150);
	ft_printf("|%.0d|\n", 150);
	printf("|%042.0d|\n", 150);
	ft_printf("|%042.0d|\n", 150);
	printf("|%42.20d|\n", 150);
	ft_printf("|%42.20d|\n", 150);
	printf("|%+42.20d|\n", 150);
	ft_printf("|%+42.20d|\n", 150);
	printf("|%42.20d|\n", -150);
	ft_printf("|%42.20d|\n", -150);
	printf("|%+42.20d|\n", -150);
	ft_printf("|%+42.20d|\n", -150);
	printf("|%+042.0d|\n", 150);
	ft_printf("|%+042.0d|\n", 150);
	printf("|%+042.3d|\n", 150);
	ft_printf("|%+042.3d|\n", 150);
	printf("|%+042.1d|\n", 150);
	ft_printf("|%+042.1d|\n", 150);
	printf("|%+042d|\n", 150);
	ft_printf("|%+042d|\n", 150);
	printf("|%+042.4d|\n", 150);
	ft_printf("|%+042.4d|\n", 150);
	printf("|%+40d|\n", -150);
	ft_printf("|%+40d|\n", -150);
	printf("|%+40.24d|\n", 150);
	ft_printf("|%+40.24d|\n", 150);
	printf("|%40.0d|\n", -150);
	ft_printf("|%40.0d|\n", -150);
	printf("|%40.0d|\n", 150);
	ft_printf("|%40.0d|\n", 150);
	printf("|%+40.0d|\n", -150);
	ft_printf("|%+40.0d|\n", -150);
	printf("|%+40.0d|\n", 150);
	ft_printf("|%+40.0d|\n", 150);
	printf("|%+40.0d|\n", -150);
	ft_printf("|%+40.0d|\n", -150);
	printf("|%+40d|\n", -150);
	ft_printf("|%+40d|\n", -150);
	printf("|%+040d|\n", -150);
	ft_printf("|%+040d|\n", -150);
	printf("|%0 40d|\n", -150);
	ft_printf("|%0 40d|\n", -150);
	printf("|%040d|\n", -150);
	ft_printf("|%040d|\n", -150);
	printf("|%+040.0d|\n", -150);
	ft_printf("|%+040.0d|\n", -150);
	printf("|%+40.0d|\n", 150);
	ft_printf("|%+40.0d|\n", 150);
	printf("********************    -   ****************\n");	
	printf("|%-d|\n", -150);
	ft_printf("|%-d|\n", -150);
	printf("|%-d|\n", 150);
	ft_printf("|%-d|\n", 150);
	printf("|%-+d|\n", -150);
	ft_printf("|%-+d|\n", -150);
	printf("|%-+d|\n", 150);
	ft_printf("|%-+d|\n", 150);
	printf("|%-40d|\n", -150);
	ft_printf("|%-40d|\n", -150);
	printf("|%-40d|\n", 150);
	ft_printf("|%-40d|\n", 150);
	printf("|%-40.d|\n", -150);
	ft_printf("|%-40.d|\n", -150);
	printf("|%-40.d|\n", 150);
	ft_printf("|%-40.d|\n", 150);
	printf("|%-.d|\n", -150);
	ft_printf("|%-.d|\n", -150);
	printf("|%-.d|\n", 150);
	ft_printf("|%-.d|\n", 150);
	printf("|%-+.d|\n", -150); 
	ft_printf("|%-+.d|\n", -150); 
	printf("|%-+.d|\n", 150); 
	ft_printf("|%-+.d|\n", 150); 
	printf("|%-45.d|\n", -150); 
	ft_printf("|%-45.d|\n", -150); 
	printf("|%-45.d|\n", 150);
	ft_printf("|%-45.d|\n", 150);
	printf("|%-+45.d|\n", -150); 
	ft_printf("|%-+45.d|\n", -150); 
	printf("|%-+45.d|\n", 150); 
	ft_printf("|%-+45.d|\n", 150); 
	printf("|%-.d|\n", -150);
	ft_printf("|%-.d|\n", -150);
	printf("|%-40.5d|\n", -150);
	ft_printf("|%-40.5d|\n", -150);
	printf("|%-40.5d|\n", 150);
	ft_printf("|%-40.5d|\n", 150);
	printf("|%-.40d|\n", -150);
	ft_printf("|%-.40d|\n", -150);
	printf("|%-.40d|\n", 150);
	ft_printf("|%-.40d|\n", 150);
	printf("|%-+.40d|\n", -150); 
	ft_printf("|%-+.40d|\n", -150); 
	printf("|%-+.40d|\n", 150); 
	ft_printf("|%-+.40d|\n", 150); 
	printf("|%-45.40d|\n", -150); 
	ft_printf("|%-45.40d|\n", -150); 
	printf("|%-45.40d|\n", 150);
	ft_printf("|%-45.40d|\n", 150);
	printf("|%-+45.40d|\n", -150); 
	ft_printf("|%-+45.40d|\n", -150); 
	printf("|%-+45.40d|\n", 150); 
	ft_printf("|%-+45.40d|\n", 150); 
	printf("|%-.0d|\n", -150);
	ft_printf("|%-.0d|\n", -150);
	printf("|%-.0d|\n", 150);
	ft_printf("|%-.0d|\n", 150);
	printf("|%-+40d|\n", -150);
	ft_printf("|%-+40d|\n", -150);
	printf("|%-+40d|\n", 150);
	ft_printf("|%-+40d|\n", 150);
	printf("|%-40.0d|\n", -150);
	ft_printf("|%-40.0d|\n", -150);
	printf("|%-40.0d|\n", 150);
	ft_printf("|%-40.0d|\n", 150);
	printf("|%-+40.0d|\n", -150);
	ft_printf("|%-+40.0d|\n", -150);
	printf("|%-+40.0d|\n", 150);
	ft_printf("|%-+40.0d|\n", 150);
	printf("|%-+40.0d|\n", -150);
	ft_printf("|%-+40.0d|\n", -150);
	printf("|%-+40.0d|\n", 150);
	ft_printf("|%-+40.0d|\n", 150);
	
	
	
	
	ret1 = printf("0>>Dollars test %40d %d %.0d %+d", -15, 42, -0, 0);
	printf("\t%d\n", ret1);
	ret2 = ft_printf("0<<Dollars test %40d %d %.0d %+d", -15, 42, -0, 0);
	printf("\t%d\n", ret2);	
	printf("\n");
	ret1 = printf(">>>Dollars test %40d %d %.0d %+d", 15, 42, -0, 0);
	printf("\t%d\n", ret1);
	ret2 = ft_printf("><<Dollars test %40d %d %.0d %+d", 15, 42, -0, 0);
	printf("\t%d\n", ret2);	
	printf("\n");
	ret1 = printf("1>>Dollars test %40d %d %+d %+d", -15, 42, 0, -0);
	printf("\t%d\n", ret1);
	ret2 = ft_printf("1<<Dollars test %40d %d %+d %+d", -15, 42, 0, -0);
	printf("\t%d\n", ret2);	
	printf("\n");
	ret1 = printf("2>>Dollars test %+40d %d %+d %+d", 15, 42, 0, -0);
	printf("\t%d\n", ret1);
	ret2 = ft_printf("2<<Dollars test %+40d %d %+d %+d", 15, 42, 0, -0);
	printf("\t%d\n", ret2);	
	printf("\n");
	ret1 = printf("3>>Dollars test %+40d %d %d %+d", 15, 42, 0, -0);
	printf("\t%d\n", ret1);
	ret2 = ft_printf("3<<Dollars test %+40d %d %d %+d", 15, 42, 0, -0);
	printf("\t%d\n", ret2);	
	printf("\n");
	ret1 = printf("4>>Dollars test %0+40d %d %d %+d", 15, 42, 0, -0);
	printf("\t%d\n", ret1);
	ret2 = ft_printf("4<<Dollars test %0+40d %d %d %+d", 15, 42, 0, -0);
	printf("\t%d\n", ret2);	
	printf("\n");
	ret1 = printf("5>>Dollars test %0+.40d %d %d %+d", 15, 42, 0, -0);
	printf("\t%d\n", ret1);
	ret2 = ft_printf("5<<Dollars test %0+.40d %d %d %+d", 15, 42, 0, -0);
	printf("\t%d\n", ret2);	
	printf("\n");
	ret1 = printf("6>>Dollars test %0+.40d %d %d %+d", -15, 42, 0, -0);
	printf("\t%d\n", ret1);
	ret2 = ft_printf("6<<Dollars test %0+.40d %d %d %+d", -15, 42, 0, -0);
	printf("\t%d\n", ret2);	
	printf("\n");
	ret1 = printf("7>>Dollars test %.40d %d %+4.2d %+d", 15, 42, 0, -0);
	printf("\t%d\n", ret1);
	ret2 = ft_printf("7<<Dollars test %.40d %d %+4.2d %+d", 15, 42, 0, -0);
	printf("\t%d\n", ret2);	
	printf("\n");
	ret1 = printf("8>>Dollars test %20.4d %d %4.2d %+d", 15, 42, 0, -0);
	printf("\t%d\n", ret1);
	ret2 = ft_printf("8<<Dollars test %20.4d %d %4.2d %+d", 15, 42, 0, -0);
	printf("\t%d\n", ret2);	
	printf("\n");
	ret1 = printf("9>>Dollars test %020.4d %d %+0.0d %+d", 15, 42, 0, -0);
	printf("\t%d\n", ret1);
	ret2 = ft_printf("9<<Dollars test %020.4d %d %+0.0d %+d", 15, 42, 0, -0);
	printf("\t%d\n", ret2);	
	printf("\n");
	ret1 = printf("0>>Dollars test %+020.4d %d %d %+d", 15, 42, 0, -0);
	printf("\t%d\n", ret1);
	ret2 = ft_printf("0<<Dollars test %+020.4d %d %d %+d", 15, 42, 0, -0);
	printf("\t%d\n", ret2);	
	printf("\n");
	ret1 = printf("1>>Dollars test %+020.4d %d %0.0d %+d", -15, 42, 0, -0);
	printf("\t%d\n", ret1);
	ret2 = ft_printf("1<<Dollars test %+020.4d %d %0.0d %+d", -15, 42, 0, -0);
	printf("\t%d\n", ret2);	
	printf("\n");
	ret1 = printf("2>>Dollars test %+-20.4d %d %0.0d %+d", 15, 42, -0, -0);
	printf("\t%d\n", ret1);
	ret2 = ft_printf("2<<Dollars test %+-20.4d %d %0.0d %+d", 15, 42, -0, -0);
	printf("\t%d\n", ret2);	
	printf("\n");
	ret1 = printf("3>>Dollars test %+-20.4d %d %+0.0d %+d", -15, 42, 0, -0);
	printf("\t%d\n", ret1);
	ret2 = ft_printf("3<<Dollars test %+-20.4d %d %+0.0d %+d", -15, 42, 0, -0);
	printf("\t%d\n", ret2);	
	printf("\n");
	ret1 = printf("4>>Dollars test %+-20.d %d %+0.0d %+d", -15, 42, 0, -0);
	printf("\t%d\n", ret1);
	ret2 = ft_printf("4<<Dollars test %+-20.d %d %+0.0d %+d", -15, 42, 0, -0);
	printf("\t%d\n", ret2);	
	printf("\n");
	ret1 = printf("5>>Dollars test %+-.d %d %+0.0d %+d", -15, 42, 0, -0);
	printf("\t%d\n", ret1);
	ret2 = ft_printf("5<<Dollars test %+-.d %d %+0.0d %+d", -15, 42, 0, -0);
	printf("\t%d\n", ret2);	
	printf("\n");
	ret1 = printf("6>>Dollars test %+0.d %d %+0.0d %+d", -15, 42, 0, -0);
	printf("\t%d\n", ret1);
	ret2 = ft_printf("6<<Dollars test %+0.d %d %+0.0d %+d", -15, 42, 0, -0);
	printf("\t%d\n", ret2);	
	printf("\n");
	ret1 = printf("7>>Dollars test %+.0d %d %+0.0d %+d", -15, 42, 0, -0);
	printf("\t%d\n", ret1);
	ret2 = ft_printf("7<<Dollars test %+.0d %d %+0.0d %+d", -15, 42, 0, -0);
	printf("\t%d\n", ret2);	
	printf("\n");
	printf("\n\n");

	ret1 = printf("posDoll test %4$+040hd %3$d %1$d %2$+d", INT_MAX + 2, INT_MAX + 1, 42, (short)12);
	printf("\t%d\n", ret1);
	ret2 = ft_printf("posDoll test %4$+040hd %3$d %1$d %2$+d", INT_MAX + 2, INT_MAX + 1, 42, (short)12);
	printf("\t%d\n", ret2);	
	printf("\n\n");

	ret1 = printf("Dollars test %4$040d %3$0hhd %1$d %2$+d", INT_MAX + 2, INT_MAX + 1, (signed char)(4200 * -1), -15);
	printf("\t%d\n", ret1);
	ret2 = ft_printf("Dollars test %4$040d %3$0hhd %1$d %2$+d", INT_MAX + 2, INT_MAX + 1, (signed char)(4200 * -1), -15);
	printf("\t%d\n", ret2);	
	printf("\n\n");

	printf("\n*******************************************************\n");
	ret1 = printf("lld Dollars test %4$40.10lld %3$.20hhd %1$ld %2$hd", LONG_MAX + 2, (short)(SHRT_MAX + 4), (char)CHAR_MAX, LLONG_MAX + 1);
	printf("\t%d\n", ret1);
	ret2 = ft_printf("lld Dollars test %4$40.10lld %3$.20hhd %1$ld %2$hd", LONG_MAX + 2, (short)(SHRT_MAX + 4), (char)CHAR_MAX, LLONG_MAX + 1);
	printf("\t%d\n", ret2);	
	printf("\n\n");

	ret1 = printf("lld Dollars test %4$40lld %3$d %1$d %2$+d", INT_MAX + 2, INT_MAX + 1, 42, (LLONG_MAX + 3) * -1);
	printf("\t%d\n", ret1);
	ret2 = ft_printf("lld Dollars test %4$40lld %3$d %1$d %2$d", INT_MAX + 2, INT_MAX + 1, 42, (LLONG_MAX + 3) * -1);
	printf("\t%d\n", ret2);	
	printf("\n\n");

	ret1 = printf("lld Dollars test %4$40lld %3$d %1$d %2$+d", INT_MAX + 2, INT_MAX + 1, 42, LLONG_MIN - 1);
	printf("\t%d\n", ret1);
	ret2 = ft_printf("lld Dollars test %4$40lld %3$d %1$d %2$d", INT_MAX + 2, INT_MAX + 1, 42, LLONG_MIN - 1);
	printf("\t%d\n", ret2);	
	printf("\n\n");



	printf("|% -d% -d|\n", -150, 42);
	ft_printf("|% -d% -d|\n", -150, 42);
	printf("|%-d%-d|\n", 150, -42);
	ft_printf("|%-d%-d|\n", 150, -42);
	printf("|%-40d%-d|\n", -150, 42);
	ft_printf("|%-40d%-d|\n", -150, 42);
	printf("|%-40d%-d|\n", 150, -42);
	ft_printf("|%-40d%-d|\n", 150, -42);
	printf("|%-40.d%-d|\n", -150, 42);
	ft_printf("|%-40.d%-d|\n", -150, 42);
	printf("|%-40.d%-d|\n", 150, -42);
	ft_printf("|%-40.d%-d|\n", 150, -42);
	printf("|%-.d%-d|\n", -150, 42);
	ft_printf("|%-.d%-d|\n", -150, 42);
	printf("|%-.d%-d|\n", 150, -42);
	ft_printf("|%-.d%-d|\n", 150, -42);
	printf("|%-45.d%-d|\n", -150, 42); 
	ft_printf("|%-45.d%-d|\n", -150, 42); 
	printf("|%-45.d%-d|\n", 150, -42);
	ft_printf("|%-45.d%-d|\n", 150, -42);
	printf("|%-.d%-d|\n", -150, 42);
	ft_printf("|%-.d%-d|\n", -150, 42);
	printf("|%-40.5d%-d|\n", -150, 42);
	ft_printf("|%-40.5d%-d|\n", -150, 42);
	printf("|%-40.5d%-d|\n", 150, -42);
	ft_printf("|%-40.5d%-d|\n", 150, -42);
	printf("|%-.40d%-d|\n", -150, 42);
	ft_printf("|%-.40d%-d|\n", -150, 42);
	printf("|%-.40d%-d|\n", 150, -42);
	ft_printf("|%-.40d%-d|\n", 150, -42);
	printf("|%-45.40d%-d|\n", -150, 42); 
	ft_printf("|%-45.40d%-d|\n", -150, 42); 
	printf("|%-45.40d%-d|\n", 150, -42);
	ft_printf("|%-45.40d%-d|\n", 150, -42);
	printf("|%-.0d%-d|\n", -150, 42);
	ft_printf("|%-.0d%-d|\n", -150, 42);
	printf("|%-.0d%-d|\n", 150, -42);
	ft_printf("|%-.0d%-d|\n", 150, -42);
	printf("|%-40.0d%-d|\n", -150, 42);
	ft_printf("|%-40.0d%-d|\n", -150, 42);
	printf("|%-40.0d%-d|\n", 150, -42);
	ft_printf("|%-40.0d%-d|\n", 150, -42);


	printf("\n\n==== SPACE FLAG ====\n\n");
	printf("== - ===\n");
	printf("|%+0.0d% -d% -d% -d|\n", 0, 150, -42, 0);
	ft_printf("|%+0.0d% -d% -d% -d|\n", 0, 150, -42, 0);
	printf("|%+0.0d% -d%-d%-d|\n", 0, 150, -42, 0);
	ft_printf("|%+0.0d% -d%-d%-d|\n", 0, 150, -42, 0);
	printf("|%+0.0d% -d% -d% -d|\n", 1, 150, -42, 0);
	ft_printf("|%+0.0d% -d% -d% -d|\n", 1, 150, -42, 0);
	printf("|%+10.0d% -d% -d% -d|\n", 1, 150, -42, 0);
	ft_printf("|%+10.0d% -d% -d% -d|\n", 1, 150, -42, 0);
	printf("|%+0.10d% -d% -d% -d|\n", 1, 150, -42, 0);
	ft_printf("|%+0.10d% -d% -d% -d|\n", 1, 150, -42, 0);
	printf("|%+0.0d% -d% -d% -d|\n", -1, 150, -42, 0);
	ft_printf("|%+0.0d% -d% -d% -d|\n", -1, 150, -42, 0);
	printf("|%+10.0d% -d% -d% -d|\n", -1, 150, -42, 0);
	ft_printf("|%+10.0d% -d% -d% -d|\n", -1, 150, -42, 0);
	printf("|%+0.10d% -d% -d% -d|\n", -1, 150, -42, 0);
	ft_printf("|%+0.10d% -d% -d% -d|\n", -1, 150, -42, 0);
	printf("|%+0.0d% -d% -d% -d|\n", INT_MAX, 150, -42, 0);
	ft_printf("|%+0.0d% -d% -d% -d|\n", INT_MAX, 150, -42, 0);
	printf("|%+10.0d% -d% -d% -d|\n", INT_MAX, 150, -42, 0);
	ft_printf("|%+10.0d% -d% -d% -d|\n", INT_MAX, 150, -42, 0);
	printf("|%+0.10d% -d% -d% -d|\n", INT_MAX, 150, -42, 0);
	ft_printf("|%+0.10d% -d% -d% -d|\n", INT_MAX, 150, -42, 0);
	printf("|%+0.0d% -d% -d% -d|\n", INT_MIN, 150, -42, 0);
	ft_printf("|%+0.0d% -d% -d% -d|\n", INT_MIN, 150, -42, 0);
	printf("|%+10.0d% -d% -d% -d|\n", INT_MIN, 150, -42, 0);
	ft_printf("|%+10.0d% -d% -d% -d|\n", INT_MIN, 150, -42, 0);
	printf("|%+0.10d% -d% -d% -d|\n", INT_MIN, 150, -42, 0);
	ft_printf("|%+0.10d% -d% -d% -d|\n", INT_MIN, 150, -42, 0);
	printf("|%+.0d% -d% -d% -d|\n", 0, 150, -42, 0);
	ft_printf("|%+.0d% -d% -d% -d|\n", 0, 150, -42, 0);
	printf("|%+0d% -d% -d% -d|\n", 0, 150, -42, 0);
	ft_printf("|%+0d% -d% -d% -d|\n", 0, 150, -42, 0);
	printf("|%+.10d% -d% -d% -d|\n", 0, 150, -42, 0);
	ft_printf("|%+.10d% -d% -d% -d|\n", 0, 150, -42, 0);
	printf("|%+10d% -d% -d% -d|\n", 0, 150, -42, 0);
	ft_printf("|%+10d% -d% -d% -d|\n", 0, 150, -42, 0);
	printf("|%+10d% -d% 0d% -d|\n", 0, 150, -42, 0);
	ft_printf("|%+10d% -d% 0d% -d|\n", 0, 150, -42, 0);
	printf("|%+d% -d% -d% -d|\n", 0, 150, -42, 0);
	ft_printf("|%+d% -d% -d% -d|\n", 0, 150, -42, 0);
	printf("== + ===\n");
	printf("|%+0.0d% d% d% d|\n", 0, 150, -42, 0);
	ft_printf("|%+0.0d% d% d% -d|\n", 0, 150, -42, 0);
	printf("|%+0.0d% d%d%d|\n", 0, 150, -42, 0);
	ft_printf("|%+0.0d% d%d%d|\n", 0, 150, -42, 0);
	printf("|%+0.0d% d% d% d|\n", 1, 150, -42, 0);
	ft_printf("|%+0.0d% d% d% -d|\n", 1, 150, -42, 0);
	printf("|%+10.0d% d% d% -d|\n", 1, 150, -42, 0);
	ft_printf("|%+10.0d% d% d% -d|\n", 1, 150, -42, 0);
	printf("|%+0.10d% d% d% -d|\n", 1, 150, -42, 0);
	ft_printf("|%+0.10d% d% d% -d|\n", 1, 150, -42, 0);
	printf("|%+0.0d% d% d% -d|\n", -1, 150, -42, 0);
	ft_printf("|%+0.0d% d% d% -d|\n", -1, 150, -42, 0);
	printf("|%+10.0d% d% d% -d|\n", -1, 150, -42, 0);
	ft_printf("|%+10.0d% d% d% -d|\n", -1, 150, -42, 0);
	printf("|%+0.10d% d% d% -d|\n", -1, 150, -42, 0);
	ft_printf("|%+0.10d% d% d% -d|\n", -1, 150, -42, 0);
	printf("|%+0.0d% d% d% -d|\n", INT_MAX, 150, -42, 0);
	ft_printf("|%+0.0d% d% d% -d|\n", INT_MAX, 150, -42, 0);
	printf("|%+10.0d% d% d% -d|\n", INT_MAX, 150, -42, 0);
	ft_printf("|%+10.0d% d% d% -d|\n", INT_MAX, 150, -42, 0);
	printf("|%+0.10d% d% d% -d|\n", INT_MAX, 150, -42, 0);
	ft_printf("|%+0.10d% d% d% -d|\n", INT_MAX, 150, -42, 0);
	printf("|%+0.0d% d% d% -d|\n", INT_MIN, 150, -42, 0);
	ft_printf("|%+0.0d% d% d% -d|\n", INT_MIN, 150, -42, 0);
	printf("|%+10.0d% d% d% -d|\n", INT_MIN, 150, -42, 0);
	ft_printf("|%+10.0d% d% d% -d|\n", INT_MIN, 150, -42, 0);
	printf("|%+0.10d% d% d% -d|\n", INT_MIN, 150, -42, 0);
	ft_printf("|%+0.10d% d% d% -d|\n", INT_MIN, 150, -42, 0);
	printf("|%+.0d% d% d% -d|\n", 0, 150, -42, 0);
	ft_printf("|%+.0d% d% d% -d|\n", 0, 150, -42, 0);
	printf("|%+0d% d% d% -d|\n", 0, 150, -42, 0);
	ft_printf("|%+0d% d% d% -d|\n", 0, 150, -42, 0);
	printf("|%+.10d% d% d% -d|\n", 0, 150, -42, 0);
	ft_printf("|%+.10d% d% d% -d|\n", 0, 150, -42, 0);
	printf("|%+10d% d% d% -d|\n", 0, 150, -42, 0);
	ft_printf("|%+10d% d% d% -d|\n", 0, 150, -42, 0);
	printf("|%+10d% d% 0d% -d|\n", 0, 150, -42, 0);
	ft_printf("|%+10d% d% 0d% -d|\n", 0, 150, -42, 0);
	printf("|%+d% d% d% -d|\n", 0, 150, -42, 0);
	ft_printf("|%+d% d% d% -d|\n", 0, 150, -42, 0);
	printf("|%.d% d% d% -d|\n", 0, 150, -42, 0);
	ft_printf("|%.d% d% d% -d|\n", 0, 150, -42, 0);
	printf("|%-.d% d% d% -d|\n", 0, 150, -42, 0);
	ft_printf("|%-.d% d% d% -d|\n", 0, 150, -42, 0);
	printf(">|% .d% d% d% -d|\n", 0, 150, -42, 0);
	ft_printf(">|% .d% d% d% -d|\n", 0, 150, -42, 0);
	printf("|%- .d% d% d% -d|\n", 0, 150, -42, 0);
	ft_printf("|%- .d% d% d% -d|\n", 0, 150, -42, 0);
	printf("|%- 21.d% d% d% -d|\n", 0, 150, -42, 0);
	ft_printf("|%- 21.d% d% d% -d|\n", 0, 150, -42, 0);
	printf("|% 21.d% d% d% -d|\n", 0, 150, -42, 0);
	ft_printf("|% 21.d% d% d% -d|\n", 0, 150, -42, 0);
	printf("|% 21d% d% d% -d|\n", 0, 150, -42, 0);
	ft_printf("|% 21d% d% d% -d|\n", 0, 150, -42, 0);

	printf("\n\n");
	printf("\n\n");
	printf("How 1024 works with printf...\n");
	printf(">|% 21d|\n", 1024);
	ft_printf(">|% 21d|\n", 1024);
	printf("<|%22d|\n", 1024);
	ft_printf("<|%22d|\n", 1024);
	printf(">|% 4d|\n", 1024);
	ft_printf(">|% 4d|\n", 1024);
	printf("<|% 3d|\n", 1024);
	ft_printf("<|% 3d|\n", 1024);
	printf(">|% 5d|\n", 1024);
	ft_printf(">|% 5d|\n", 1024);
	printf("<|% -21d|\n", 1024);
	ft_printf("<|% -21d|\n", 1024);
	printf(" |% -d|\n", 1024);
	ft_printf(" |% -d|\n", 1024);
	printf("-|% -21.d|\n", 1024);
	ft_printf("-|% -21.d|\n", 1024);
	printf(" |% 21.d|\n", 1024);
	ft_printf(" |% 21.d|\n", 1024);
	printf(".|% .d|\n", 1024);
	ft_printf(".|% .d|\n", 1024);
	printf("0|% 0.d|\n", 1024);
	ft_printf("0|% 0.d|\n", 1024);
	printf(" |% d|\n", 1024);
	ft_printf(" |% d|\n", 1024);
	printf(">|%d|\n", 1024);
	ft_printf(">|%d|\n", 1024);
	printf(".|%.d|\n", 1024);
	ft_printf(".|%.d|\n", 1024);
	printf("+|%+.d|\n", 1024);
	ft_printf("+|%+.d|\n", 1024);
	printf(">|%-.d|\n", 1024);
	ft_printf(">|%-.d|\n", 1024);
	printf("<|% 0.0d|\n", 1024);
	ft_printf("<|% 0.0d|\n", 1024);
	printf(">|%0.0d|\n", 1024);
	ft_printf(">|%0.0d|\n", 1024);
	printf("+|%+d|\n", 1024);
	ft_printf("+|%+d|\n", 1024);
	printf(" |%+.0d|\n", 1024);
	ft_printf(" |%+.0d|\n", 1024);
	printf(">|%- d|\n", 1024);
	ft_printf(">|%- d|\n", 1024);
	printf("|%-+d|\n", 1024);
	ft_printf("|%-+d|\n", 1024);
//
	printf("\n\n");
	printf("\n\n");
	printf("How -124 works with printf...\n");
	printf(">|% 21d|\n", -124);
	ft_printf(">|% 21d|\n", -124);
	printf("<|%22d|\n", -124);
	ft_printf("<|%22d|\n", -124);
	printf(">|% 4d|\n", -124);
	ft_printf(">|% 4d|\n", -124);
	printf("<|% 3d|\n", -124);
	ft_printf("<|% 3d|\n", -124);
	printf(">|% 5d|\n", -124);
	ft_printf(">|% 5d|\n", -124);
	printf("<|% -21d|\n", -124);
	ft_printf("<|% -21d|\n", -124);
	printf("-|% -21.d|\n", -124);
	ft_printf("-|% -21.d|\n", -124);
	printf(" |% 21.d|\n", -124);
	ft_printf(" |% 21.d|\n", -124);
	printf(".|% .d|\n", -124);
	ft_printf(".|% .d|\n", -124);
	printf("0|% 0.d|\n", -124);
	ft_printf("0|% 0.d|\n", -124);
	printf(" |% d|\n", -124);
	ft_printf(" |% d|\n", -124);
	printf(">|%d|\n", -124);
	ft_printf(">|%d|\n", -124);
	printf(".|%.d|\n", -124);
	ft_printf(".|%.d|\n", -124);
	printf("+|%+.d|\n", -124);
	ft_printf("+|%+.d|\n", -124);
	printf(">|%-.d|\n", -124);
	ft_printf(">|%-.d|\n", -124);
	printf("<|% 0.0d|\n", -124);
	ft_printf("<|% 0.0d|\n", -124);
	printf(">|%0.0d|\n", -124);
	ft_printf(">|%0.0d|\n", -124);
	printf("+|%+d|\n", -124);
	ft_printf("+|%+d|\n", -124);
	printf(" |%+.0d|\n", -124);
	ft_printf(" |%+.0d|\n", -124);
	printf(">|%- d|\n", -124);
	ft_printf(">|%- d|\n", -124);
	printf("|%-+d|\n", -124);
	ft_printf("|%-+d|\n", -124);
	
	
	printf("\n\n");
	printf("\n\n");
	printf("\n\n");
	printf("\n\n");
	printf("\n\n");
	printf("\n\n");
	printf("\n\n");
	printf("How 1 works with printf...\n");
	printf(">|% 21d|\n", 1);
	ft_printf(">|% 21d|\n", 1);
//	printf(".|% -21d|\n", 1);
//	ft_printf(".|% -21d|\n", 1);
//	printf("a|% -21.d|\n", 1);
//	ft_printf("a|% -21.d|\n", 1);
	printf("b|% 21.d|\n", 1);
	ft_printf("b|% 21.d|\n", 1);
	printf("c|% .d|\n", 1);
	ft_printf("c|% .d|\n", 1);
	printf(" |% 0.d|\n", 1);
	ft_printf(" |% 0.d|\n", 1);
	printf(" |% 010.d|\n", 1);
	ft_printf(" |% 010.d|\n", 1);
	printf("0|%010.d|\n", 1);
	ft_printf("0|%010.d|\n", 1);
	printf("1|%010.0d|\n", 1);
	ft_printf("1|%010.0d|\n", 1);
	printf("n|%10.d|\n", 1);
	ft_printf("n|%10.d|\n", 1);
	printf("p|% 010.4d|\n", 1);
	ft_printf("p|% 010.4d|\n", 1);
	printf("q|%010.4d|\n", 1);
	ft_printf("q|%010.4d|\n", 1);
	printf("r|%10.4d|\n", 1);
	ft_printf("r|%10.4d|\n", 1);
	printf(" |% .d|\n", 1);
	ft_printf(" |% .d|\n", 1);
	printf(" |% 1.d|\n", 1);
	ft_printf(" |% 1.d|\n", 1);
	printf("d|% d|\n", 1);
	ft_printf("d|% d|\n", 1);
	printf("e|%d|\n", 1);
	ft_printf("e|%d|\n", 1);
	printf("f|%.d|\n", 1);
	ft_printf("f|%.d|\n", 1);
	printf("g|%+.d|\n", 1);
	ft_printf("g|%+.d|\n", 1);
//	printf("h|%-.d|\n", 1);
//	ft_printf("h|%-.d|\n", 1);
	printf("i|% 0.0d|\n", 1);
	ft_printf("i|% 0.0d|\n", 1);
	printf("j|%0.0d|\n", 1);
	ft_printf("j|%0.0d|\n", 1);
	printf("k|%+0.0d|\n", 1);
	ft_printf("k|%+0.0d|\n", 1);
	printf("z|%+d|\n", 1);
	ft_printf("z|%+d|\n", 1);
	printf("l|%+.0d|\n", 1);
	ft_printf("l|%+.0d|\n", 1);
//	printf("m|%- d|\n", 1);
//	ft_printf("m|%- d|\n", 1);
//	printf("n|%-+d|\n", 1);
//	ft_printf("n|%-+d|\n", 1);
//
	printf("\n\n");
	printf("\n\n");
	printf("How -1 works with printf...\n");
	printf("|% 21d|\n", -1);
	ft_printf("|% 21d|\n", -1);
	printf("|% -21d|\n", -1);
	ft_printf("|% -21d|\n", -1);
	printf("|% -21.d|\n", -1);
	ft_printf("|% -21.d|\n", -1);
	printf("|% 21.d|\n", -1);
	ft_printf("|% 21.d|\n", -1);
	printf("|% 21.2d|\n", -1);
	ft_printf("|% 21.2d|\n", -1);
	printf("|% 21.3d|\n", -1);
	ft_printf("|% 21.3d|\n", -1);
	printf("|%- 21.3d|\n", -1);
	ft_printf("|%- 21.3d|\n", -1);
	printf("|% 21.0d|\n", -1);
	ft_printf("|% 21.0d|\n", -1);
	printf("|%- 21.0d|\n", -1);
	ft_printf("|%- 21.0d|\n", -1);
	printf("|% .d|\n", -1);
	ft_printf("|% .d|\n", -1);
	printf("|% 0.d|\n", -1);
	ft_printf("|% 0.d|\n", -1);
	printf("|% d|\n", -1);
	ft_printf("|% d|\n", -1);
	printf("|%d|\n", -1);
	ft_printf("|%d|\n", -1);
	printf("|%.d|\n", -1);
	ft_printf("|%.d|\n", -1);
	printf("|%+.d|\n", -1);
	ft_printf("|%+.d|\n", -1);
	printf("|%-.d|\n", -1);
	ft_printf("|%-.d|\n", -1);
	printf("|% 0.0d|\n", -1);
	ft_printf("|% 0.0d|\n", -1);
	printf("|%0.0d|\n", -1);
	ft_printf("|%0.0d|\n", -1);
	printf("|%+0.0d|\n", -1);
	ft_printf("|%+0.0d|\n", -1);
	printf("|%+d|\n", -1);
	ft_printf("|%+d|\n", -1);
	printf("|%+.0d|\n", -1);
	ft_printf("|%+.0d|\n", -1);
	printf("|%-+d|\n", -1);
	ft_printf("|%-+d|\n", -1);
//
	printf("\n\n");
	printf("\n\n");
	printf("\n\n");
	printf("\n\n");
	printf("\n\n");
	printf("\n\n");
	printf("\n\n");
	printf("How zero works with printf...\n");
	printf("|% 21d|\n", 0);
	ft_printf("|% 21d|\n", 0);
	printf("|% 21.12d|\n", 0);
	ft_printf("|% 21.12d|\n", 0);
	printf("|% 1.1d|\n", 0);
	ft_printf("|% 1.1d|\n", 0);
	printf("|% -21d|\n", 0);
	ft_printf("|% -21d|\n", 0);
	printf("|% -21.d|\n", 0);
	ft_printf("|% -21.d|\n", 0);
	printf("|% 21.d|\n", 0);
	ft_printf("|% 21.d|\n", 0);
	printf("|% .d|\n", 0);
	ft_printf("|% .d|\n", 0);
	printf("|% 0.d|\n", 0);
	ft_printf("|% 0.d|\n", 0);
	printf("|% d|\n", 0);
	ft_printf("|% d|\n", 0);
	printf("|% -d|\n", 0);
	ft_printf("|% -d|\n", 0);
	printf("|%d|\n", 0);
	ft_printf("|%d|\n", 0);
	printf("|%.d|\n", 0);
	ft_printf("|%.d|\n", 0);
	printf("|%+.d|\n", 0);
	ft_printf("|%+.d|\n", 0);
	printf("|%-.d|\n", 0);
	ft_printf("|%-.d|\n", 0);
	printf("|% 0.0d|\n", 0);
	ft_printf("|% 0.0d|\n", 0);
	printf("|%0.0d|\n", 0);
	ft_printf("|%0.0d|\n", 0);
	printf("|%+0.0d|\n", 0);
	ft_printf("|%+0.0d|\n", 0);
	printf("|%+d|\n", 0);
	ft_printf("|%+d|\n", 0);
	printf("|%+.0d|\n", 0);
	ft_printf("|%+.0d|\n", 0);
	printf("|%- d|\n", 0);
	ft_printf("|%- d|\n", 0);
	printf("|%-+d|\n", 0);
	ft_printf("|%-+d|\n", 0);
//
	printf("\n\n");
	printf("\n\n");
	printf("\n\n");
	printf("\n\n");
//	printf("MINUS    How 1 works with printf...\n");
//	printf(">|%- 21d|\n", 1);
//	ft_printf(">|%- 21d|\n", 1);
//	printf(".|% -21d|\n", 1);
//	ft_printf(".|% -21d|\n", 1);
//	printf("a|% -21.d|\n", 1);
//	ft_printf("a|% -21.d|\n", 1);
//	printf("c|%- .d|\n", 1);
//	ft_printf("c|%- .d|\n", 1);
//	printf(" |%- 0.d|\n", 1);
//	ft_printf(" |%- 0.d|\n", 1);
//	printf(" |%- 010.d|\n", 1);
//	ft_printf(" |%- 010.d|\n", 1);
//	printf("0|%-010.d|\n", 1);
//	ft_printf("0|%-010.d|\n", 1);
//	printf("1|%-010.0d|\n", 1);
//	ft_printf("1|%-010.0d|\n", 1);
//	printf("n|%-10.d|\n", 1);
//	ft_printf("n|%-10.d|\n", 1);
//	printf("p|%- 010.4d|\n", 1);
//	ft_printf("p|%- 010.4d|\n", 1);
//	printf("q|%-010.4d|\n", 1);
//	ft_printf("q|%-010.4d|\n", 1);
//	printf("r|%-10.4d|\n", 1);
//	ft_printf("r|%-10.4d|\n", 1);
//	printf(" |%- .d|\n", 1);
//	ft_printf(" |%- .d|\n", 1);
//	printf(" |%- 1.d|\n", 1);
//	ft_printf(" |%- 1.d|\n", 1);
//	printf("d|%- d|\n", 1);
//	ft_printf("d|%- d|\n", 1);
//	printf("e|%-d|\n", 1);
//	ft_printf("e|%-d|\n", 1);
//	printf("f|%-.d|\n", 1);
//	ft_printf("f|%-.d|\n", 1);
//	printf("g|%-+.d|\n", 1);
//	ft_printf("g|%-+.d|\n", 1);
//	printf("h|%-.d|\n", 1);
//	ft_printf("h|%-.d|\n", 1);
//	printf("i|%- 0.0d|\n", 1);
//	ft_printf("i|%- 0.0d|\n", 1);
//	printf("j|%-0.0d|\n", 1);
//	ft_printf("j|%-0.0d|\n", 1);
//	printf("k|%-+0.0d|\n", 1);
//	ft_printf("k|%-+0.0d|\n", 1);
//	printf("z|%-+d|\n", 1);
//	ft_printf("z|%-+d|\n", 1);
//	printf("l|%-+.0d|\n", 1);
//	ft_printf("l|%-+.0d|\n", 1);
//	printf("m|%- d|\n", 1);
//	ft_printf("m|%- d|\n", 1);
//	printf("n|%-+d|\n", 1);
//	ft_printf("n|%-+d|\n", 1);
//
//	printf("\n\n");
//	printf("\n\n");
//	printf("MINUS     How -1 works with printf...\n");
//	printf("|%- 21d|\n", -1);
//	ft_printf("|%- 21d|\n", -1);
//	printf("|%0- 21d|\n", -1);
//	ft_printf("|%0- 21d|\n", -1);
//	printf("|% -21d|\n", -1);
//	ft_printf("|% -21d|\n", -1);
//	printf("|% -21.d|\n", -1);
//	ft_printf("|% -21.d|\n", -1);
//	printf("|%- 21.d|\n", -1);
//	ft_printf("|%- 21.d|\n", -1);
//	printf("|%- 21.2d|\n", -1);
//	ft_printf("|%- 21.2d|\n", -1);
//	printf("|%- 21.3d|\n", -1);
//	ft_printf("|%- 21.3d|\n", -1);
//	printf("|%- 21.3d|\n", -1);
//	ft_printf("|%- 21.3d|\n", -1);
//	printf("|%- 21.0d|\n", -1);
//	ft_printf("|%- 21.0d|\n", -1);
//	printf("|%- 21.0d|\n", -1);
//	ft_printf("|%- 21.0d|\n", -1);
//	printf("|%- .d|\n", -1);
//	ft_printf("|%- .d|\n", -1);
//	printf("|%- 0.d|\n", -1);
//	ft_printf("|%- 0.d|\n", -1);
//	printf("|%- d|\n", -1);
//	ft_printf("|%- d|\n", -1);
//	printf("|%-d|\n", -1);
//	ft_printf("|%-d|\n", -1);
//	printf("|%-.d|\n", -1);
//	ft_printf("|%-.d|\n", -1);
//	printf("|%-+.d|\n", -1);
//	ft_printf("|%-+.d|\n", -1);
//	printf("|%-.d|\n", -1);
//	ft_printf("|%-.d|\n", -1);
//	printf("|%- 0.0d|\n", -1);
//	ft_printf("|%- 0.0d|\n", -1);
//	printf("|%-0.0d|\n", -1);
//	ft_printf("|%-0.0d|\n", -1);
//	printf("|%-+0.0d|\n", -1);
//	ft_printf("|%-+d|\n", -1);
//	printf("|%-+d|\n", -1);
//	ft_printf("|%-+.0d|\n", -1);
//	printf("|%-+.0d|\n", -1);
//	ft_printf("|%- d|\n", -1);
//	printf("|%- d|\n", -1);
//	ft_printf("|%--+d|\n", -1);
//	printf("|%--+d|\n", -1);
////
//	printf("\n\n");
//	printf("\n\n");
//	printf("\n\n");
//	printf("\n\n");
//	printf("\n\n");
	printf("\n\n");
	printf("\n\n");
	printf("\n\n");
//
//
//
//
	printf("\n\n");
	printf("MINUS    How 0 works with printf...\n");
	printf("a|% 1.1d|\n", 0);
	ft_printf("a|% 1.1d|\n", 0);
	printf("a|% 1.0d|\n", 0);
	ft_printf("a|% 1.0d|\n", 0);
	printf("a|% .0d|\n", 0);
	ft_printf("a|% .0d|\n", 0);
	printf("a|% .1d|\n", 0);
	ft_printf("a|% .1d|\n", 0);
	printf("a|% 1.d|\n", 0);
	ft_printf("a|% 1.d|\n", 0);
	printf("a|% 1.1d|\n", 1);
	ft_printf("a|% 1.1d|\n", 1);
	printf("a|% .1d|\n", 1);
	ft_printf("a|% .1d|\n", 1);
	printf("a|% 1.d|\n", 1);
	ft_printf("a|% 1.d|\n", 1);
	printf(">|%- 21d|\n", 0);
	ft_printf(">|%- 21d|\n", 0);
	printf(".|% -21d|\n", 0);
	ft_printf(".|% -21d|\n", 0);
	printf("a|% -21.d|\n", 0);//
	ft_printf("a|% -21.d|\n", 0);//
	printf("0|% -21.0d|\n", 0);//
	ft_printf("0|% -21.0d|\n", 0);//
	printf("1|% -21.1d|\n", 0);//
	ft_printf("1|% -21.1d|\n", 0);//
	printf("c|%- .d|\n", 0);//
	ft_printf("c|%- .d|\n", 0);//
	printf("n|%-10.d|\n", 0);
	ft_printf("n|%-10.d|\n", 0);
	printf("r|%-10.4d|\n", 0);
	ft_printf("r|%-10.4d|\n", 0);
	printf(" |%- .d|\n", 0);//
	ft_printf(" |%- .d|\n", 0);//
	printf(" |%- 1.d|\n", 0);//
	ft_printf(" |%- 1.d|\n", 0);//
	printf("d|%- d|\n", 0);
	ft_printf("d|%- d|\n", 0);
	printf("e|%-d|\n", 0);
	ft_printf("e|%-d|\n", 0);
	printf("f|%-.d|\n", 0);
	ft_printf("f|%-.d|\n", 0);
	printf("g|%-+.d|\n", 0);
	ft_printf("g|%-+.d|\n", 0);
	printf("h|%-.d|\n", 0);
	ft_printf("h|%-.d|\n", 0);
//	printf("i|%- 0.0d|\n", 0);
//	ft_printf("i|%- 0.0d|\n", 0);
//	printf("j|%-0.0d|\n", 0);
//	ft_printf("j|%-0.0d|\n", 0);
//	printf("k|%-+0.0d|\n", 0);
//	ft_printf("k|%-+0.0d|\n", 0);
	printf("z|%-+d|\n", 0);
	ft_printf("z|%-+d|\n", 0);
	printf("l|%-+.0d|\n", 0);
	ft_printf("l|%-+.0d|\n", 0);
	printf("m|%- d|\n", 0);
	ft_printf("m|%- d|\n", 0);
	printf("n|%-+d|\n", 0);
	ft_printf("n|%-+d|\n", 0);

	printf("\n\n");
	printf("\n\n");
	printf("PLUS     How 0 works with printf...\n");
//	printf("a|%+ 21d|\n", 0);
//	ft_printf("a|%+ 21d|\n", 0);
//	printf("b|%0+ 21d|\n", 0);
//	ft_printf("b|%0+ 21d|\n", 0);
//	printf("b|%0+ 21d|\n", 10);
//	ft_printf("b|%0+ 21d|\n", 10);
//	printf("b|%0+ 21d|\n", -10);
//	ft_printf("b|%0+ 21d|\n", -10);
//	printf("c|% +21d|\n", 0);
//	ft_printf("c|% +21d|\n", 0);
//	printf("d|% +21.d|\n", 0);
//	ft_printf("d|% +21.d|\n", 0);
//	printf("e|%+ 21.d|\n", 0);
//	ft_printf("e|%+ 21.d|\n", 0);
//	printf("f|%+ 21.2d|\n", 0);
//	ft_printf("f|%+ 21.2d|\n", 0);
//	printf("g|%+ 21.3d|\n", 0);
//	ft_printf("g|%+ 21.3d|\n", 0);
//	printf("h|%+ 21.3d|\n", 0);
//	ft_printf("h|%+ 21.3d|\n", 0);
//	printf("i|%+ 21.0d|\n", 0);
//	ft_printf("i|%+ 21.0d|\n", 0);
	printf("i|% 21.1d|\n", 0);
	ft_printf("i|% 21.1d|\n", 0);
	printf("i|%+21.1d|\n", 0);
	ft_printf("i|%+21.1d|\n", 0);
	printf("i|%0+21.1d|\n", 0);
	ft_printf("i|%0+21.1d|\n", 0);
//	printf("j|%+ 21.0d|\n", 0);
//	ft_printf("j|%+ 21.0d|\n", 0);
//	printf("k|%+ .d|\n", 0);
//	ft_printf("k|%+ .d|\n", 0);
//	printf("l|%+ 0.d|\n", 0);
//	ft_printf("l|%+ 0.d|\n", 0);
//	printf("m|%+ d|\n", 0);
//	ft_printf("m|%+ d|\n", 0);
//	printf("n|%+d|\n", 0);
//	ft_printf("n|%+d|\n", 0);
//	printf("o|%+.d|\n", 0);
//	ft_printf("o|%+.d|\n", 0);
//	printf("p|%++.d|\n", 0);
//	ft_printf("p|%++.d|\n", 0);
//	printf("q|%+.d|\n", 0);
//	ft_printf("q|%+.d|\n", 0);
//	printf("r|%+ 0.0d|\n", 0);
//	ft_printf("r|%+ 0.0d|\n", 0);
//	printf("s|%+0.0d|\n", 0);
//	ft_printf("s|%+0.0d|\n", 0);
//	printf("t|%++0.0d|\n", 0);
//	ft_printf("t|%++0.0d|\n", 0);
//	printf("u|%++d|\n", 0);
//	ft_printf("u|%++d|\n", 0);
//	printf("v|%++.0d|\n", 0);
//	ft_printf("v|%++.0d|\n", 0);
//	printf("w|%+ d|\n", 0);
//	ft_printf("w|%+ d|\n", 0);
////
//	printf("\n\n");
//	printf("\n\n");
//	printf("\n\n");
//	printf("\n\n");
	printf("\n\n");
	printf("\n\n");
	printf("\n\n");
	printf("\n\n");
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
