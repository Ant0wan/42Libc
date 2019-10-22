/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_rotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 14:28:08 by abarthel          #+#    #+#             */
/*   Updated: 2019/10/22 17:19:43 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_stack.h"

void    stack_rotate(struct s_stack **top)
{
    if ((*top)->previous->previous)
        stack_rotate(&((*top)->previous));
    (*top)->previous->previous = (*top);
}
