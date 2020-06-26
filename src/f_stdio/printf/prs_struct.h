/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prs_struct.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 16:10:32 by abarthel          #+#    #+#             */
/*   Updated: 2020/06/26 21:09:07 by abarthel         ###   ########.fr       */
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
	unsigned int	hh:1;
	unsigned int	h:1;
	unsigned int	l:1;
	unsigned int	ll:1;
	unsigned int	j:1;
	unsigned int	t:1;
	unsigned int	z:1;
	unsigned int	upl:1;
}				t_modifier;

typedef struct	s_flags
{
	unsigned int	hash:1;
	unsigned int	zero:1;
	unsigned int	minus:1;
	unsigned int	space:1;
	unsigned int	plus:1;
	unsigned int	apost:1;
}				t_flags;

extern t_flags	g_flags;

typedef struct	s_options
{
	int	width;
	int	precision;
	int	val_dol;
}				t_options;

extern t_options	g_options;

# define G_ERROR 1

extern unsigned char		g_error;

#endif
