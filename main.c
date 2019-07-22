/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 20:50:00 by abarthel          #+#    #+#             */
/*   Updated: 2019/07/22 18:35:17 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <assert.h>
#include "libft.h"
#include "ft_getopt.h"
#include <getopt.h>

int main(int argc, char **argv)
{
	int c;
	int ret;
	while ((c = getopt(argc, argv, ":Rlartn:c:")) != -1)
	{
		ret = ft_getopt(argc, argv, ":Rlartn:c:");
		printf("ft_g:%d, g_optopt:%c, g_optind:%d\n", ret, g_optopt, g_optind);
		printf("libc:%d,   optopt:%c,   optind:%d\n", c, optopt, optind);
	}
	
	return (0);
}
