/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 17:03:32 by abarthel          #+#    #+#             */
/*   Updated: 2019/02/01 15:44:55 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

#include "utf8.h"

#define RET_ERROR         -1
#define UTF8ENCODING_SIZE  4

int	ft_putwchar(wchar_t wc)
{
	int		ret;
	char	buf[4];

	if (wc >= 0x00)
	{
		if (wc <= 0x007F)
		{
			if ((ret = write(STDOUT_FILENO, &wc, sizeof(wc))) > -1)
				return ((int)wc);
			else
				return (ret);
		}
		else
		{
			if (utf8_encoder(&wc) == RET_ERROR)
				return (RET_ERROR);
			buf[0] = wc  >> (3 * 8);
			buf[1] = wc  >> (2 * 8);
			buf[2] = wc  >> (1 * 8);
			buf[3] = wc;
			if ((ret = write(STDOUT_FILENO, buf, UTF8ENCODING_SIZE)) > -1)
				return ((int)wc);
			else
				return (ret);
		}
	}
	else
		return (RET_ERROR);
}
