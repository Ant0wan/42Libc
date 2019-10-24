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

#include <stdlib.h>

#include "ft_queue.h"

void	*queue_dequeue(struct s_qnode **front, void (*del)(void *))
{
    struct s_qnode  *node;
    void            *data;

    data = NULL;
    if (*front)
    {
        node = *front;
        data = (*front)->data;
        *front = (*front)->previous;
        if (del)
            del(data);
        else
            data = node->data;
        free(node);
    }
    return (data);
}