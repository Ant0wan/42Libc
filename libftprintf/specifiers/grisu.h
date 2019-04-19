/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grisu.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 10:20:08 by abarthel          #+#    #+#             */
/*   Updated: 2019/04/19 17:04:44 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRISU_H
# define GRISU_H

# include <stdint.h>

typedef struct	s_dfp
{
	_Bool			sign:1;
	unsigned short	e:11;
	uint64_t		f:53; // not sure if 52 because of hidden value 0x10000000000000
}				t_dfp;

#endif
