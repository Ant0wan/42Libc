/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 14:47:48 by abarthel          #+#    #+#             */
/*   Updated: 2019/08/01 16:47:22 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int main(void)
{
	char	*dst;
	char	*expansion;
	char	*after;

	expansion = "abarthel";

	dst = ft_strdup("df");
//	printf("%s\n", after);
	after = ft_strrep(&dst, expansion, "$LOGNAME");

	dst = ft_strdup("/home/$LOGNAME/sfsfasdfasf/safasdf/$LOGNAME/endf");
//	printf("%s\n", after);
	after = ft_strrep(&dst, expansion, "$LOGNAME");

	dst = ft_strdup("$LOGNAME");
//	printf("%s\n", after);
	after = ft_strrep(&dst, expansion, "$LOGNAME");
	return (0);
}
