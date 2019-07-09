/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perror.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 16:46:06 by abarthel          #+#    #+#             */
/*   Updated: 2019/07/09 19:52:13 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include "libft.h"
#include "ft_errno.h"

void	ft_perror(const char *s)
{
	if (!s)
	{
		ft_dprintf(STDERR_FILENO, "%s\n", ft_strerror(g_errno));
	}
	else
	{
		ft_dprintf(STDERR_FILENO, "%s: %s\n", s, ft_strerror(g_errno));
	}
}
