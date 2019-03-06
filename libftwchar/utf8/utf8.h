/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utf8.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 18:53:37 by abarthel          #+#    #+#             */
/*   Updated: 2019/03/06 12:11:56 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTF8_H
# define UTF8_H

# include <stdlib.h>

int	utf8_encoder(wchar_t *wc) __attribute__((always_inline));

#endif
