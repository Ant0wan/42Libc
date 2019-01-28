/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 17:35:29 by abarthel          #+#    #+#             */
/*   Updated: 2019/01/28 15:21:21 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
//#include <wchar.h>


int	main()
{
	short i;
	i = 100;
//	printf("short: %hd\n", i);
//	printf("wchar_t sizeof: %lu\n", sizeof(wchar_t));
//	ft_printf("Hello World\n");
	printf("%ls", L"Hello World!\n");
//	printf("%ls", L"ж\n");
//	printf("%ls", L"here is a unicode \u0141\n");
	printf("%d\n", printf("%ls\n", L"\u0141"));
	return (0);
}
