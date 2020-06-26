/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prs_struct.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 16:10:32 by abarthel          #+#    #+#             */
/*   Updated: 2020/06/26 21:02:12 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRS_STRUCT_H
# define PRS_STRUCT_H

# include <stdarg.h>

typedef struct	s_ret
{
	char *__restrict__	ret;
	int				i;
	int				fmt_i;
	int				max;
}				t_ret;

extern t_ret	g_ret;

typedef struct	s_modifier
{
	int	hh:1;
	int	h:1;
	int	l:1;
	int	ll:1;
	int	j:1;
	int	t:1;
	int	z:1;
	int	upl:1;
}				t_modifier;

typedef struct	s_flags
{
	int	hash:1;
	int	zero:1;
	int	minus:1;
	int	space:1;
	int	plus:1;
	int	apost:1;
}				t_flags;

extern t_flags	g_flags;

typedef struct	s_options
{
	int	width;
	int	precision;
	int	i_ap;
	int	val_dol;
}				t_options;

extern t_options	g_options;

# define G_ERROR 1

extern unsigned char		g_error;

#endif
