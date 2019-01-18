/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   variadique.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 16:48:11 by abarthel          #+#    #+#             */
/*   Updated: 2019/01/18 13:03:12 by abarthel         ###   ########.fr       */
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

	while ((str = va_arg(ap, char*))) 
		printf("%s\n", str);
	
	va_end(ap);

}

int main(void)
{
	courses("List is made of", "oeufs", "chocolat", "sucre", "farine", NULL);
	return 0;
}
