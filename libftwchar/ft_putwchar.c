/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 17:03:32 by abarthel          #+#    #+#             */
/*   Updated: 2019/01/29 18:47:52 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

#define RET_ERROR -1

int	ft_putwchar(wchar_t wc)
{
	if (wc >= 0x00 && wc <= 0xFF)
		if (write(STDOUT_FILENO, &wc, sizeof(wc)))
			return ((int)wc);
	return (RET_ERROR);
}
