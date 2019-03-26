/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 17:27:50 by abarthel          #+#    #+#             */
/*   Updated: 2019/03/26 10:47:26 by abarthel         ###   ########.fr       */
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

//	ret1 = printf("a|%-.o|", NULL);
//	printf("%d\n", ret1);
//	ret2 = ft_printf("a|%-.o|", NULL);
//	printf("%d\n", ret2);
//	ret1 = printf("a|%-#.o|", NULL);
//	printf("%d\n", ret1);
//	ret2 = ft_printf("a|%-#.o|", NULL);
//	printf("%d\n", ret2);
//	printf("\n\n");
////
//	ret1 = printf("b|%- 0.0o|", LLONG_MAX);
//	printf("%d\n", ret1);
//	ret2 = ft_printf("b|%- 0.0o|", LLONG_MAX);
//	printf("%d\n", ret2);
//	ret1 = printf("b|%-# 0.0o|", LLONG_MAX);
//	printf("%d\n", ret1);
//	ret2 = ft_printf("b|%-# 0.0o|", LLONG_MAX);
//	printf("%d\n", ret2);
//	ret1 = printf("b|%- 0.0o|", LLONG_MAX);
//	printf("%d\n", ret1);
//	ret2 = ft_printf("b|%- 0.0o|", LLONG_MAX);
//	printf("%d\n", ret2);
//	printf("\n\n");
//
//	ret1 = printf("c|%-.50o|", LLONG_MAX);
//	printf("%d\n", ret1);
//	ret2 = ft_printf("c|%-.50o|", LLONG_MAX);
//	printf("%d\n", ret2);
//	ret1 = printf("c|%-#40.0o|", LLONG_MAX);
//	printf("%d\n", ret1);
//	ret2 = ft_printf("c|%-#40.0o|", LLONG_MAX);
//	printf("%d\n", ret2);
//	printf("\n\n");
//	
//	ret1 = printf("5|%-.5o|", LLONG_MAX);
//	printf("%d\n", ret1);
//	ret2 = ft_printf("5|%-.5o|", LLONG_MAX);
//	printf("%d\n", ret2);
//	ret1 = printf("5|%-#.5o|", LLONG_MAX);
//	printf("%d\n", ret1);
//	ret2 = ft_printf("5|%-#.5o|", LLONG_MAX);
//	printf("%d\n", ret2);
//	printf("\n\n");
//
//	ret1 = printf("d|%-o|", NULL);
//	printf("%d\n", ret1);
//	ret2 = ft_printf("d|%-o|", NULL);
//	printf("%d\n", ret2);
//	ret1 = printf("d|%-#2o|", NULL);
//	printf("%d\n", ret1);
//	ret2 = ft_printf("d|%-#2o|", NULL);
//	printf("%d\n", ret2);
//	printf("\n\n");
//	
//	ret1 = printf("e|%-10.8o|", LLONG_MAX);
//	printf("%d\n", ret1);
//	ret2 = ft_printf("e|%-10.8o|", LLONG_MAX);
//	printf("%d\n", ret2);
//	ret1 = printf("e|%-#10.8o|", LLONG_MAX);
//	printf("%d\n", ret1);
//	ret2 = ft_printf("e|%-#10.8o|", LLONG_MAX);
//	printf("%d\n", ret2);
//	printf("\n\n");
//
//	ret1 = printf("e.|%-#10.9o|", NULL);
//	printf("%d\n", ret1);
//	ret2 = ft_printf("e.|%-#10.9o|", NULL);
//	printf("%d\n", ret2);
//	printf("\n\n");
//
//	ret1 = printf("f.|%-#10.9o|", LLONG_MAX);
//	printf("%d\n", ret1);
//	ret2 = ft_printf("f.|%-#10.9o|", LLONG_MAX);
//	printf("%d\n", ret2);
//	ret1 = printf("f.|%-#10.8o|", LLONG_MAX);
//	printf("%d\n", ret1);
//	ret2 = ft_printf("f.|%-#10.8o|", LLONG_MAX);
//	printf("%d\n", ret2);
//	ret1 = printf("f.|%-#10.7o|", LLONG_MAX);
//	printf("%d\n", ret1);
//	ret2 = ft_printf("f.|%-#10.7o|", LLONG_MAX);
//	printf("%d\n", ret2);
//	ret1 = printf("f.|%-#10.10o|", LLONG_MAX);
//	printf("%d\n", ret1);
//	ret2 = ft_printf("f.|%-#10.10o|", LLONG_MAX);
//	printf("%d\n", ret2);
//	ret1 = printf("f.|%-10.9o|", LLONG_MAX);
//	printf("%d\n", ret1);
//	ret2 = ft_printf("f.|%-10.9o|", LLONG_MAX);
//	printf("%d\n", ret2);
//	printf("\n\n");
//
//	ret1 = printf("f|%-10.9o|", LLONG_MAX);
//	printf("%d\n", ret1);
//	ret2 = ft_printf("f|%-10.9o|", LLONG_MAX);
//	printf("%d\n", ret2);
//	ret1 = printf("f|%-#10.9o|", LLONG_MAX);
//	printf("%d\n", ret1);
//	ret2 = ft_printf("f|%-#10.9o|", LLONG_MAX);
//	printf("%d\n", ret2);
//	printf("\n\n");
//
//	ret1 = printf(">|%-10.10ho|", LLONG_MAX);
//	printf("%d\n", ret1);
//	ret2 = ft_printf(">|%-10.10ho|", LLONG_MAX);
//	printf("%d\n", ret2);
//	ret1 = printf(">|%-#10.10ho|", LLONG_MAX);
//	printf("%d\n", ret1);
//	ret2 = ft_printf(">|%-#10.10ho|", LLONG_MAX);
//	printf("%d\n", ret2);
//	printf("\n\n");
//
//	ret1 = printf("-|%-#14.10hho|", LLONG_MAX);
//	printf("%d\n", ret1);
//	ret2 = ft_printf("-|%-#14.10hho|", LLONG_MAX);
//	printf("%d\n", ret2);
//	ret1 = printf("-|%-#14.10ho|", LLONG_MAX);
//	printf("%d\n", ret1);
//	ret2 = ft_printf("-|%-#14.10ho|", LLONG_MAX);
//	printf("%d\n", ret2);
//	ret1 = printf("-|%-#14.10llo|", 10);
//	printf("%d\n", ret1);
//	ret2 = ft_printf("-|%-#14.10llo|", 10);
//	printf("%d\n", ret2);
//	ret1 = printf("-|%-#14.10llo|", 111111111);
//	printf("%d\n", ret1);
//	ret2 = ft_printf("-|%-#14.10llo|", 111111111);
//	printf("%d\n", ret2);
//	printf("\n\n");
//	ret1 = printf("-|%-#14.11llo|", 1111111111);
//	printf("%d\n", ret1);
//	ret2 = ft_printf("-|%-#14.11llo|", 1111111111);
//	printf("%d\n", ret2);
//	ret1 = printf("-|%-#14.12llo|", 1111111111);
//	printf("%d\n", ret1);
//	ret2 = ft_printf("-|%-#14.12llo|", 1111111111);
//	printf("%d\n", ret2);
//	ret1 = printf("-|%-+#14.12llo|", 1111111111);
//	printf("%d\n", ret1);
//	ret2 = ft_printf("-|%-+#14.12llo|", 1111111111);
//	printf("%d\n", ret2);
//	ret1 = printf("-|%-+#14.10llo|", 91111111111);
//	printf("%d\n", ret1);
//	ret2 = ft_printf("-|%-+#14.10llo|", 91111111111);
//	printf("%d\n", ret2);
//	ret1 = printf("-|%-#14.00100llo|", 91111111111);
//	printf("%d\n", ret1);
//	ret2 = ft_printf("-|%-#14.00100llo|", 91111111111);
//	printf("%d\n", ret2);
//	printf("\n\n");
//
//	ret1 = printf("z|%-#14.10zo|", LLONG_MAX);
//	printf("%d\n", ret1);
//	ret2 = ft_printf("z|%-#14.10zo|", LLONG_MAX);
//	printf("%d\n", ret2);
//	ret1 = printf("z|%-#14.10to|", LLONG_MAX);
//	printf("%d\n", ret1);
//	ret2 = ft_printf("z|%-#14.10to|", LLONG_MAX);
//	printf("%d\n", ret2);
//	printf("\n\n");

	
	ret1 = printf("a|%.o|", NULL);
	printf("%d\n", ret1);
	ret2 = ft_printf("a|%.o|", NULL);
	printf("%d\n", ret2);
	ret1 = printf("a|%#.o|", NULL);
	printf("%d\n", ret1);
	ret2 = ft_printf("a|%#.o|", NULL);
	printf("%d\n", ret2);
	printf("\n\n");
