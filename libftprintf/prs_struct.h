/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prs_struct.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 16:10:32 by abarthel          #+#    #+#             */
/*   Updated: 2019/02/20 14:44:24 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRS_STRUCT_H
# define PRS_STRUCT_H

# include <stdarg.h>
# include <stdlib.h>

typedef struct	s_ap
{
	unsigned int	nb_ap;
	va_list			*ap_list;
}				t_ap;

typedef struct	s_ret
{
	int		i;
	int		max;
	char	*ret;
}				t_ret;

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
