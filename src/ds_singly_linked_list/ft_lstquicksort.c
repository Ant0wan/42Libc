#include "libft.h"

static t_list	*get_tail(t_list *elem)
{
    while (elem && elem->next)
        elem = elem->next;
    return (elem);
}


void		ft_lstquicksort(t_list **alst, void (*cmp)(void *, void *))
{
	*alst = quickSortRecur(*alst, get_tail(*alst));
}