//
	ret1 = printf("b|% 0.0o|", LLONG_MAX);
	printf("%d\n", ret1);
	ret2 = ft_printf("b|% 0.0o|", LLONG_MAX);
	printf("%d\n", ret2);
	ret1 = printf("b|%# 0.0o|", LLONG_MAX);
	printf("%d\n", ret1);
	ret2 = ft_printf("b|%# 0.0o|", LLONG_MAX);
	printf("%d\n", ret2);
	ret1 = printf("b|% 0.0o|", LLONG_MAX);
	printf("%d\n", ret1);
	ret2 = ft_printf("b|% 0.0o|", LLONG_MAX);
	printf("%d\n", ret2);
	printf("\n\n");

	ret1 = printf("c|%.50o|", LLONG_MAX);
	printf("%d\n", ret1);
	ret2 = ft_printf("c|%.50o|", LLONG_MAX);
	printf("%d\n", ret2);
	ret1 = printf("c|%#40.0o|", LLONG_MAX);
	printf("%d\n", ret1);
	ret2 = ft_printf("c|%#40.0o|", LLONG_MAX);
	printf("%d\n", ret2);
	printf("\n\n");
	
	ret1 = printf("5|%.5o|", LLONG_MAX);
	printf("%d\n", ret1);
	ret2 = ft_printf("5|%.5o|", LLONG_MAX);
	printf("%d\n", ret2);
	ret1 = printf("5|%#.5o|", LLONG_MAX);
	printf("%d\n", ret1);
	ret2 = ft_printf("5|%#.5o|", LLONG_MAX);
	printf("%d\n", ret2);
	printf("\n\n");

	ret1 = printf("d|%o|", NULL);
	printf("%d\n", ret1);
	ret2 = ft_printf("d|%o|", NULL);
	printf("%d\n", ret2);
	ret1 = printf("d|%#2o|", NULL);
	printf("%d\n", ret1);
	ret2 = ft_printf("d|%#2o|", NULL);
	printf("%d\n", ret2);
	printf("\n\n");
	
	ret1 = printf("e|%10.8o|", LLONG_MAX);
	printf("%d\n", ret1);
	ret2 = ft_printf("e|%10.8o|", LLONG_MAX);
	printf("%d\n", ret2);
	ret1 = printf("e|%#10.8o|", LLONG_MAX);
	printf("%d\n", ret1);
	ret2 = ft_printf("e|%#10.8o|", LLONG_MAX);
	printf("%d\n", ret2);
	printf("\n\n");

	ret1 = printf("e.|%#10.9o|", NULL);
	printf("%d\n", ret1);
	ret2 = ft_printf("e.|%#10.9o|", NULL);
	printf("%d\n", ret2);
	printf("\n\n");

	ret1 = printf("f.|%#10.9o|", LLONG_MAX);
	printf("%d\n", ret1);
	ret2 = ft_printf("f.|%#10.9o|", LLONG_MAX);
	printf("%d\n", ret2);
	ret1 = printf("f.|%#10.8o|", LLONG_MAX);
	printf("%d\n", ret1);
	ret2 = ft_printf("f.|%#10.8o|", LLONG_MAX);
	printf("%d\n", ret2);
	ret1 = printf("f.|%#10.7o|", LLONG_MAX);
	printf("%d\n", ret1);
	ret2 = ft_printf("f.|%#10.7o|", LLONG_MAX);
	printf("%d\n", ret2);
	ret1 = printf("f.|%#10.10o|", LLONG_MAX);
	printf("%d\n", ret1);
	ret2 = ft_printf("f.|%#10.10o|", LLONG_MAX);
	printf("%d\n", ret2);
	ret1 = printf("f.|%10.9o|", LLONG_MAX);
	printf("%d\n", ret1);
	ret2 = ft_printf("f.|%10.9o|", LLONG_MAX);
	printf("%d\n", ret2);
	printf("\n\n");

	ret1 = printf("f|%10.9o|", LLONG_MAX);
	printf("%d\n", ret1);
	ret2 = ft_printf("f|%10.9o|", LLONG_MAX);
	printf("%d\n", ret2);
	ret1 = printf("f|%#10.9o|", LLONG_MAX);
	printf("%d\n", ret1);
	ret2 = ft_printf("f|%#10.9o|", LLONG_MAX);
	printf("%d\n", ret2);
	printf("\n\n");

	ret1 = printf(">|%10.10ho|", LLONG_MAX);
	printf("%d\n", ret1);
	ret2 = ft_printf(">|%10.10ho|", LLONG_MAX);
	printf("%d\n", ret2);
	ret1 = printf(">|%#10.10ho|", LLONG_MAX);
	printf("%d\n", ret1);
	ret2 = ft_printf(">|%#10.10ho|", LLONG_MAX);
	printf("%d\n", ret2);
	printf("\n\n");

	ret1 = printf("z|%#14.4hho|", LLONG_MAX);
	printf("%d\n", ret1);
	ret2 = ft_printf("z|%#14.4hho|", LLONG_MAX);
	printf("%d\n", ret2);
	ret1 = printf("z|%#14.10ho|", LLONG_MAX);
	printf("%d\n", ret1);
	ret2 = ft_printf("z|%#14.10ho|", LLONG_MAX);
	printf("%d\n", ret2);
	printf("\n\n");

	ret1 = printf("z|% #14.10zo|", LLONG_MAX);
	printf("%d\n", ret1);
	ret2 = ft_printf("z|% #14.10zo|", LLONG_MAX);
	printf("%d\n", ret2);
	ret1 = printf("z|% #14.10to|", LLONG_MAX);
	printf("%d\n", ret1);
	ret2 = ft_printf("z|% #14.10to|", LLONG_MAX);
	printf("%d\n", ret2);
	printf("\n\n");
	return (0);
}
