/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fputwcbits.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 13:25:35 by abarthel          #+#    #+#             */
/*   Updated: 2019/01/30 16:08:06 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

#define BITS_IN_WCHAR 32
#define START_ARRAY (BITS_IN_WCHAR - 1)
#define MASK 0x30

int		ft_fputwcbits(int fd, wchar_t c)
{
	int		bit;
	char	str[BITS_IN_WCHAR];

	bit = -1;
	while (++bit < BITS_IN_WCHAR)
		str[START_ARRAY - bit] = c & (1 << bit) ? 1 ^ MASK : 0 ^ MASK;
	return ((int)write(fd, str, BITS_IN_WCHAR));
}
