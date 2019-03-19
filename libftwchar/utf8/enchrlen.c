/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enchrlen.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 14:28:19 by abarthel          #+#    #+#             */
/*   Updated: 2019/03/19 18:00:16 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

extern inline int	enchrlen(wchar_t wc)
{
	if (wc < 0)
		return (0);
	if (wc <= 0x007F)
		return (1);
	else if (wc <= 0x07FF)
		return (2);
	else if (wc <= 0xFFFF)
		return (3);
	else if (wc <= 0x10FFFF)
		return (4);
	else
		return (0);
}
