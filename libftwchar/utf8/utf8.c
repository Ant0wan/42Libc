/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utf8.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 18:54:10 by abarthel          #+#    #+#             */
/*   Updated: 2019/01/31 13:51:34 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utf8.h"

#include <stdlib.h>

static wchar_t	m0x07ff_utf8(wchar_t wc)
{
	wc |= (1 << 7) | (1 << 6);
	wc &= ~(1 << 5);
}

static wchar_t	m0xffff_utf8(wchar_t wc)
{
	return (wc);
}

static wchar_t	m0x10ffff_ut8(wchar_t wc)
{
	return (wc);
}

wchar_t			utf8_encoder(wchar_t wc)
{
	if (wc > -1)
	{
		if (wc <= 0x007F)
			return (wc);
		else if (wc <= 0x07FF)
			return (m0x07ff_utf8(wc));
		else if (wc <= 0xFFFF)
			return (m0xffff_utf8(wc));
		else if (wc <= 0x10FFFF)
			return (m0x10ffff_ut8(wc));
		else
			return (0);
	}
	else
		return (0);
}
