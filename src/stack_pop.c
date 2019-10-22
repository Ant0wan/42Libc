/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_pop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 14:23:37 by abarthel          #+#    #+#             */
/*   Updated: 2019/10/22 14:23:40 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_stack.h"

void    stack_pop(struct s_stack **top, void (*del_data)(void *))
{
    struct s_stack  *previous;

    if (!*top)
        return (NULL);
    del_data((*top)->data);
    previous = (*top)->previous;
    free(*top);
    *top = previous;
}