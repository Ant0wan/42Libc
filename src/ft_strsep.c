/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsep.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 10:44:25 by abarthel          #+#    #+#             */
/*   Updated: 2019/07/16 11:40:16 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsep(char **stringp, const char *delim)
{
	static char		*token;
	static char		*next;

	if (!token && !next && *stringp && delim)
	{
		token = *stringp;
		next = ft_strstr(*stringp, delim);
	}
	else
	{
		token = next;
		if (token)
			next = ft_strstr(token, delim);
	}
	while (delim && *delim && next && *next)
	{
		++next;
		++delim;
	}
	return (token);
}
