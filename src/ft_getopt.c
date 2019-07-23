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
#include <unistd.h>
#include "libft.h"
#include "ft_getopt.h"

char	*g_optarg = NULL; /*opt parameter */
int		g_optind = 1;
int		g_opterr = 1;
int		g_optopt; /* error option only */

static int		parse_char(char *const *argv, char *c, const char *optstring, char *progname)
{
	int i;

	i = 0;
	while (optstring[i])
	{
		if (*c == optstring[i])
		{
			if (optstring[i + 1] == ':')
			{
				if (!c[1])
				{
					++g_optind;
					if (argv[g_optind])
					{
						g_optarg = argv[g_optind];
					}
				}
				else
				{
					g_optarg = &c[1];
					++g_optind;
				}
			}
			return (*c);
		}
		else
		{
			++i;
		}
	}
	g_optopt = *c;
	if (g_opterr)
	{
		ft_dprintf(STDERR_FILENO, "%s: invalid option -- '%c'\n", progname, *c);
	}
	return ('?');
}

static int		parse_optstring(char *const *argv, char *str, const char *optstring, char *progname)
{
	static int	i;
	int		ret;

	ret = 0;
	if (g_optarg)
	{
		i = 0;
		g_optarg = NULL;
	}
	ret = parse_char(argv, &str[i], optstring, progname);
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
	static char	*progname;
	int	ret;

	if (!progname)
	{
		if (argv)
		{
			progname = argv[0];
		}
	}
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
		ret = parse_optstring(argv, &argv[g_optind][1], optstring, progname);
	}
	return (ret);
/*	
	if (option : with no argument, then return optstring[0] which is : or ? therwise)
	{
		optopt = argv[optind][i];
	}
	 */
}
