/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 14:09:58 by abarthel          #+#    #+#             */
/*   Updated: 2019/10/22 14:15:20 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STACK_H
# define FT_STACK_H

struct	s_stack
{
	struct s_stack	*previous;
	void		*data;	
};

struct s_stack	*stack_create_element(void *data);
struct s_stack	*stack_initialize(void *data);
void			stack_push(struct s_stack **top, void *data);
void			stack_pop(struct s_stack **top, void (*del_data)(void *));
void			*stack_peek(struct s_stack **top);
void			stack_swap(struct s_stack **top);
void			stack_delete(struct s_stack **top, void (*del_data)(void *));
/*void			stack_rotate(struct s_stack **top);
*/_Bool			stack_isempty(struct s_stack **top);

#endif
