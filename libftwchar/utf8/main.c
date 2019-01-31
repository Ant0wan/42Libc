/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 14:06:36 by abarthel          #+#    #+#             */
/*   Updated: 2019/01/31 18:25:33 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_wchar.h"
#include "utf8.h"

#include <unistd.h>
#include <stdio.h>
#include <locale.h>


int main(void)
{

	wchar_t i;

	(void)setlocale(LC_ALL,"");
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

	i = L'Æ';
//	i = L'\xC6B8';
	//	i = 0xFFFF;
//	ft_putwchar('\n');
//	ft_fputwcbits(i, 1);
//	ft_putwchar('\n');
	//	ft_fputwcbits(i, 1);
	//	ft_putwchar('\n');
	//	i >>= 6;
	//	i <<= 8 * 3;
	//	ft_fputwcbits(i, 1);
	//	ft_putwchar('\n');

	//	ft_putwchar('\n');
	ft_fputwcbits(*(utf8_encoder(&i)), 1);
	ft_putwchar('\n');
	ft_fputwcbits(i, 1);
	printf("%C", i);
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
