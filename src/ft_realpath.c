/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realpath.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 16:47:47 by abarthel          #+#    #+#             */
/*   Updated: 2019/07/09 20:49:43 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

#include "libft.h"

char	*ft_realpath(const char *path, char *resolved_path)
{
	char	*physical;
	char	*tmp;

	tmp = getcwd(NULL, 0);
	if (!resolved_path)
	{
		chdir(path);
		physical = getcwd(NULL, 0);
		chdir(tmp);
		free(tmp);
		return (physical);
	}
	else
	{
		chdir(path);
		physical = getcwd(NULL, 0);
		chdir(tmp);
		free(tmp);
		ft_strcpy(resolved_path, physical);
		free(physical);
		return (resolved_path);
	}
}
