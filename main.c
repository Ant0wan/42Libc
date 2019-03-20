/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 17:27:50 by abarthel          #+#    #+#             */
/*   Updated: 2019/03/20 17:35:03 by abarthel         ###   ########.fr       */
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

//	ret1 = printf("%d\n", L"😄");
//	printf("%d\n", ret1);
//	printf("\n\n");
//	ret2 = printf("%d\n", L"😄");
//	printf("%d\n", ret2);
//
//		ret1 = printf("%d\n", L'😄');
//	printf("%d\n", ret1);
//	printf("\n\n");
//	ret2 = printf("%d\n", L'😄');
//	printf("%d\n", ret2);
//	printf("\n\n");
//	ret1 = printf("%");
//	printf("%d\n", ret1);
//	ret2 = printf("%");
//	printf("%d\n", ret2);
//	printf("\n\n");
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
	ret1 = printf("Hello %ls!%s%s", L"\x160", "Damn", "okay");
	printf("%d\n", ret1);
	ret2 = ft_printf("Hello %ls!%s%s", L"\x160", "Damn", "okay"); // 352 it checks the overflow before putting char in wchar
	printf("%d\n", ret2);
	printf("\n\n");
	ret1 = printf("Hello %ls!%s%s", L"\x00F ¼ Ç", "Damn", "okay");
	printf("%d\n", ret1);
	ret2 = ft_printf("Hello %ls!%s%s", L"\x00F ¼ Ç", "Damn", "okay"); // 256
	printf("%d\n", ret2);
	printf("\n\n");
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
	ret1 = printf("2Hellowidth %12ls!%-1s%10s", L"\x0FF", "Damn", "okay"); // 255
	printf("%d\n", ret1);
	ret2 = ft_printf("2Hellowidth %12ls!%-1s%10s", L"\x0FF", "Damn", "okay");
	printf("%d\n", ret2);
	printf("\n\n");
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
	ret1 = printf("3All ok Hello %ls!%ls%s", L"~Æ", L"DamÂnijefihwfiwhf~", "Ookay");
	printf("%d\n", ret1);
	ret2 = ft_printf("3All ok Hello %ls!%ls%s", L"~Æ", L"DamÂnijefihwfiwhf~", "Ookay");
	printf("%d\n", ret2);
	printf("\n\n");
	ret1 = printf("4Ko on sec arg Hello %ls! %ls%s", L"~", L"Damn\x100ijefihwfiwhf~", "okay");
	printf("%d\n", ret1);
	ret2 = ft_printf("4Ko on sec arg Hello %ls! %ls%s", L"~", L"Damn\x100ijefihwfiwhf~", "okay");
	printf("%d\n", ret2);
	printf("\n\n");
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
//	ret1 = printf("124%2147483646d|", 1234);
//	printf("%d\n", ret1);
//	ret2 = ft_printf("224%2147483646d|", 1234);
//	printf("%d\n", ret2);
//	printf("\n\n");
//	ret1 = printf(" %2147483647d", 12);
//	printf("%d\n", ret1);
//	ret2 = ft_printf(" %2147483647d", 12);
//	printf("%d\n", ret2);
//	printf("\n\n");
//	ret1 = printf("%.2147483649ls1|", L" ❤ ☀ ☆ ☂ ☻ ♞ ☯ ☭ ☢ € → ");
//	printf("%d\n", ret1);
//	ret2 = ft_printf("%.2147483649ls2|", L" ❤ ☀ ☆ ☂ ☻ ♞ ☯ ☭ ☢ € → ");
//	printf("%d\n", ret2);
//	printf("\n\n");
////	INT MAX + 1 =  2147483648
////	INT_MAX -1 || INT_MAX
//	ret1 = printf("w %*s1|", INT_MAX - 1,  " ❤ ☀ ☆ ☂ ☻ ♞ ☯ ☭ ☢ € → ");
//	printf("%d\n", ret1);
//	ret2 = ft_printf("w %*s2|", INT_MAX - 1, " ❤ ☀ ☆ ☂ ☻ ♞ ☯ ☭ ☢ € → ");
//	printf("%d\n", ret2);
//	printf("\n\n");
//	ret1 = printf("w %2147483647s1|", " ❤ ☀ ☆ ☂ ☻ ♞ ☯ ☭ ☢ € → ");
//	printf("%d\n", ret1);
//	ret2 = ft_printf("w %2147483647s2|", " ❤ ☀ ☆ ☂ ☻ ♞ ☯ ☭ ☢ € → ");
//	printf("%d\n", ret2);
//	printf("\n\n");
//	ret1 = printf("w %2147483646ls1|", L" ❤ ☀ ☆ ☂ ☻ ♞ ☯ ☭ ☢ € → ");
//	printf("%d\n", ret1);
//	ret2 = ft_printf("w %2147483646ls2|", L" ❤ ☀ ☆ ☂ ☻ ♞ ☯ ☭ ☢ € → ");
//	printf("%d\n", ret2);
//	printf("\n\n");
//	ret1 = printf("precision %.2147483648ls1|", L" ❤ ☀ ☆ ☂ ☻ ♞ ☯ ☭ ☢ € → ");
//	printf("%d\n", ret1);
//	ret2 = ft_printf("precision %.2147483648ls2|", L" ❤ ☀ ☆ ☂ ☻ ♞ ☯ ☭ ☢ € → ");
//	printf("%d\n", ret2);
//	printf("\n\n");
//	ret1 = printf("precision %.2147483649ls1|", L" ❤ ☀ ☆ ☂ ☻ ♞ ☯ ☭ ☢ € → ");
//	printf("%d\n", ret1);
//	ret2 = ft_printf("precision %.2147483649ls2|", L" ❤ ☀ ☆ ☂ ☻ ♞ ☯ ☭ ☢ € → ");
//	printf("%d\n", ret2);
//	printf("\n\n");
//	ret1 = printf("width %2147483649ls1|", L" ❤ ☀ ☆ ☂ ☻ ♞ ☯ ☭ ☢ € → ");
//	printf("%d\n", ret1);
//	ret2 = ft_printf("width %2147483649ls2|", L" ❤ ☀ ☆ ☂ ☻ ♞ ☯ ☭ ☢ € → ");
//	printf("%d\n", ret2);
//	printf("\n\n");
//	ret1 = printf("%4294967298S1|", L" ❤ ☀ ☆ ☂ ☻ ♞ ☯ ☭ ☢ € → ");
//	printf("%d\n", ret1);
//	ret2 = ft_printf("%4294967298S2|", L" ❤ ☀ ☆ ☂ ☻ ♞ ☯ ☭ ☢ € → ");
//	printf("%d\n", ret2);
//	printf("\n\n");
//	ret1 = printf("|%S|", L">1< ❤ ☀ ☆ ☂ ☻ ♞ ☯ ☭ ☢ € → ");
//	printf("%d\n", ret1);
//	ret2 = ft_printf("|%S|", L">1< ❤ ☀ ☆ ☂ ☻ ♞ ☯ ☭ ☢ € → ");
//	printf("%d\n", ret2);
//	printf("\n\n");
//	ret1 = printf("|%2140ls|", L" ❤ ☀ ☆ ☂ ☻ ♞ ☯ ☭ ☢ € → ");
//	printf("%d\n", ret1);
//	ret2 = ft_printf("|%2140ls|", L" ❤ ☀ ☆ ☂ ☻ ♞ ☯ ☭ ☢ € → ");
//	printf("%d\n", ret2);
//	printf("\n\n");
//	ret1 = printf(".214|%.2140ls|", L" ❤ ☀ ☆ ☂ ☻ ♞ ☯ ☭ ☢ € → ");
//	printf("%d\n", ret1);
//	ret2 = ft_printf(".214|%.2140ls|", L" ❤ ☀ ☆ ☂ ☻ ♞ ☯ ☭ ☢ € → ");
//	printf("%d\n", ret2);
//	printf("\n\n");
//	ret1 = printf("|%214S|", L" ❤ ☀ ☆ ☂ ☻ ♞ ☯ ☭ ☢ € → ");
//	printf("%d\n", ret1);
//	ret2 = ft_printf("|%214S|", L" ❤ ☀ ☆ ☂ ☻ ♞ ☯ ☭ ☢ € → ");
//	printf("%d\n", ret2);
//	printf("\n\n");
//	ret1 = printf("|%S|", L" ❤ ☀ ☆ ☂ ☻ ♞ ☯ ☭ ☢ € → ");
//	printf("%d\n", ret1);
//	ret2 = ft_printf("|%S|", L" ❤ ☀ ☆ ☂ ☻ ♞ ☯ ☭ ☢ € → ");
//	printf("%d\n", ret2);
//	printf("\n\n");
// "Hello %ls!i%ls%ls", L"电脑是新的", L",电脑死机了。", L"电脑坏了。😢 "
//	ret1 = printf("Hello %ls", L"电脑是新的");
//	printf("%d\n", ret1);
//	ret2 = printf("Hello %ls", L"电脑是新的");
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
	ret1 = printf("%.11ls", L"电脑坏了。😢 ");
