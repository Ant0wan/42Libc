/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grisu.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 10:20:08 by abarthel          #+#    #+#             */
/*   Updated: 2019/04/19 18:13:31 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRISU_H
# define GRISU_H

# include <stdint.h>
# include <float.h>

typedef struct	s_dfp
{
	_Bool			s:1;
	unsigned short	b:5 __attribute__((packed));
	unsigned short	e:11 __attribute__((packed));
	uint64_t		f:53 __attribute__((packed)); // not sure if 52 because of hidden value 0x10000000000000
}				t_dfp;

#endif
