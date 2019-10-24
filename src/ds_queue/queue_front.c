/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   queue_front.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 16:56:16 by abarthel          #+#    #+#             */
/*   Updated: 2019/10/24 16:56:18 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_queue.h"

void	*queue_front(struct s_queue *queue)
{
    if (queue->front)
        return (queue->front->data);
    return (NULL);
}
