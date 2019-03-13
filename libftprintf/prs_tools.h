/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prs_tools.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 15:51:04 by abarthel          #+#    #+#             */
/*   Updated: 2019/03/13 11:26:24 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRS_TOOLS_H
# define PRS_TOOLS_H

# include "prs_struct.h"

extern t_ret	g_ret;

void	reset_globals(void) __attribute__((always_inline));

int		ft_atoi_special(const char *str) __attribute__((always_inline));

int		ft_getif_dollar(const char *str) __attribute__((always_inline));

void	ft_expand_ret(int size) __attribute__((always_inline));

void	wrapper(void *(*f)(), va_list ap) __attribute__((always_inline));

#endif
