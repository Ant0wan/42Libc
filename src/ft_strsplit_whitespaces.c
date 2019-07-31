/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit_whitespaces.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 12:58:26 by abarthel          #+#    #+#             */
/*   Updated: 2019/06/26 15:00:22 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

#include <string.h>
static int	count_words(char *str, char *whitespaces)
{
	char	*cpy;
	char	*beg;
	int	nb;

	nb = 0;
	cpy = ft_strdup(str);
	beg = cpy;
	if (strtok(str, whitespaces))
		++nb;
	else
	{
		ft_memdel((void**)&beg);
		return (nb);
	}
	while (strtok(NULL, whitespaces))
		++nb;
	ft_memdel((void**)&beg);
	return (nb);
}

char		**ft_strsplit_whitespaces(char *str)
{
	char	**tokens;
	char	*whitespaces;
	int	nb_words;

	tokens = NULL;
	whitespaces = " \t\n\v\f\r";
	nb_words = count_words(str, whitespaces);
	ft_printf(">nb:%d\n", nb_words);
	/*tokens = ft_tabmalloc(nb_words);*/
	return (tokens);
}
