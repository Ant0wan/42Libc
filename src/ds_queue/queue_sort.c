/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   queue_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 13:52:49 by abarthel          #+#    #+#             */
/*   Updated: 2019/10/29 13:00:47 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

#include "ft_queue.h"

static void    front_to_rear(struct s_queue *queue, size_t qsize)
{
    if (qsize > 0)
    {
        queue_enqueue(queue, queue_dequeue(queue, NULL));
        front_to_rear(queue, qsize - 1);
    }
}

static void    sorted_enqueue(struct s_queue *queue, void *data, int (*cmp)(), size_t qsize)
{
    if (queue_isempty(queue) || !qsize)
        queue_enqueue(queue, data);
    else if (cmp(data, queue->front->data) < 0)
    {
        queue_enqueue(queue, data);
        front_to_rear(queue, qsize);
    }
    else
    {
        queue_enqueue(queue, queue_dequeue(queue, NULL));
        sorted_enqueue(queue, data, cmp, qsize - 1);
    }
}

void    queue_sort(struct s_queue *queue, int (*cmp)())
{
    void    *data;
    
    if (!queue_isempty(queue))
    {
        data = queue_dequeue(queue, NULL);
        queue_sort(queue, cmp);
        sorted_enqueue(queue, data, cmp, queue_size(queue));
    }
}