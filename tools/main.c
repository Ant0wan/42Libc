#include "libft.h"
#include "ft_getopt.h"
#include "ft_errno.h"
#include "ft_wchar.h"

#include <wchar.h>
#include <errno.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <string.h>
#include <strings.h>

int	main(int argc, char **argv, char **envp)
{
	(void)argc;
	(void)argv;
	(void)envp;

/* Test GETOPT */
	char	ft_getoptret = 0;
	char	getoptret = 0;
	int	getopt_argc = 5;
	char	*getopt_argv[6];
	char	*str0_opt;
	char	str1_opt[] = "-Rarlt";
	char	str2_opt[] = "-n5";
	char	str3_opt[] = "-c5OK";
	char	str4_opt[] = "totoargument";
	char	str5_opt[] = "--";
	int	opt_i;

	opt_i = 0;
	str0_opt = argv[0];
	getopt_argv[0] = str0_opt;
	getopt_argv[1] = str1_opt;
	getopt_argv[2] = str2_opt;
	getopt_argv[3] = str3_opt;
	getopt_argv[4] = str4_opt;
	getopt_argv[5] = str5_opt;
	while (opt_i < 6 && (ft_getoptret || getoptret) != -1)
	{
		ft_getoptret = (char)printf("%s\n", getopt_argv[opt_i]);
		getoptret = (char)printf("%s\n", getopt_argv[opt_i]);
		++opt_i;
		/*
		ft_getoptret = ft_getopt();
		getoptret = getopt();
		*/
	}

	
	return (0);
}
