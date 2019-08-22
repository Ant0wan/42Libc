/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolvepath.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 16:47:47 by abarthel          #+#    #+#             */
/*   Updated: 2019/07/09 20:49:43 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_errno.h"
#include "libft.h"

static void	clean_end(char *str)
{
	char	*beg;

	beg = str;
	while (*str)
		++str;
	if ((str - beg) > 1)
	{
		if (str[-1] == '/')
			str[-1] = '\0';
	}
	else if ((str - beg) == 0)
	{
		*str = '/';
		*(str + 1) = '\0';
	}
}

static void	clean_start(char *str)
{
	size_t	i;
	char	*ptr;

	i = 0;
	(void)i;
	while ((ptr = ft_strstr(str, "//")))
	{
		ft_memmove(ptr, (ptr + 1), ft_strlen((ptr + 1)));
		while (*(ptr + 1))
			++ptr;
		while (*ptr)
		{
			*ptr = '\0';
			++ptr;
		}
	}
}
static void	currentdir_trim(char *str)
{
	size_t	i;
	char	*ptr;

	i = 0;
	(void)i;
	while ((ptr = ft_strstr(str, "/.")))
	{
		if (*(ptr + 2) == '/')
			ft_memmove(ptr, (ptr + 2), ft_strlen((ptr + 2)));
		while (*(ptr + 2))
			++ptr;
		while (*ptr)
		{
			*ptr = '\0';
			++ptr;
		}
	}
}

char	*ft_resolvepath(char *str)
{
	if (!str || *str != '/')
	{
		g_errno = E_EINVAL;
		return (NULL);
	}
	clean_start(str);
	currentdir_trim(str);
	clean_end(str);
	return (str);
}
