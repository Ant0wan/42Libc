/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 17:50:36 by abarthel          #+#    #+#             */
/*   Updated: 2019/06/26 15:14:11 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_tables(char **tab)
{
	size_t	i;

	i = 0;
	while (tab[i])
	{
		if (tab[i][0])
		{
			ft_putendl(tab[i]);
		}
		++i;
	}
}
