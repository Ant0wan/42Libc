/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 18:11:02 by abarthel          #+#    #+#             */
/*   Updated: 2019/10/21 18:13:29 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BTREE_H
# define FT_BTREE_H

struct s_btree
{
	void		*data;
	struct s_btree	*left;
	struct s_btree	*right;
};

struct s_btree	*btree_create_node(void *data);
void			btree_apply_prefix(struct s_btree *root, void (*applyf)(void *));
void			btree_apply_infix(struct s_btree *root, void (*applyf)(void *));
void			btree_apply_postfix(struct s_btree *root, void (*applyf)(void *));
void			btree_insert_data(struct s_btree **root, void *data, int (*cmpf)(void *, void *));
void			*btree_search_data(struct s_btree *root, void *data_ref, int (*cmpf)(void *, void *));
int				btree_level_count(struct s_btree *root);

#endif
