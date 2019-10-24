/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   queue_delete.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 16:22:27 by abarthel          #+#    #+#             */
/*   Updated: 2019/10/24 16:22:28 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_queue.h"

void    queue_delete(struct s_queue *queue, void (*del)())
{
    while (queue->front)
        queue_dequeue(&(queue->front), del);
    queue->rear = NULL;
}