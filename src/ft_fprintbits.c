/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fprintbits.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 13:25:35 by abarthel          #+#    #+#             */
/*   Updated: 2019/06/26 15:16:04 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define BITS_IN_CHAR 8
#define START_ARRAY (BITS_IN_CHAR - 1)
#define MASK 0x30

int		ft_fprintbits(char c, int fd)
{
	int		bit;
	char	str[BITS_IN_CHAR];

	bit = 0;
	while (bit < BITS_IN_CHAR)
	{
		str[START_ARRAY - bit] = c & (1 << bit) ? 1 ^ MASK : 0 ^ MASK;
		++bit;
	}
	return ((int)write(fd, str, BITS_IN_CHAR));
}
