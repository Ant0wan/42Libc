/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utf8.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 18:54:10 by abarthel          #+#    #+#             */
/*   Updated: 2019/02/01 18:42:27 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_wchar.h"

#include "utf8.h"

#include <stdlib.h>
#include <unistd.h>

#define BYTE_WCHAR 4
#define RET_ERROR -1

static int	m0x07ff_utf8(wchar_t *wc)
{
	wchar_t	unicode_pt;

	unicode_pt = *wc;
	*wc = 0;
	*wc ^= 0xC0000000 | 0x800000;
	*wc ^= (unicode_pt >> 6) << 24;
	*wc ^= (unicode_pt << 26) >> 10;
	return ((int)*wc);
}

static int	m0xffff_utf8(wchar_t *wc)
{
	wchar_t	unicode_pt;

	unicode_pt = *wc;
	*wc = 0;
	*wc ^= 0xE0000000 | 0x800000 | 0x8000;
	*wc ^= (unicode_pt << 12) & (0xF000000);
	*wc ^= (unicode_pt & 0xFC0) << 10;
	*wc ^= (unicode_pt & 0x3F) << 8;
	return ((int)*wc);
}

static int	m0x10ffff_ut8(wchar_t *wc)
{
	ft_fputwcbits(*wc, 1);
	return ((int)*wc);
}

int			utf8_encoder(wchar_t *wc)
{
	if (sizeof(wchar_t) != BYTE_WCHAR || *wc < 0)
		return (RET_ERROR);
	else if (*wc <= 0x007F)
		return ((int)*wc);
	else if (*wc <= 0x07FF)
		return (m0x07ff_utf8(wc));
	else if (*wc <= 0xFFFF)
		return (m0xffff_utf8(wc));
	else if (*wc <= 0x10FFFF)
		return (m0x10ffff_ut8(wc));
	else
		return (RET_ERROR);
}
