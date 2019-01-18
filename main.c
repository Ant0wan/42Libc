/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 16:48:11 by abarthel          #+#    #+#             */
/*   Updated: 2019/01/18 13:40:39 by abarthel         ###   ########.fr       */
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

	int number = 42;

	printf("test1 %#x\n", 42);
    printf("test2 %-10d \n", number);
    printf("test3 %010d \n", number);
    printf("test4 %-#10x \n", number);  
    printf("test5 %#x \n", number);	


	return 0;
}
