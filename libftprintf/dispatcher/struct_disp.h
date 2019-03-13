/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_disp.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 14:49:00 by abarthel          #+#    #+#             */
/*   Updated: 2019/03/13 11:10:30 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_DISP_H
# define STRUCT_DISP_H

# ifndef TYPE
#  define TYPE char
# endif

typedef struct	s_specifier
{
	TYPE	type;
	void	*(*f)();
}				t_specifier;

extern const t_specifier	g_specifier[];

#endif
