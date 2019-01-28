/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dispatcher.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 16:06:04 by abarthel          #+#    #+#             */
/*   Updated: 2019/01/28 16:46:17 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		DISPATCHER_H
# define	DISPATCHER_H

# include <unistd.h>
# include <stdlib.h>
# include "libft.h"


typedef struct		s_operator
{
	char	*type;
	void	*(*f)();
}					t_operator;

 // http://www.cplusplus.com/reference/cstdio/printf/

extern t_operator	g_specifier[];
extern t_operator	g_flag[];
extern t_operator	g_width[];
extern t_operator	g_precision[];
extern t_operator	g_length[];
