/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getopt.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 13:47:26 by abarthel          #+#    #+#             */
/*   Updated: 2019/07/22 19:48:33 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  https://www.unix.com/man-page/posix/3p/getopt/
*/

#include <stdlib.h>
#include "libft.h"
#include "ft_getopt.h"

char	*g_optarg = NULL; /*opt parameter */
int		g_optind = 1;
int		g_opterr = 1;
int		g_optopt; /* error option only */

static int		parse_char(char *c, const char *optstring)
{
	int i;

	i = 0;
	ft_printf("\n>%s", c);
	while (optstring[i])
	{
		if (*c == optstring[i])
		{
			if (optstring[i + 1] == ':')
			{
				g_optarg = &c[1];
				++g_optind;
			}
			return (*c);
		}
		else
		{
			++i;
		}
	}
	g_optopt = *c;
	return ('?');
}

static int		parse_optstring(char *str, const char *optstring)
{
	static int	i;
	int		ret;

	ret = 0;
	if (g_optarg)
	{
		i = 0;
		g_optarg = NULL;
	}
	ret = parse_char(&str[i], optstring);
	++i;
	if (!str[i])
	{
		i = 0;
		++g_optind;
	}
	return (ret);
}

int			ft_getopt(int argc, char *const argv[], const char *optstring)
{
	int	ret;

	ret = 0;
	if (!optstring || g_optind >= argc || !argv[g_optind]
			|| *(argv[g_optind]) != '-' || !ft_strcmp((argv[g_optind]), "-"))
	{
		g_optarg = NULL;
		return (-1);
	}
	else if (!ft_strcmp((argv[g_optind]), "--"))
	{
		g_optarg = NULL;
		++g_optind;
		return (-1);
	}
	if (argv[g_optind] && argv[g_optind][0])
	{
		ret = parse_optstring(&argv[g_optind][1], optstring);
	}
	return (ret);
/*	
	if (option : with no argument, then return optstring[0] which is : or ? therwise)
	{
		optopt = argv[optind][i];
	}
	if (last_opt)
	{
		optind = 1;
		return (-1);
	} */
}
