/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrappers.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 10:36:23 by abarthel          #+#    #+#             */
/*   Updated: 2019/03/11 13:10:37 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRAPPERS_H
# define WRAPPERS_H

void	passive_wrap(void *(*f)());

void	di_wrap(void *(*f)());

void	cs_wrap(void *(*f)());

#endif
