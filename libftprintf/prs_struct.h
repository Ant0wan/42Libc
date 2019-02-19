/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prs_struct.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 16:10:32 by abarthel          #+#    #+#             */
/*   Updated: 2019/02/19 12:27:12 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRS_STRUCT_H
# define PRS_STRUCT_H

typedef struct	s_prs
{
	unsigned int	space:1;
	unsigned int	l:1;
	unsigned int	ll:1;
}				t_prs;

extern t_prs g_local_prs;

#endif
