/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 17:27:52 by abarthel          #+#    #+#             */
/*   Updated: 2019/07/17 20:04:14 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

char	**ft_tabcpy(char **table)
{
	char	**tab_cpy;
	int		nb;

	tab_cpy = NULL;
	nb = 0;
	while (table[nb])
	{
		++nb;
	}
	tab_cpy = (char**)ft_memalloc(sizeof(char**) * (nb + 1));
	--nb;
	while (nb >= 0)
	{
		tab_cpy[nb] = ft_strdup(table[nb]);
		--nb;
	}
	return (tab_cpy);
}