//	ret1 = printf("%ls", L"电脑坏了");
	printf("%d\n", ret1);
	ret2 = ft_printf("%.11ls", L"电脑坏了。😢 ");
//	ret2 = printf("%ls", L"电脑坏了");
	printf("%d\n", ret2);
	printf("\n\n");

//	ret1 = printf("%S", L"😢 ");
//	printf("%d\n", ret1);
//	ret2 = ft_printf("%S", L"😢 ");
//	printf("%d\n", ret2);
//	printf("\n\n");
//
//	ret1 = printf("d|%.3ls|", L"😢 ");
//	printf("%d\n", ret1);
//	ret2 = ft_printf("d|%.3ls|", L"😢 ");
//	printf("%d\n", ret2);
//	printf("\n\n");
//
//	ret1 = printf("c|%.10ls|", L"😢 😢");
//	printf("%d\n", ret1);
//	ret2 = ft_printf("c|%.10ls|", L"😢 😢");
//	printf("%d\n", ret2);
//	printf("\n\n");
//
//	ret1 = printf("c|%ls|", L"😢 😢");
//	printf("%d\n", ret1);
//	ret2 = ft_printf("c|%ls|", L"😢 😢");
//	printf("%d\n", ret2);
//	printf("\n\n");
//
//	ret1 = printf("b|%10.3ls|", L"😢 ");
//	printf("%d\n", ret1);
//	ret2 = ft_printf("b|%10.3ls|", L"😢 ");
//	printf("%d\n", ret2);
//	printf("\n\n");
//
//	ret1 = printf("a|%ls|", L"😢 ");
//	printf("%d\n", ret1);
//	ret2 = ft_printf("a|%ls|", L"😢 ");
//	printf("%d\n", ret2);
//	printf("\n\n");
//
//	ret1 = printf("b|%ls|", L"hello 😢 ok");
//	printf("%d\n", ret1);
//	ret2 = ft_printf("b|%ls|", L"hello 😢 ok");
//	printf("%d\n", ret2);
//	printf("\n\n");
//
//	ret1 = printf("b|%ls|", L"hello ok");
//	printf("%d\n", ret1);
//	ret2 = ft_printf("b|%ls|", L"hello ok");
//	printf("%d\n", ret2);
//	printf("\n\n");
//
//	ret1 = printf("c|%ls|", L"😢 😢");
//	printf("%d\n", ret1);
//	ret2 = ft_printf("c|%ls|", L"😢 😢");
//	printf("%d\n", ret2);
//	printf("\n\n");
//
//	ret1 = printf("c|%40.5ls|", L"😢 😢");
//	printf("%d\n", ret1);
//	ret2 = ft_printf("c|%40.5ls|", L"😢 😢");
//	printf("%d\n", ret2);
//	printf("\n\n");
//
//	ret1 = printf("c|%.6ls|", L"😢 😢");
//	printf("%d\n", ret1);
//	ret2 = ft_printf("c|%.6ls|", L"😢 😢");
//	printf("%d\n", ret2);
//	printf("\n\n");
//
//	ret1 = printf("%.11ls", L"电脑坏了。");
//	printf("%d\n", ret1);
//	ret2 = ft_printf("%.11ls", L"电脑坏了。");
//	printf("%d\n", ret2);
//	printf("\n\n");
//
//	ret1 = printf("%.0ls", L"电脑坏了。");
//	printf("%d\n", ret1);
//	ret2 = ft_printf("%.0ls", L"电脑坏了。");
//	printf("%d\n", ret2);
//	printf("\n\n");
//
//	ret1 = printf("%.3ls", L"电");
//	printf("%d\n", ret1);
//	ret2 = ft_printf("%.3ls", L"电");
//	printf("%d\n", ret2);
//	printf("\n\n");
//
//	ret1 = printf("%.2ls", L"电");
//	printf("%d\n", ret1);
//	ret2 = ft_printf("%.2ls", L"电");
//	printf("%d\n", ret2);
//	printf("\n\n");
//
//	ret1 = printf("%.1ls", L"电");
//	printf("%d\n", ret1);
//	ret2 = ft_printf("%.1ls", L"电");
//	printf("%d\n", ret2);
//	printf("\n\n");
//
//	ret1 = printf("%.4ls", L"电");
//	printf("%d\n", ret1);
//	ret2 = ft_printf("%.4ls", L"电");
//	printf("%d\n", ret2);
//	printf("\n\n");
//
//	ret1 = printf("%4.1ls", L"电");
//	printf("%d\n", ret1);
//	ret2 = ft_printf("%4.1ls", L"电");
//	printf("%d\n", ret2);
//	printf("\n\n");
//
//	ret1 = printf("%3.1ls", L"电");
//	printf("%d\n", ret1);
//	ret2 = ft_printf("%3.1ls", L"电");
//	printf("%d\n", ret2);
//	printf("\n\n");
//
//	ret1 = printf("%4.3ls", L"电");
//	printf("%d\n", ret1);
//	ret2 = ft_printf("%4.3ls", L"电");
//	printf("%d\n", ret2);
//	printf("\n\n");
//
//	ret1 = printf("%3.4ls", L"电");
//	printf("%d\n", ret1);
//	ret2 = ft_printf("%3.4ls", L"电");
//	printf("%d\n", ret2);
//	printf("\n\n");
//
//	ret1 = printf("%3.3ls", L"电");
//	printf("%d\n", ret1);
//	ret2 = ft_printf("%3.3ls", L"电");
//	printf("%d\n", ret2);
//	printf("\n\n");
//
//	ret1 = printf("%.0ls", L"电");
//	printf("%d\n", ret1);
//	ret2 = ft_printf("%.0ls", L"电");
//	printf("%d\n", ret2);
//	printf("\n\n");
//
//	ret1 = printf("%2.0ls", L"电");
//	printf("%d\n", ret1);
//	ret2 = ft_printf("%2.0ls", L"电");
//	printf("%d\n", ret2);
//	printf("\n\n");
//
//	ret1 = printf("%1ls", L"电");
//	printf("%d\n", ret1);
//	ret2 = ft_printf("%1ls", L"电");
//	printf("%d\n", ret2);
//	printf("\n\n");

