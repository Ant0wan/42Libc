/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specifiers.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 17:44:58 by abarthel          #+#    #+#             */
/*   Updated: 2019/03/22 12:45:00 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPECIFIERS_H
# define SPECIFIERS_H

# include <stdlib.h>

void	ft_chr(wchar_t wc);

void	ft_wchr(wchar_t wc);

void	ft_str(char *str);

void	ft_wstr(wchar_t *str);

void	ft_n(intmax_t *ptr);

void	ft_nbr(intmax_t nb);

void	ft_unbr(uintmax_t nb);

void	ft_uold(uintmax_t nb);

void	ft_x(uintmax_t nb);

#endif
