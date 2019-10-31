/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_remove_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 13:50:38 by abarthel          #+#    #+#             */
/*   Updated: 2019/10/31 13:50:39 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_btree.h"

static struct s_btree	*parent_node_search(struct s_btree *node, void *data_ref, int (*cmpf)(void *, void *))
{
	if (node)
	{
		if (node->left)
		{
			if (!cmpf(data_ref, node->left->data))
				return (node);
			else
				return (parent_node_search(node->left, data_ref, cmpf)); 
		}
		if (node->left && !cmpf(data_ref, node->right->data))
		{
			if (!cmpf(data_ref, node->right->data))
				return (node);
			else
				return (parent_node_search(node->right, data_ref, cmpf)); 
		}
	}
	return (NULL);
}

void    btree_remove_data(struct s_btree **root, void *data_ref, int (*cmpf)(void *, void *), void (*del)(void *))
{
	struct s_btree  *node;

    while ((node = parent_node_search(*root, data_ref, cmpf)))
    {
		if (!cmpf(node->left->data, data_ref))
		{
			node->left = node->left->left;
			
		}
		else
		{
			/* code */
		}
    }
}