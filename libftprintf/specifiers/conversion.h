/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/25 12:41:48 by abarthel          #+#    #+#             */
/*   Updated: 2019/03/25 13:54:37 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_H
# define CONVERSION_H

typedef struct	s_conv
{
	char			*base_ret;
	unsigned char	base:5;
	_Bool			isupp:1;
}				t_conv;

extern t_conv	g_conv;

#endif
