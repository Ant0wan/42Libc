/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perror.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 16:46:06 by abarthel          #+#    #+#             */
/*   Updated: 2019/07/09 18:13:15 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include "libft.h"
#include "ft_errno.h"

void	ft_perror(const char *s)
{
	char	*error_msg;

	error_msg = ft_strerror(g_errno);
	if (!s)
	{
		write(STDERR_FILENO, error_msg, ft_strlen(error_msg));
	}
	else
	{
		write(STDERR_FILENO, s, ft_strlen(s));
		write(STDERR_FILENO, ": ", 2);
		write(STDERR_FILENO, error_msg, ft_strlen(error_msg));
	}
}
