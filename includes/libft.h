/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 11:55:45 by abarthel          #+#    #+#             */
/*   Updated: 2019/01/21 16:55:33 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>

void			ft_bzero(void *s, size_t n);

int				ft_strcmp(const char *s1, const char *s2);

int				ft_strncmp(const char *s1, const char *s2, size_t n);

size_t			ft_strlen(const char *s);

void			*ft_memset(void	*b, int c, size_t len);

char			*ft_strchr(const char *s, int c);

void			ft_putchar_fd(char c, int fd);

void			ft_putstr_fd(char const *s, int fd);

void			*ft_memalloc(size_t size);

char			*ft_strnew(size_t size);

char			*ft_strjoin(char const *s1, char const *s2);

#endif
