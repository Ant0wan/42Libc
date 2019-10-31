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

#include "ft_btree.h"

void			btree_apply_by_level(struct s_btree *root, void (*applyf)(void *item,
			size_t current_level, size_t is_first_elem), __attribute__((unused)) size_t level)
{
	struct s_queue  queue;

    queue_enqueue(&queue)
	if (root)
	{
        ++level;
		if (rootfile->node->left && (tmp->next = create_in(file->node->left)))
		{
			tmp->next->level = file->level + 1;
			tmp = tmp->next;
		}
		if (file->node->right && (tmp->next = create_in(file->node->right)))
		{
			tmp->next->level = file->level + 1;
			tmp = tmp->next;
		}
		file = file->next;
	}
}