/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fputws.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 18:25:44 by abarthel          #+#    #+#             */
/*   Updated: 2019/02/02 14:30:20 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



// KO !!!!!!!!!!!!!!!!!!!!!!!1


#include "ft_wchar.h"

#include <stdlib.h>

#define RET_ERROR -1

int	ft_fputws(const wchar_t *restrict ws, int fd)
{
	int		ret;
	size_t	i;

	i = 0;
	if (ws && *ws)
	{
		while (ws[i])
		{
			if ((ret = ft_fputwc(ws[i], fd)) == RET_ERROR)
				return (ret);
			else
				++i;
		}
		return (ret);
	}
	return (RET_ERROR);
}
