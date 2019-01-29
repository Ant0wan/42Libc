/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wchar.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 15:19:44 by abarthel          #+#    #+#             */
/*   Updated: 2019/01/29 18:37:20 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_WCHAR_H
#define FT_WCHAR_H

#include <stdlib.h>

int	ft_wcscmp(const wchar_t *s1, const wchar_t *s2);

int	ft_fputwc(wchar_t wc, int fd);

int	ft_fputws(const wchar_t *restrict ws, int fd);

int	ft_putwchar(wchar_t wc);

#endif
