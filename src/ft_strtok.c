/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 10:44:25 by abarthel          #+#    #+#             */
/*   Updated: 2019/07/16 14:31:33 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static _Bool	isdelim(char c, const char *delim)
{
	while (*delim)
	{
		if (*delim == c)
			return (1);
		++delim;
	}
	return (0);
}

char		*ft_strtok(char *str, const char *delim)
{
	static char	*s;
	char		*token;

	if (str)
		s = str;
	if (*s == '\0')
		return (NULL);
	token = s;
	while (!isdelim(*s, delim))
	{
		if (*s == '\0')
			return (NULL);

		++s;
	}
	while (isdelim(*s, delim))
	{
		*s = '\0';
		++s;
	}
	return (token);
}
