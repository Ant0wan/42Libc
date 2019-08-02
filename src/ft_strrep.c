/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrep.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 14:43:13 by abarthel          #+#    #+#             */
/*   Updated: 2019/08/01 18:26:38 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	count_tag_instances(char *dst, const char *tag)
{
	int	nb;

	nb = 0;
	while (*dst && (dst = ft_strstr(dst, tag)))
	{
		++nb;
		++dst;
	}
	return (nb);
}

static char	*malloc_new_line(char *dst, const char *src, const char *tag,
		int instances)
{
	char	*new;
	size_t	ldst;
	size_t	lsrc;
	size_t	ltag;

	ldst = ft_strlen(dst);
	lsrc = ft_strlen(src);
	ltag = ft_strlen(tag);
	if (!(new = (char*)ft_memalloc(sizeof(char) * (instances * (lsrc - ltag)
						+ ldst + 1))))
		return (NULL);
	else
		return (new);
}

static void	build_str(char *dst, const char *src, const char *tag, char *cpy)
{
	char	*ptr;
	char	*tag_cpy;
	char	*src_cpy;

	src_cpy = NULL;
	while (*dst || ptr)
	{
		if ((ptr = ft_strstr(dst, tag)))
			src_cpy = (char*)src;
		tag_cpy = (char*)tag;
		while (dst < ptr || (!ptr && *dst))
		{
			*cpy = *dst;
			++dst;
			++cpy;
		}
		while (*dst && *tag_cpy)
		{
			++dst;
			++tag_cpy;
		}
		while (*src_cpy)
		{
			*cpy = *src_cpy;
			++cpy;
			++src_cpy;
		}
		ptr = NULL;
	}
}

char		*ft_strrep(char **dst, const char *src, const char *tag)
{
	char	*cpy;
	int		instances;

	if (!tag || !src || !dst)
		return (NULL);
	instances = count_tag_instances(*dst, tag);
	if (!instances)
		return (*dst);
	if (!(cpy = malloc_new_line(*dst, src, tag, instances)))
		return (NULL);
	build_str(*dst, src, tag, cpy);
	free(*dst);
	*dst = cpy;
	return (*dst);
}
