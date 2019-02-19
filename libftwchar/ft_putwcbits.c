/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwcbits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 13:25:35 by abarthel          #+#    #+#             */
/*   Updated: 2019/02/19 18:49:17 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

#define BITS_WCHAR         32
#define WCHAR_BYTE_SIZE     4
#define MASK             0x30
#define RET_ERROR          -1

int		ft_putwcbits(wchar_t c)
{
	int		bit;
	char	str[BITS_WCHAR];

	if (sizeof(wchar_t) == WCHAR_BYTE_SIZE)
	{
		bit = -1;
		while (++bit < BITS_WCHAR)
			str[(BITS_WCHAR - 1) - bit] = c & (1 << bit) ? 1 ^ MASK : 0 ^ MASK;
		return ((int)write(STDOUT_FILENO, str, BITS_WCHAR));
	}
	else
		return (RET_ERROR);
}
