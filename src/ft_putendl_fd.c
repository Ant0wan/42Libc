/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 08:19:06 by abarthel          #+#    #+#             */
/*   Updated: 2019/06/26 14:57:53 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <unistd.h>

void	ft_putendl_fd(char const *s, int fd)
{
	if (s && *s)
		write(fd, s, ft_strlen(s));
	if (s)
		write(fd, "\n", sizeof(char));
}
