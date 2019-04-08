/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specifiers.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 17:44:58 by abarthel          #+#    #+#             */
/*   Updated: 2019/04/08 15:04:30 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPECIFIERS_H
# define SPECIFIERS_H

# include <stdlib.h>

//void	ft_chr(wchar_t wc);

//void	ft_wchr(wchar_t wc);

//void	ft_str(char *str);

//void	ft_wstr(wchar_t *str);

void	ft_n(int *ptr);

void	ft_nbr(intmax_t nb);

void	ft_unbr(uintmax_t nb);

void	ft_lhexa(uintmax_t nb);

void	ft_uhexa(uintmax_t nb);

void	ft_octal(uintmax_t nb);

void	ft_b(uintmax_t nb);

void	ft_ld(intmax_t nb);

void	ft_lo(uintmax_t nb);

//void	ft_xlow(uintmax_t nb);

//void	ft_xupp(uintmax_t nb);

//void	ft_o(uintmax_t nb);

void	ft_p(void *ptr);

#endif
