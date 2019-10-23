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

#include <stdio.h> /*DEBUGG*/
#include <stdlib.h>

#include "ft_stack.h"

void                    put_in_stack(struct s_stack **top, int (*cmp)())
{
    void    *__restrict__ element_data;

    element_data = stack_peek(top);
    if (element_data)
    {
        stack_pop_get_data(top);
        put_in_stack(top, cmp);
        printf("-> %s\n", (char*)element_data);
    }
}

void	stack_sort(struct s_stack **top, int (*cmp)())
{
    put_in_stack(top, cmp);
    (void)top;
    (void)cmp;
}