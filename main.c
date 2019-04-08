/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 17:12:52 by abarthel          #+#    #+#             */
/*   Updated: 2019/04/08 14:38:36 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"
#include <limits.h>
#include "prs_struct.h"

extern t_options	g_options;

int main(void)
{
	long long k;
	int		nb;
	char	c;
	nb = 654654654;
	c = 'W';
	k = 545454564548665;
	ft_printf("%#4llx\n", k);
	printf("%#4llx\n", k);
	ft_printf(">%25.0llX\n", LLONG_MAX);
	printf(">%25.0llX\n", LLONG_MAX);
	ft_printf("%42llo\n", ULLONG_MAX);
	dprintf(2,"%42llo\n", ULLONG_MAX);
	ft_printf("%42lld\n", ULLONG_MAX);
	dprintf(2,"%42lld\n", ULLONG_MAX);
	ft_printf("%42llu\n", ULLONG_MAX);
	dprintf(2,"%42llu\n", ULLONG_MAX);
	ft_printf("%42llx\n", ULLONG_MAX);
	dprintf(2,"%42llx\n", ULLONG_MAX);
	ft_printf("%42llX\n", ULLONG_MAX);
	dprintf(2,"%42llX\n", ULLONG_MAX);
	ft_printf("%5hhd\n", c);
	dprintf(2,"%5hhd\n", c);
	ft_printf("%-15hhd\n", c);
	dprintf(2,"%-15hhd\n", c);
	ft_printf("%-5hhd\n", c);
	dprintf(2,"%-5hhd\n", c);
	ft_printf("%42hhd\n", c);
	dprintf(2,"%42hhd\n", c);
	ft_printf("%-18hhd\n", c);
	dprintf(2,"%-18hhd\n", c);
	ft_printf("%42hhd\n", c);
	dprintf(2,"%42hhd\n", c);

	return (0);
}
