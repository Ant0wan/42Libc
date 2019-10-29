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

static void    sorted_enqueue(struct s_queue *queue, void *data, int (*cmp)())
{
    (void)queue;
    (void)cmp;
    if (queue_isempty(queue))
    {
        printf("s:%d\n", queue_size(queue));
        printf("f %p\n", queue->front);
        printf("r %p\n", queue->rear);
        printf("YES\n");
        queue_enqueue(queue, data);
    }

    return ;
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