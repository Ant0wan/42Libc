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

static void     re_dequeue(struct s_queue *queue, void *pdata, int (*cmp)())
{
    void    *data;

    if (!queue_isempty(queue))
    {
        if (cmp(pdata, queue->rear->data) >= 0)
        {
            data = queue_dequeue(queue, NULL);
            re_dequeue(queue, data, cmp);
        }
        else
            queue_enqueue(queue, pdata);
    }
}

static void    sorted_enqueue(struct s_queue *queue, void *data, int (*cmp)())
{
    printf("0:queue f n r: %p      %p\n", queue->front, queue->rear);
    if (queue_isempty(queue))
    {
        printf("data: %s", (char*)data);
        printf("1:queue f n r: %p      %p\n\n", queue->front, queue->rear);
        queue_enqueue(queue, data);
    }
    else if (cmp(data, queue->rear->data) >= 0)
    {
        printf("data: %s", (char*)data);
        printf("2:queue f n r: %p      %p\n\n", queue->front, queue->rear);
        queue_enqueue(queue, data);
    }
    else
    {
        printf("data: %s", (char*)data);
        printf("3:queue f n r: %p      %p\n\n", queue->front, queue->rear);
        re_dequeue(queue, data, cmp);
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