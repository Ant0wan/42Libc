/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 14:27:49 by abarthel          #+#    #+#             */
/*   Updated: 2019/04/19 10:22:17 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>

#include "ft_vdprintf.h"

// REVOIR les includes minimums et les linkage units des globales
// revoir le makefile
// voir pour des flags d'optimisation de la compilation des lib
// rediger la doc de chaque lib README.md
// rediger la page man de ft_printf
// rediger la doc du projet
// rediger les graph d'algo de printf

int		ft_printf(const char *restrict format, ...)
{
	va_list ap;
	int		ret;

	va_start(ap, format);
	ret = ft_vdprintf(STDOUT_FILENO, format, ap);
	va_end(ap);
	return (ret);
}
