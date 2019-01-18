/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 16:48:11 by abarthel          #+#    #+#             */
/*   Updated: 2019/01/18 14:46:20 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>


void courses(char* arg0, ...) 
{
	va_list	ap;
	void *str;

	va_start(ap, arg0);

	printf("%s\n", arg0);
	while ((str = va_arg(ap, char*))) 
		printf("%s\n", str);

	va_end(ap);

}

int main(void)
{
	//	courses("List is made of:", "oeufs", "chocolat", "sucre", "farine", NULL);

	/* FLAGS */
	int num = 42;
	printf("test1 %#x\n", 42);
	printf("test2 %-10d \n", num);
	printf("test3 %010d \n", num);
	printf("test4 %-#10x \n", num);  
	printf("test5 %#x \n", num);	

	/* FIELD WIDTH*/
	char *pointer = "little";
	//printf("test fail%4 %4d%10s\n", num, pointer);
	printf("test6 %4d%10s\n", num, pointer);
	printf("test7 %1d%1s\n", num, pointer);
	printf("test8 %*d\n", 42, num);
	
	/* PRECISION */
	double dd = 42.123456789;
	printf("test9 %*.2f\n", 42, dd);
	printf("test10 %8.2f\n", dd);
	printf("test11 %.2f\n", dd);
	printf("test12 %.42f\n", dd);
	printf("test13 %.f\n", dd);
	printf("test14 %.*f\n", 8, dd);
	printf("test14 %*.*f\n", 100, 42, dd);

	

	return 0;
}
