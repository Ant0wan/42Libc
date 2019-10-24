/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   queue_apply_to_each.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 12:40:18 by abarthel          #+#    #+#             */
/*   Updated: 2019/10/24 12:40:20 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_queue.h"

void    queue_apply_to_each(struct s_qnode  *pfront, void (*f)())
{
    while (pfront)
    {
        f(pfront->data);
        pfront = pfront->previous;
    }
}