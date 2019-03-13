/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dispatcher.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 14:46:43 by abarthel          #+#    #+#             */
/*   Updated: 2019/03/13 11:29:58 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DISPATCHER_H
# define FT_DISPATCHER_H

# include "struct_disp.h"

# ifndef NB_PTR
#  define NB_PTR 28
# endif

void	*dispatcher(char c);

#endif
