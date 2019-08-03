/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_alnumlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 13:35:20 by abarthel          #+#    #+#             */
/*   Updated: 2019/02/13 15:08:48 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

size_t	ft_alnumlen(const char *s)
{
	size_t	len;

	len = 0;
	if (s)
	{
		while (s[len] && (ft_isalnum((char)s[len]) || s[len] == '_'))
		{
			++len;
		}
	}
	return (len);
}
