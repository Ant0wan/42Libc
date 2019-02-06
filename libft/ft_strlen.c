/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 13:35:20 by abarthel          #+#    #+#             */
/*   Updated: 2019/02/06 11:44:53 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t		ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		++len;
	return (len);
}

int strlen_my(const char *s)
{
	int len = 0;
	for(;;)
	{
		unsigned x = *(unsigned*)s;
		if((x & 0xFF) == 0) return len;
		if((x & 0xFF00) == 0) return len + 1;
		if((x & 0xFF0000) == 0) return len + 2;
		if((x & 0xFF000000) == 0) return len + 3;
		s += 4, len += 4;
	}
}
