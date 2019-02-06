/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 13:35:20 by abarthel          #+#    #+#             */
/*   Updated: 2019/02/06 14:15:32 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

#define FIRST_BYTE 0b11111111
#define SECOND_BYTE 0b1111111100000000
#define THIRD_BYTE	0b111111110000000000000000
#define FOURTH_BYTE	0b11111111000000000000000000000000

size_t		ft_strlen(const char *s)
{
	size_t			len;
	unsigned int	next4bytes;

	len = 0;
	while (42)
	{
		next4bytes = *(unsigned int*)s;
		if ((next4bytes & FIRST_BYTE) == 0)
			return (len);
		else if ((next4bytes & SECOND_BYTE) == 0)
			return (len + 1);
		else if ((next4bytes & THIRD_BYTE) == 0)
			return (len + 2);
		else if ((next4bytes & FOURTH_BYTE) == 0)
			return (len + 3);
		s += 4;
		len += 4;
	}
}
