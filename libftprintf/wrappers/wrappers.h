/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrappers.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 10:36:23 by abarthel          #+#    #+#             */
/*   Updated: 2019/03/11 10:32:24 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRAPPERS_H
# define WRAPPERS_H

void	passive_wrap(void *(*f)());

void	diu_wrap(void *(*f)());

void	cs_wrap(void *(*f)());

#endif
