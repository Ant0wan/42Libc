/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ewcswidth.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 14:28:19 by abarthel          #+#    #+#             */
/*   Updated: 2019/04/10 16:46:02 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ewcswidth(const wchar_t *pwcs, size_t n)
{
	int	len;

	len = 0;
	while (*pwcs && --n)
	{
		if (*pwcs < 0)
			return (0);
		if (*pwcs <= 0x007F)
			len += 1;
		else if (*pwcs <= 0x07FF)
			len += 2;
		else if (*pwcs <= 0xFFFF)
			len += 3;
		else if (*pwcs <= 0x10FFFF)
			len += 4;
		else
			return (0);
		++pwcs;
	}
	return (len);
}