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

void    queue_sort(struct s_queue *queue, int (*cmp)())
{
    void    *data;
    
    if (!queue_isempty(queue))
    {
        data = queue_dequeue(queue, NULL);
        queue_sort(queue, cmp);
        queue_enqueue(queue, data);
    }
}