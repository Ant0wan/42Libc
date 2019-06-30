/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 14:09:45 by abarthel          #+#    #+#             */
/*   Updated: 2019/06/27 19:33:52 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

extern inline void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = s;
	while (n)
	{
		*ptr++ = 0;
		--n;
	}
}
