/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grisu.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 10:20:08 by abarthel          #+#    #+#             */
/*   Updated: 2019/04/23 11:37:41 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRISU_H
# define GRISU_H

# include <stdint.h>
# include <float.h>

//typedef struct	s_dfp
//{
//	_Bool			s:1;
//	unsigned short	e:12 __attribute__((packed));
//	uint64_t		f:53 __attribute__((packed)); // not sure if 52 because of hidden value 0x10000000000000
//}				t_dfp;

typedef struct	s_dfp
{
	_Bool			s:1;
	int				e;
	uint64_t		f;
}				t_dfp;

#endif
