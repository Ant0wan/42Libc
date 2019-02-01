/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fputwc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 18:07:08 by abarthel          #+#    #+#             */
/*   Updated: 2019/02/01 15:40:15 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utf8.h"

#include <stdlib.h>
#include <unistd.h>

#define RET_ERROR         -1
#define UTF8ENCODING_SIZE  4

int	ft_fputwc(wchar_t wc, int fd)
{
	int		ret;
	char	buf[4];

	if (wc >= 0x00)
	{
		if (wc <= 0x007F)
		{
			if ((ret = write(fd, &wc, sizeof(wc))) > -1)
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
			if ((ret = write(fd, buf, UTF8ENCODING_SIZE)) > -1)
				return ((int)wc);
			else
				return (ret);
		}	
	}
	else
		return (RET_ERROR);
}
