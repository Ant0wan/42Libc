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

#include <libft.h>
#include <ft_getopt.h>

char	*g_optarg; /*opt parameter */
int		g_optind = 1;
int		g_opterr = 1;
int		g_optopt; /* error option only */



static int	parse_arg(char *argv, const char *optstring)
{
	static char	*nextchar;
	static int	i;

	(void)optstring;
	ft_printf("%s\n", argv);
/*	else if (optstring[i] == nextchar)
	{
		nextchar = ++argv;
	} */
	++i;
	nextchar = &argv[i];
	if (!*nextchar)
	{
		++g_optind;
		return (0);
	}
	g_optopt = *nextchar;
	return (*nextchar);
}

int			ft_getopt(int argc, char *const argv[], const char *optstring)
{
	int	ret;

	ret = -1;
	if (!optstring || g_optind >= argc || !argv[g_optind]
			|| *(argv[g_optind]) != '-' || !ft_strcmp((argv[g_optind]), "-"))
	{
		return (-1);
	}
	else if (!ft_strcmp((argv[g_optind]), "--"))
	{
		++g_optind;
		return (-1);
	}
	if ((ret = parse_arg(argv[g_optind], optstring)) != -1)
	{
		return (ret);
	}
	

/*	treatment;
	if (element in  argv[] not an option in optstring)
	{
		return ('?');
	}
	if (option : with no argument, then return optstring[0] which is : or ? therwise)
	{
		optopt = argv[optind][i];
	}
	if (last_opt)
	{
		optind = 1;
		return (-1);
	} */
	return (0); /* to delete it */
}
