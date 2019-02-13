/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vdprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 14:57:47 by abarthel          #+#    #+#             */
/*   Updated: 2019/02/13 15:06:26 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_VDPRINTF_H
# define FT_VDPRINTF_H

# include <stdarg.h>

int	ft_vdprintf(int fd, const char *restrict format, va_list ap);

#endif
