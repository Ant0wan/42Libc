/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prs_tools.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 15:51:04 by abarthel          #+#    #+#             */
/*   Updated: 2019/03/01 14:49:48 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRS_TOOLS_H
# define PRS_TOOLS_H

# include "prs_struct.h"

extern t_ret	g_ret;

int		ft_atoi_special(const char *str);

int		ft_getif_dollar(const char *str);

void	ft_realloc_cpy(void);

#endif
