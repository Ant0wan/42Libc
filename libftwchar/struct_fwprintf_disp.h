/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_dispatch.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 16:59:46 by abarthel          #+#    #+#             */
/*   Updated: 2019/01/31 11:24:10 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_DISPATCH_H
# define STRUCT_DISPATCH_H

# include <stdlib.h>

typedef struct	s_operator
{
	wchar_t	*type;
	void	*(*f)();
}				t_operator;

#endif
