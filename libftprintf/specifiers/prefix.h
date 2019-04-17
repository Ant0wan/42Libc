/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prefix.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 14:27:45 by abarthel          #+#    #+#             */
/*   Updated: 2019/04/17 10:41:57 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PREFIX_H
# define PREFIX_H

# include <locale.h>

typedef struct	s_prefi
{
	char *restrict			prefix;
	char *restrict			ch_base;
	struct lconv *restrict	lc;
	unsigned short			len:5;
	unsigned short			base:5;
	unsigned short			size:2;
	_Bool					neg:1;
}				t_prefix;

extern t_prefix	g_prefix;

void			reset_prefix(void) __attribute__((always_inline));

#endif
