/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 14:34:41 by abarthel          #+#    #+#             */
/*   Updated: 2019/04/05 15:23:01 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORMAT_H
# define FORMAT_H

void	format(intmax_t nb) __attribute((always_inline));

unsigned short	ft_nbrlen(intmax_t nb) __attribute((always_inline));

unsigned short	ft_unbrlen(uintmax_t nb) __attribute((always_inline));

#endif
