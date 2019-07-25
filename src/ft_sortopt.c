/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sortopt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 13:16:06 by abarthel          #+#    #+#             */
/*   Updated: 2019/07/25 13:16:22 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_argcmp(char *s1, char *s2)
{
	if (s1 && s2)
	{
		if (*s1 == '-' && *s2 != '-')
			return (1);
		return (0);
	}
	return (0);
}

void		ft_sortopt(int argc, char **argv)
{
	char	*tmp;
	int	diff;
	int	i;

	tmp = NULL;
	diff = 1;
	while (diff)
	{
		diff = 0;
		i = 2;
		while (i < argc)
		{
			if (ft_argcmp(argv[i], argv[i - 1]))
			{
				diff |= 1;
				tmp = argv[i - 1];
				argv[i - 1] = argv[i];
				argv[i] = tmp;
			}
			++i;
		}
	}
}
