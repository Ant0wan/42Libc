/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_tools.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/21 16:53:28 by abarthel          #+#    #+#             */
/*   Updated: 2019/03/21 16:55:49 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORMAT_TOOLS_H
# define FORMAT_TOOLS_H

void    ft_format(intmax_t nb, char *str, int size,
        int len, _Bool negative) __attribute__((always_inline));

int		ft_get_object_size(int len, _Bool negative)
	__attribute__((always_inline));

#endif
