/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prefix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 14:27:24 by abarthel          #+#    #+#             */
/*   Updated: 2019/04/04 15:01:35 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "prefix.h"

t_prefix	g_prefix =
{.base = 10, .size = 0, .prefix = NULL, .ch_base = "0123456789ABCDEF"};
