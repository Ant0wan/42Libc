/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specifiers.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 17:44:58 by abarthel          #+#    #+#             */
/*   Updated: 2019/03/14 18:13:30 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPECIFIERS_H
# define SPECIFIERS_H

void	ft_str(char *str);

void	ft_nbr(intmax_t nb);

void	ft_format(intmax_t nb, char *str, int size,
		int len, _Bool negative) __attribute__((always_inline));

#endif
