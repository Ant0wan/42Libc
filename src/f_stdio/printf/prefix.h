/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prefix.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 14:27:45 by abarthel          #+#    #+#             */
/*   Updated: 2020/06/26 21:05:09 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PREFIX_H
# define PREFIX_H

# include <locale.h>

typedef struct	s_prefi
{
	char *__restrict__			prefix;
	char *__restrict__			ch_base;
	struct lconv *__restrict__	lc;
	unsigned short			len;
	unsigned int			base:5;
	unsigned int			size:2;
	unsigned int					neg:1;
}				t_prefix;

extern t_prefix	g_prefix;

void			reset_prefix(void);

#endif
