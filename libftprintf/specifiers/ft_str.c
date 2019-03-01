/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 18:19:57 by abarthel          #+#    #+#             */
/*   Updated: 2019/03/01 13:39:18 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prs_struct.h"
#include "retwriter.h"
#include "libft.h"

#include <stdio.h> // DEBUGG

void	ft_str(char *str)
{
	retwriter(str, ft_strlen(str));
}
