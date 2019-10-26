/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   queue_size.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 16:56:16 by abarthel          #+#    #+#             */
/*   Updated: 2019/10/24 16:56:18 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_queue.h"

int queue_size(struct s_queue *queue)
{
    struct s_qnode  *node;
    int             size;

    node = queue->front;
    size = 0;
    while (node)
    {
        ++size;
        node = node->previous;
    }
    return (size);
}