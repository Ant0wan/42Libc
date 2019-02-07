/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 14:06:36 by abarthel          #+#    #+#             */
/*   Updated: 2019/02/05 17:41:43 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"
#include "ft_wchar.h"
#include "utf8.h"

#include <unistd.h>
#include <stdio.h>
#include <locale.h>

#define ARG L"hello"

int main(void)
{

	wchar_t i;
//	wchar_t *ws;
//	(void)setlocale(LC_ALL,"");





	ft_printf(ARG);	
	printf(ARG);






//	ft_printf("Hello World ! %c\n %s\n", 'L', 'a');	
//	printf("%s", (void *)3);
//	printf("Hello World ! %c\n %c\n", 'L', 42);	
//	printf("Hello World ! %s\n", 'L');
	
	//	printf("%d\n", sizeof(wchar_t));
//	printf("%ls", L"Æ");
//	unsigned char c;
//	c = 0xc3;
//	write(1, &c, 1);
//	c = 0x86;
//	write(1, &c, 1);
//	c = 0xb4;
//	write(1, &c, 1);
//	c = 0x0a;
//	write(1, (void*)L'\xC6B8', 2);

//	i = L'Æ';
//	i = L'ￒ';
//	i = L'𝄢';
//	i = L'𝄫';
//	i = L'𪜀';
//	i = L'\xC6B8';
	//	i = 0xFFFF;
//	ft_putwchar('\n');
//	ft_putwchar(i);
//	ft_fputws(L"Æￒ𝄢𝄫𪜀", 1);
//	ft_fputwcbits(i, 1);
//	ft_putwchar('\n');
	//	ft_fputwcbits(i, 1);
	//	ft_putwchar('\n');
	//	i >>= 6;
	//	i <<= 8 * 3;
	//	ft_fputwcbits(i, 1);
//	ft_putwchar('\n');

//	ft_fputwc(i, 1);
//    ft_putwchar('\n');
//	ft_fputwcbits(utf8_encoder(&i), 1);
//	ft_putwchar('\n');
//	ft_fputwcbits(i, 1);
//	printf("\nHere is the thing:    %C\n", i);
//	ft_putwchar('\n');
	//ft_fputwc(i, 1);
//	ft_fputwc(L'Æ', 1);
//	ft_putwchar('\n');
//	ft_putwchar(i);
//	ft_putwchar('\n');
	//	i = i << (32 - 6);	
	//	i = i >> 10;
	//	ft_fputwcbits(i, 1);
	//	ft_putwchar('\n');
	//	i = L'Ŧ';
	//	ft_putwchar(*(utf8_encoder(&i)));
	//	i = L'ũ';
	//	ft_putwchar(*(utf8_encoder(&i)));
	//	ft_putwchar(*(utf8_encoder(&i)));
	//	ft_putwchar(*(utf8_encoder(&i)));
	return (0);
}
