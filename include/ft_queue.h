/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_queue.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 13:06:51 by abarthel          #+#    #+#             */
/*   Updated: 2019/10/23 20:48:07 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_QUEUE_H
# define FT_QUEUE_H

struct s_qnode
{
	void		*data;
	struct s_qnode	*previous;
};

struct s_queue
{
	struct s_qnode	*rear;
	struct s_qnode	*front;
};

struct s_qnode	*queue_create_node(void *data);
void			*queue_front(struct s_queue *queue);
void			*queue_dequeue(struct s_qnode **front, void (*del)(void *));
void			queue_apply_to_each(struct s_qnode *pfront, void (*f)());
void			queue_delete(struct s_queue *queue, void (*del)());
void			queue_enqueue(struct s_queue *queue, void *data);
void			queue_sort(struct s_queue *queue, int (*cmp)());
void			queue_reverse(struct s_queue *queue);

#endif
