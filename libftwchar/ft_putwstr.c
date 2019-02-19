/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 18:25:44 by abarthel          #+#    #+#             */
/*   Updated: 2019/02/19 14:48:03 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_wchar.h"

#include <stdlib.h>
#include <unistd.h>

#define RET_ERROR -1

int	ft_putwstr(const wchar_t *restrict ws)
{
	int		ret;
	size_t	i;

	i = 0;
	if (ws && *ws)
	{
		while (ws[i])
		{
			if ((ret = ft_fputwc(ws[i], STDOUT_FILENO)) == RET_ERROR)
				return (ret);
			else
				++i;
		}
		return (ret);
	}
	return (RET_ERROR);
}
