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

void    btree_remove_data(struct s_btree **root, void *data_ref, int (*cmpf)(void *, void *), void (*del)(void *))
{
	void    *node;

    while ((node = btree_search_data(*root, data_ref, cmpf)))
    {
        btree_free_node(node, del);
    }
}