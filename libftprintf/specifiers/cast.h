/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cast.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 14:52:15 by abarthel          #+#    #+#             */
/*   Updated: 2019/04/05 14:53:34 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAST_H
# define CAST_H

# include <stdlib.h>

void	ft_cast_nbr(intmax_t *nb) __attribute((always_inline));

void	ft_cast_unbr(uintmax_t *nb) __attribute((always_inline));

#endif
