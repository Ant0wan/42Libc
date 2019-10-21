/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_alloc_node.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 18:11:37 by abarthel          #+#    #+#             */
/*   Updated: 2019/10/21 18:11:38 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "libft.h"

int main(void)
{
	struct s_btree	*node;
	char		*str;

	str = ft_strdup("Hello Dear !\n");
	node = NULL;
	node = btree_create_node(str);
	if (node)
		printf("%s\n", node->data);
	else
		printf("Could not allocate\n");
	return (0);
}
