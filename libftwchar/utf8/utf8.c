/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utf8.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 18:54:10 by abarthel          #+#    #+#             */
/*   Updated: 2019/01/31 17:51:16 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utf8.h"

#include <stdlib.h>
#include <unistd.h>

#define BITS_IN_WCHAR 32

static wchar_t	*m0x07ff_utf8(wchar_t *wc)
{
	wchar_t	unicode_pt;
	wchar_t	byte1;
	wchar_t	byte2;

	unicode_pt = *wc;
	byte1 = (unicode_pt >> 6) << 24;
	byte2 = (unicode_pt << 26) >> 10;
	write(1, "OK\n", 3);
	*wc = 0;
	*wc |= (1 << 31) | (1 << 30);
	*wc &= ~(1 << 29);
	*wc |= 1 << 23;
	*wc &= ~(1 << 22);
	*wc ^= (unicode_pt >> 6) << 24;
	*wc ^= (unicode_pt << 26) >> 10;
	return (wc);
}

static wchar_t	*m0xffff_utf8(wchar_t *wc)
{

	return (wc);
}

static wchar_t	*m0x10ffff_ut8(wchar_t *wc)
{
	return (wc);
}

wchar_t			*utf8_encoder(wchar_t *wc)
{
	if (BITS_IN_WCHAR < 32 || *wc < 0)
		return (NULL);
	if (*wc <= 0x007F)
		return (wc);
	else if (*wc <= 0x07FF)
		return (m0x07ff_utf8(wc));
	else if (*wc <= 0xFFFF)
		return (m0xffff_utf8(wc));
	else if (*wc <= 0x10FFFF)
		return (m0x10ffff_ut8(wc));
	else
		return (NULL);
}
