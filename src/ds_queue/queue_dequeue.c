/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   queue_dequeue.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 10:50:06 by abarthel          #+#    #+#             */
/*   Updated: 2019/10/24 10:50:19 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_queue.h"

void	*queue_dequeue(struct s_qnode **front, void (*del)(void *))
{
    struct s_qnode  *node;
    void            *data;

    data = NULL;
    if (*front)
    {
        node = *front;
        *front = (*front)->previous;
    }
    if (!del)
        data = node->data;
    else
        del(node->data);
    free(node);
    return (data);
}