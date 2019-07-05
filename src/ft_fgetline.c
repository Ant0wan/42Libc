/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fgetline.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 16:48:52 by abarthel          #+#    #+#             */
/*   Updated: 2019/06/27 22:01:54 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "libft.h"

static __inline__ char	ft_fgetch(const int fd)
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
	static int	len;
	int			ret;
	char		tmp;
	char		*new_line;

	ret = 0;
	new_line = NULL;
	while (1)
	{
		len += 128;
		new_line = (char*)ft_memalloc(len);
		if (!new_line)
			return (-1);
		if (len && *line && new_line)
			new_line = ft_strncpy(new_line, *line, len);
		ft_memdel((void**)*line);
		*line = new_line;
		while (ret < len)
		{
			tmp = ft_fgetch(fd);
			if (tmp == c || !tmp)
			{
				(*line)[ret] = 0;
				return (ret);
			}
			(*line)[ret] = tmp;
			++ret;
		}
	}
	return (ret);
}
