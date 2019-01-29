/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dispatcher.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 16:06:04 by abarthel          #+#    #+#             */
/*   Updated: 2019/01/29 16:43:48 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DISPATCHER_H
# define DISPATCHER_H

#include <stdlib.h>

typedef struct	s_operator
{
	wchar_t	*type;
	void	*(*f)();
}				t_operator;

#endif
