/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 16:48:11 by abarthel          #+#    #+#             */
/*   Updated: 2019/01/18 15:24:35 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

 // IEEE Standard for Floating-Point Arithmetic (IEEE 754)
// https://www.lix.polytechnique.fr/~liberti/public/computing/prog/c/C/FUNCTIONS/format.html#id //

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
	printf("test 1 %#x\n", 42);
	printf("test 2 %-10d \n", num);
	printf("test 3 %010d \n", num);
	printf("test 4 %0d \n", num);
	printf("test 5 %+10d \n", num);
	printf("test 6 %0+10d \n", num);
	printf("test 7 %-10d \n", num * (-1));
	printf("test 8 %-10d \n", num * (-1));
	printf("test 9 %+10d \n", num * (-1));
	printf("test10 %0+10d \n", num * (-1));
	printf("test11 %010d \n", num);
	printf("test12 %-#10x \n", num);  
	printf("test13 %-#10x \n", num);  
	printf("test14 %#10x \n", num);  
	printf("test15 %0#10x \n", num);  
//	printf("test4 %+#10x \n", num);  
//	printf("test4 %-+#10x \n", num);  
	printf("test16 %#x \n", num);	

	/* FIELD WIDTH*/
	char *pointer = "little";
	//printf("test fail%4 %4d%10s\n", num, pointer);
	printf("test17 %4d%10s\n", num, pointer);
	printf("test18 %1d%1s\n", num, pointer);
	printf("test19 %*d\n", 42, num);
	
	/* PRECISION */
	double dd = 42.123456789;
	double da = -42.123456789;
	printf("test20 %*.2f\n", 42, dd);
	printf("test21 %8.2f\n", dd);
	printf("test22 %.2f\n", dd);
	printf("test23 %.42f\n", dd);
	printf("test24 %.f\n", dd);
	printf("test25 %.*f\n", 8, dd);
	printf("test26 %*.*f\n", 100, 42, dd);
	printf("test26bis %+*.*f\n", 100, 42, dd);
	printf("test26bis %0+*.*f\n", 100, 42, dd);
	printf("test26bis %+0*.*f\n", 100, 42, dd);
	printf("test26bis %-*.*f\n", 100, 42, dd);
	printf("test26bis %-*.*f\n", 100, 42, da);
//	printf("test26bis %0-*.*f\n", 100, 42, da);
//	printf("test26bis %-0*.*f\n", 100, 42, da);
	printf("test26bis %#-*.*f\n", 100, 42, dd);
	printf("test26bis %#*.*f\n", 100, 42, dd);
	printf("test26bis %#+*.*f\n", 100, 42, dd);
	printf("test26bis %0#+*.*f\n", 100, 42, da);
	printf("test26bis %#-*.*f\n", 100, 42, da);

	printf("test27 %%");
	

	return 0;
}
