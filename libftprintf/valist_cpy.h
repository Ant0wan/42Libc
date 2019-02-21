/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valist_cpy.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 18:08:32 by abarthel          #+#    #+#             */
/*   Updated: 2019/02/21 19:05:34 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VALIST_CPY_H
# define VALIST_CPY_H

# include <stdarg.h>

int	valist_cpy(va_list ap, va_list **array, const char *fmt);

#endif
