/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 14:39:26 by abarthel          #+#    #+#             */
/*   Updated: 2019/03/13 14:11:07 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

#include "prs_struct.h"
#include "retwriter.h"
#include "libft.h"

extern t_modifier	g_modifier;
extern _Bool		g_error;

//static inline char	*ft_give_space_to_write(size_t len)
//{
//	size_t	i;
//	char	*string;
//
//	i = -1;
//	if (len == 0)
//		++len;
//	if (!(string = (char*)malloc(sizeof(char) * (len + 1))))
//		g_error = 1;
//	else
//	{
//		while (++i < len)
//			string[i] = '0';
//		string[i] = 0;
//	}
//	return (string);
//}

static inline void				ft_cast_nbr(intmax_t *nb)
{
	if (g_modifier.hh)
		*nb = (signed char)(*nb);
	else if (g_modifier.h)
		*nb = (short)(*nb);
	else if (g_modifier.l)
		*nb = (long)(*nb);
	else if (g_modifier.ll)
		*nb = (long long)*nb;
	else if (g_modifier.j)
		*nb = (intmax_t)(*nb);
	else if (g_modifier.t)
		*nb = (ptrdiff_t)(*nb);
	else if (g_modifier.z)
		*nb = (size_t)(*nb);
	else
		*nb = (int)(*nb);
}

static inline unsigned short	ft_nbrlen(intmax_t nb)
{
	intmax_t		rest;
	unsigned short	len;

	len = 0;
	rest = nb;
	while (rest && ++ len)
		rest = (rest - (rest % 10)) / 10;
	if (nb < 0)
		++len;
	return (len);
}

#include <stdio.h>
void							ft_nbr(intmax_t nb)
{
	unsigned short	len;
	_Bool			negative;

	ft_cast_nbr(&nb);
	len = ft_nbrlen(nb);
	negative = 0;
	if (nb < 0)
		negative = 1;

/* here to introduce all the formatting */
	
/* malloc size */

/* fill the string */

/* retwriter */
//	retwriter(str, len);

/* free */
//	free(string);



//	printf("|%jd, %d\n", nb, negative);
//	printf("|%hu, %d\n", len, negative);
	
	


}
