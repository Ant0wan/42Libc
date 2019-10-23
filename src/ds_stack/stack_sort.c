/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 12:22:36 by abarthel          #+#    #+#             */
/*   Updated: 2019/10/23 12:23:08 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_stack.h"

void    put_in_stack(struct s_stack **top, int (*cmp)(), void (*del_data)(void *))
{
    struct s_stack  *element;

    element = (struct s_stack*)stack_peek(top);
    if (element)
    {
        stack_pop(top, del_data);
        put_in_stack(top, cmp, del_data);
    }
}

void	stack_sort(struct s_stack **top, int (*cmp)(), void (*del_data)(void *))
{
    put_in_stack(top, cmp, del_data);
    (void)top;
    (void)cmp;
}