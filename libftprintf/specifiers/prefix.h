/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prefix.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 14:27:45 by abarthel          #+#    #+#             */
/*   Updated: 2019/04/08 16:11:22 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PREFIX_H
# define PREFIX_H

# include <locale.h>

typedef struct	s_prefi
{
	unsigned short	len;
	unsigned char	base;
	unsigned char	size;
	_Bool			neg;
	char			*prefix;
	char			*ch_base;
	struct lconv	*lc;
	short			len_thousands_sep:8;
}				t_prefix;

extern t_prefix	g_prefix;

void	reset_prefix(void) __attribute__((always_inline));

#endif
