/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fgetline.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 16:48:52 by abarthel          #+#    #+#             */
/*   Updated: 2019/06/27 17:54:25 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "libft.h"

static inline char	ft_fgetch(const int fd)
{
	int		ret;
	char	ch;

	ret = (int)read(fd, (void*)&ch, 1);
	if (ret == -1)
	{
		return (-1);
	}
	else
	{
		return (ch);
	}
}

int					ft_fgetline(const int fd, char **line, char c)
{
	static size_t	len;
	int				ret;

	ret = 0;
	*line = NULL;
	while (1)
	{
		len += 128;
		if (*line)
			free(*line);
		*line = (char*)ft_memalloc(len);
		if (*line == NULL)
			return (-1);
		while (1)
		{
			**line = ft_fgetch(fd);
			if (**line == c)
				continue ;
			++line;
			++ret;
		}
	}
	return (ret);
}
