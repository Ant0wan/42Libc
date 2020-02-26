/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   queue_size.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 16:56:16 by abarthel          #+#    #+#             */
/*   Updated: 2020/02/26 11:19:03 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_queue.h"

size_t	queue_size(struct s_queue *queue)
{
	struct s_qnode	*node;
	size_t			qsize;

	node = queue->front;
	qsize = 0;
	while (node)
	{
		++qsize;
		node = node->previous;
	}
	return (qsize);
}
