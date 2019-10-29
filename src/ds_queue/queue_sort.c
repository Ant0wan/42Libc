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
#include <unistd.h>
/*
static void     re_dequeue(struct s_queue *queue, int (*cmp)())
{
    void    *data;

    if (!queue_isempty(queue))
    {
        (void)data;
        (void)queue;
        (void)cmp;
    }
}*/

static void    sorted_enqueue(struct s_queue *queue, void *data, int (*cmp)())
{
    (void)cmp;
    if (queue_isempty(queue))
        queue_enqueue(queue, data);
    else if (cmp(data, queue->rear->data) >= 0)
        queue_enqueue(queue, data);
    else
    {
        return ;
        /* re-dequeue to  reorder */
    }
    
}

void    queue_sort(struct s_queue *queue, int (*cmp)())
{
    void    *data;
    
    if (!queue_isempty(queue))
    {
        data = queue_dequeue(queue, NULL);
        queue_sort(queue, cmp);
        sorted_enqueue(queue, data, cmp);
    }
}