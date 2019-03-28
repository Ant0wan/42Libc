/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prs_get.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 12:24:17 by abarthel          #+#    #+#             */
/*   Updated: 2019/03/28 13:31:59 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRS_GET_H
# define PRS_GET_H

# include <stdarg.h>

void	get_precision(const char *format, va_list ap) __attribute__
		((always_inline));

void	get_flags(const char *format, _Bool *specifier) __attribute__
		((always_inline));

_Bool	get_modifier(const char *format) __attribute__((always_inline));

void	ft_get_width_or_dollar(const char *str, _Bool dot) __attribute__
		((always_inline));

#endif
