/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_by_level.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 13:04:14 by abarthel          #+#    #+#             */
/*   Updated: 2019/10/22 13:04:28 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_queue.h"
#include "ft_btree.h"

void	apply_level(struct s_queue *queue, void (*applyf)(void *item, size_t current_level, size_t is_first_elem), size_t level)
{
	struct s_btree *data;

	if (queue->front)
	{
		while (queue->front)
		{
			applyf(queue->front->data, level, 0);
			queue_dequeue(queue, NULL);
		}
		data = (struct s_btree*)queue->front->data;
		if (data->left)
			queue_enqueue(queue, (void*)data->left);
		if (data->right)
			queue_enqueue(queue, (void*)data->right);
		apply_level(queue, applyf, level + 1);
	}
}

void	btree_apply_by_level(struct s_btree *root, void (*applyf)(void *item, size_t current_level, size_t is_first_elem))
{
	struct s_queue	queue;
	size_t		level;

	if (root)
	{
		level = 0;
		queue_enqueue(&queue, (void*)root);
		apply_level(&queue, applyf, level);
	}
}
