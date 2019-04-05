/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prefix.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 14:27:45 by abarthel          #+#    #+#             */
/*   Updated: 2019/04/05 19:47:50 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PREFIX_H
# define PREFIX_H

typedef struct	s_prefi
{
	unsigned short	len;
	unsigned char	base;
	unsigned char	size;
	_Bool			neg;
	char			*prefix;
	char			*ch_base;
}				t_prefix;

extern t_prefix	g_prefix;

void	reset_prefix(void) __attribute__((always_inline));

#endif
