/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getopt.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 13:47:26 by abarthel          #+#    #+#             */
/*   Updated: 2019/07/25 11:27:49 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  https://www.unix.com/man-page/posix/3p/getopt/
*/

#include <stdlib.h>
#include <unistd.h>
#include "libft.h"
#include "ft_getopt.h"

char	*g_optarg = NULL;
int		g_optind = 1;
int		g_opterr = 1;
int		g_optopt;

static int	parse_char(int argc, char *const *argv, char *c,
			const char *optstring)
{
	int i;

	i = 0;
	while (optstring[i])
	{
		if (optstring[i] == ':')
		{
			++i;
			continue ;
		}
		if (*c == optstring[i])
		{
			if (optstring[i + 1] == ':')
			{
				if (!c[1])
				{
					++g_optind;
					if (g_optind < argc)
						g_optarg = argv[g_optind];
					else
					{
						g_optopt = *c;
						--g_optind;
						if (*optstring == ':')
							return (':');
						else
						{
							if (g_opterr)
								ft_dprintf(STDERR_FILENO, "%s: option requires an argument -- '%c'\n", argv[0], *c);
							return ('?');
						}
					}
				}
				else
					g_optarg = &c[1];
				++g_optind;
			}
			return (*c);
		}
		else
			++i;
	}
	g_optopt = *c;
	if (g_opterr && *optstring != ':')
		ft_dprintf(STDERR_FILENO, "%s: invalid option -- '%c'\n", argv[0], *c);
	return ('?');
}

static int	parse_optstring(int argc, char *const *argv, const char *optstring)
{
	static int	i = 1;
	int			ret;

	ret = 0;
	if (!g_optind) /* in case of reset */
	{
		i = 1;
		return (0);
	}
	if (g_optarg) /* previsou was opt with arg */
	{
		i = 1;
		g_optarg = NULL;
	}
	ret = parse_char(argc, argv, &argv[g_optind][i], optstring);
	++i;
	if (argv[g_optind] && !argv[g_optind][i]) /* go to next opt when scan done for [i] */
	{
		i = 1;
		if (!g_optarg)
			++g_optind;
	}
	return (ret);
}

static void	reset_getopt(void)
{
	parse_optstring(0, NULL, NULL);
	g_optind = 1;
}

int			ft_getopt(int argc, char *const argv[], const char *optstring)
{
	int		ret;

	ret = 0;
	ft_sortopt(argc, (char**)argv, optstring);
	if (!g_optind)
		reset_getopt();
	if (!optstring || g_optind >= argc || !argv[g_optind] || *(argv[g_optind]) != '-'
			|| !ft_strcmp((argv[g_optind]), "-"))
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
	else if (argv[g_optind] && *(argv[g_optind]))
		ret = parse_optstring(argc, argv, optstring);
	return (ret);
}
