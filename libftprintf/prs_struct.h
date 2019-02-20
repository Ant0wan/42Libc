/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prs_struct.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 16:10:32 by abarthel          #+#    #+#             */
/*   Updated: 2019/02/20 11:47:54 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRS_STRUCT_H
# define PRS_STRUCT_H

typedef struct	s_modifier
{
	unsigned int	hh:1;
	unsigned int	h:1;
	unsigned int	l:1;
	unsigned int	ll:1;
	unsigned int	j:1;
	unsigned int	t:1;
	unsigned int	z:1;
	unsigned int	q:1;
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

#endif
