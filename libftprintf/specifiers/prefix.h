/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prefix.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 14:27:45 by abarthel          #+#    #+#             */
/*   Updated: 2019/04/08 17:30:23 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PREFIX_H
# define PREFIX_H

# include <locale.h>

typedef struct	s_prefi
{
	unsigned short	len;
	unsigned short	base:8;
	unsigned short	size:8;
	_Bool			neg:1;
	char			*prefix;
	char			*ch_base;
	struct lconv	*lc;
	short			len_thousands_sep:8;
}				t_prefix;

extern t_prefix	g_prefix;

void			reset_prefix(void) __attribute__((always_inline));

#endif
