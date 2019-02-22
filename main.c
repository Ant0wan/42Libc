/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 17:27:50 by abarthel          #+#    #+#             */
/*   Updated: 2019/02/22 14:05:38 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dispatcher.h"
#include "ft_printf.h"
#include "prs_struct.h"
#include <stdio.h>
#include <locale.h>
#include <limits.h>

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

//	printf(" LENGTH t_ap: %lu\n", sizeof(t_ap));
//	printf(" LENGTH t_ret: %lu\n", sizeof(t_ret));
//	printf(" LENGTH t_modifier: %lu\n", sizeof(t_modifier));
//	printf(" LENGTH t_flags: %lu\n", sizeof(t_flags));
	
//	t_flags	flags;

//	flags.hash = 1;
// 	printf("\n\n%d\n", flags.hash);
	
//	ft_printf("%B", L'😄');
//	ft_printf("%D", UINT_MAX * -1); // OK
//	ft_printf("%O", UINT_MAX * 2); // OK
	
//	printf("\n\n %*.*d \n\n",24,55, 10);
	
//	printf("Hello%nj%sijoj%n", &o,"Hello", &k);
// 	printf("\n\n%d\n", o);
 	printf("%2$d\n", 42);
	ft_printf(" #eH!&\(+-,/ ell*o# world * \n%0*#1.*d %0**#.*d %d\n", 5454, 42, 21, 1);
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
//	printf("4567 |%-10]5d| plip\n", 12);
//	printf("4567 |%10]5d| plip\n", 12);
//	printf("|%10.5d|\n", -12);
//	printf("|%10d|\n", -12);
//	printf("|%010d|\n", -12); 
//	printf("|%-10.5d|\n", -12);
//	printf("|%-010.5d|\n", -12);
	return (0);
}
