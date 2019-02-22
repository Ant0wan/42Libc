/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prs_struct.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 16:10:32 by abarthel          #+#    #+#             */
/*   Updated: 2019/02/22 16:53:21 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRS_STRUCT_H
# define PRS_STRUCT_H

# include <stdarg.h>

typedef struct	s_ap
{
	unsigned short	last_ap;
	unsigned short	next_ap;
	va_list			origin;
}				t_ap;

typedef struct	s_ret
{
	unsigned short	i;
	unsigned short	max;
	char			*ret;
}				t_ret;

extern t_ret	g_ret;

typedef struct	s_modifier
{
	_Bool	hh:1;
	_Bool	h:1;
	_Bool	l:1;
	_Bool	ll:1;
	_Bool	j:1;
	_Bool	t:1;
	_Bool	z:1;
	_Bool	upl:1;
}				t_modifier;

typedef struct	s_flags
{
	_Bool	hash:1;
	_Bool	zero:1;
	_Bool	minus:1;
	_Bool	space:1;
	_Bool	plus:1;
	_Bool	apost:1;
}				t_flags;

#endif
