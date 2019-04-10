/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wcswidth.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 14:28:19 by abarthel          #+#    #+#             */
/*   Updated: 2019/04/10 14:49:48 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_wcswidth(wchar_t *ws)
{
	int	len;

	len = 0;
	while (*ws)
	{
		if (*ws < 0)
			return (0);
		if (*ws <= 0x007F)
			len += 1;
		else if (*ws <= 0x07FF)
			len += 2;
		else if (*ws <= 0xFFFF)
			len += 3;
		else if (*ws <= 0x10FFFF)
			len += 4;
		else
			return (0);
		++ws;
	}
	return (len);
}
