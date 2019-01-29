/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fputwc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 18:07:08 by abarthel          #+#    #+#             */
/*   Updated: 2019/01/29 18:47:41 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

#define RET_ERROR -1

int	ft_fputwc(wchar_t wc, int fd)
{
	if (wc >= 0x00 && wc <= 0xFF)
		if (write(fd, &wc, sizeof(wc)))
			return ((int)wc);
	return (RET_ERROR);
}
