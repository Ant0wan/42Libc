/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   queue_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 13:52:49 by abarthel          #+#    #+#             */
/*   Updated: 2019/10/24 13:52:50 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

#include "ft_queue.h"

void    queue_sort(struct s_queue *queue, int (*cmp)())
{
    void    *data;
    
    if (!queue_isempty(queue))
    {

        data = queue_dequeue(&(queue->front), NULL);
    	fprintf(stderr, "r %p\n", queue->rear);
    	fprintf(stderr, "f %p\n\n", queue->front);
        queue_sort(queue, cmp);
    	fprintf(stderr, "Data: %s\n", (char*)data);
        queue_enqueue(queue, data);
    	fprintf(stderr, "%p\n", queue->rear);
    	fprintf(stderr, "%p\n", queue->front);
  /*      fprintf(stderr, "Check front: %s\n", (char*)queue_front(queue));
   */ }
}