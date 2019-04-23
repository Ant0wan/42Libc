/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grisu.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 11:38:05 by abarthel          #+#    #+#             */
/*   Updated: 2019/04/23 12:31:27 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_printf.h"
#include "grisu.h"

#define D_1_LOG2_10 0.30102999566398114 //  = 1 / log(10) 
#define TEN7 10000000

t_dfp	cached_power(int k)
{
	return ((t_dfp){.f = 0, .e = 0});
}

t_dfp	minus(t_dfp x, t_dfp y)
{
	if (x.e == y.e && x.f >= y.f)
		return ((t_dfp){.f = x.f - y.f, .e = x.e});
	else
		return ((t_dfp){.f = 0, .e = 0});
}

t_dfp	multiply(t_dfp x, t_dfp y)
{
	t_dfp		r;
	uint64_t	a;
	uint64_t	b;
	uint64_t	c;
	uint64_t	d;
	uint64_t	ac;
	uint64_t	bc;
	uint64_t	ad;
	uint64_t	bd;
	uint64_t	tmp;
	uint64_t	M32;
   
	M32	= 0xFFFFFFFF;
   	a = x.f >> 32;
	b = x.f & M32;
	c = y.f >> 32;
	d = y.f & M32;
	ac = a * c;
	bc = b * c;
	ad = a * d;
	bd = b * d;
	tmp = (bd >> 32) + (ad & M32) + (bc & M32);
	tmp += 1U << 31; // Round
	r.f = ac + (ad>>32) + (bc>>32) + (tmp>>32);
	r.e= x.e + y.e + 64;
	return (r);
}

int ft_simple_ceil(double v)
{
	int k;
	
	k = (int)v;
    if (v < 0)
		return (k);
	return (v - k == 0 ? k : k + 1);
}

int		k_comp(int e, int alpha)
{
	return (ft_simple_ceil((alpha - e + 63) * D_1_LOG2_10));
}

void	cut(t_dfp D, uint32_t parts[3])
{ 
	parts[2] = (D.f % (TEN7 >> D.e)) << D.e;
	uint64_t tmp = D.f / (TEN7 >> D.e);
	parts[1] = tmp % TEN7;
	parts[0] = tmp / TEN7;
}

void	grisu(double v, char *buffer)
{
	t_dfp		w;
	uint32_t	ps[3];
	int 		q = 64;
	int			alpha = 0;
	int			gamma = 3;
	
//	w = normalize_t_dfp(double2t_dfp(v)); // have to build the functiosn that normalize and tranforme before double to struct.
//	int mk = k_comp(w.e + q, alpha, gamma);
	int mk = k_comp(w.e + q, alpha);
	t_dfp c_mk = cached_power(mk);
	t_dfp D = multiply(w, c_mk);
	cut(D, ps);
	ft_printf(buffer, "%u%07u%07ue%d", ps[0], ps[1], ps[2], -mk);
}