//	ret1 = printf("%s", "😢 ");
//	printf("%d\n", ret1);
//	ret2 = ft_printf("%s", "😢 ");
//	printf("%d\n", ret2);
//	printf("\n\n");
	
	
//	ret1 = printf("%-10.2s%s%s", "Worli", "Hello ", "!");
//	printf("%i\n", ret1);
//	ret2 = ft_printf("%-10.2s%s%s", "Worli", "Hello ", "!");
//	printf("%i\n", ret2);
//	printf("\n\n");
//
//	ret1 = printf("%10.2s%s%s", "Worli", "Hello ", "!");
//	printf("%i\n", ret1);
//	ret2 = ft_printf("%10.2s%s%s", "Worli", "Hello ", "!");
//	printf("%i\n", ret2);
//	printf("\n\n");
//
//	ret1 = printf("a|%-10.2s|", "Worli");
//	printf("%i\n", ret1);
//	ret2 = ft_printf("a|%-10.2s|", "Worli");
//	printf("%i\n", ret2);
//	printf("\n\n");
//
//	ret1 = printf("p0 |%-10.0s|", "Worli");
//	printf("%i\n", ret1);
//	ret2 = ft_printf("p0 |%-10.0s|", "Worli");
//	printf("%i\n", ret2);
//	printf("\n\n");
//
//	ret1 = printf("p |%-10.s|", "Worli");
//	printf("%i\n", ret1);
//	ret2 = ft_printf("p |%-10.s|", "Worli");
//	printf("%i\n", ret2);
//	printf("\n\n");
//
//	ret1 = printf("10.2|%10.2s|", "Worli");
//	printf("%i\n", ret1);
//	ret2 = ft_printf("10.2|%10.2s|", "Worli");
//	printf("%i\n", ret2);
//	printf("\n\n");
//
//	ret1 = printf("a|%2.20s|", "Worli");
//	printf("%i\n", ret1);
//	ret2 = ft_printf("a|%2.20s|", "Worli");
//	printf("%i\n", ret2);
//	printf("\n\n");
//
//	ret1 = printf("a|%-10.2s|", "Worli");
//	printf("%i\n", ret1);
//	ret2 = ft_printf("a|%-10.2s|", "Worli");
//	printf("%i\n", ret2);
//	printf("\n\n");
//
//	ret1 = printf("a|%-2.20s|", "Worli");
//	printf("%i\n", ret1);
//	ret2 = ft_printf("a|%-2.20s|", "Worli");
//	printf("%i\n", ret2);
//	printf("\n\n");
//
//	ret1 = printf("q|%2.2s|", "World");
//	printf("%i\n", ret1);
//	ret2 = ft_printf("q|%2.2s|", "World");
//	printf("%i\n", ret2);
//	printf("\n\n");
//
//	ret1 = printf("q|%20.6s|", "World");
//	printf("%i\n", ret1);
//	ret2 = ft_printf("q|%20.6s|", "World");
//	printf("%i\n", ret2);
//	printf("\n\n");
//
//	ret1 = printf("q|%.s|", "World");
//	printf("%i\n", ret1);
//	ret2 = ft_printf("q|%.s|", "World");
//	printf("%i\n", ret2);
//	printf("\n\n");
	return (0);
}
