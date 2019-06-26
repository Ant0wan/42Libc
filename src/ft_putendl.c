/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 07:05:04 by abarthel          #+#    #+#             */
/*   Updated: 2019/06/26 14:57:19 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <unistd.h>

void	ft_putendl(char const *s)
{
	if (s && *s)
		write(STDOUT_FILENO, s, ft_strlen(s));
	if (s)
		write(STDOUT_FILENO, "\n", sizeof(char));
}
