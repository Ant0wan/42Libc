/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 17:27:50 by abarthel          #+#    #+#             */
/*   Updated: 2019/02/15 18:43:56 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dispatcher.h"
#include <stdio.h>

int main(void)
{
	void	(*f)();

	f = dispatcher("o");
	printf("%d\n", (int)f);
	f = dispatcher("d");
	printf("%d\n", (int)f);
	if (!f)
		return (0);
	else
		f(200);
	return (0);
}
