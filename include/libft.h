/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 11:55:45 by abarthel          #+#    #+#             */
/*   Updated: 2020/06/26 20:55:50 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stdarg.h>
# include <stdint.h>

void			ft_bzero(void *s, size_t n) __attribute__
				((nonnull(1)));

int				ft_isblank(int c);

int				ft_isalpha(int c);

int				ft_isdigit(int c);

int				ft_isalnum(int c);

int				ft_isascii(int c);

int				ft_isspace(int c);

int				ft_isprint(int c);

int				ft_ispunct(int c);

int				ft_toupper(int c);

int				ft_tolower(int c);

int				ft_atoi(const char *str) __attribute__((nonnull(1)));

int				ft_strcmp(const char *s1, const char *s2) __attribute__
				((nonnull(1,2)));

int				ft_strcasecmp(const char *s1, const char *s2) __attribute__
				((nonnull(1,2)));

int				ft_strncmp(const char *s1, const char *s2,
				size_t n) __attribute__((nonnull(1,2)));

int				ft_memcmp(const void *s1, const void *s2,
				size_t n) __attribute__((nonnull(1,2)));

size_t			ft_strlen(const char *s) __attribute__((nonnull(1)));

int				ft_numlen(unsigned int nb);

size_t			ft_strlcat(char *dst, const char *src,
				size_t size) __attribute__((nonnull(1,2)));

void			*ft_memset(void	*b, int c, size_t len) __attribute__
				((nonnull(1)));

void			*ft_memcpy(void *dst, const void *src, size_t n) __attribute__
				((nonnull(1,2)));

void			*ft_memccpy(void *dst, const void *src, int c,
				size_t n) __attribute__((nonnull(1,2)));

void			*ft_memmove(void *dst, const void *src,
				size_t len) __attribute__((nonnull(1,2)));

void			*ft_memchr(const void *s, int c, size_t n) __attribute__
				((nonnull(1)));

char			*ft_strstr(const char *haystack, const char
				*needle) __attribute__((nonnull(1,2)));

char			*ft_strcat(char *s1, const char *s2) __attribute__
				((nonnull(1,2)));

char			*ft_strncat(char *s1, const char *s2, size_t n) __attribute__
				((nonnull(1,2)));

char			*ft_strcpy(char *dst, const char *src) __attribute__
				((nonnull(1,2)));

char			*ft_strendcpy(char *dst, const char *src) __attribute__
				((nonnull(1,2)));

char			*ft_strncpy(char *dst, const char *src,
				size_t len) __attribute__((nonnull(1,2)));

char			*ft_strdup(const char *s1) __attribute__
				((nonnull(1)));

char			*ft_strndup(const char *s1, size_t len) __attribute__
				((nonnull(1)));

char			*ft_strnstr(const char *haystack, const char *neddle,
				size_t len) __attribute__((nonnull(1,2)));

char			*ft_strchr(const char *s, int c) __attribute__
				((nonnull(1)));

char			*ft_strrchr(const char *s, int c) __attribute__
				((nonnull(1)));

char			*ft_strrep(char **dst, const char *content,
				const char *expansion);

void			ft_memdel(void **ap);

void			ft_strdel(char **as) __attribute__((nonnull(1)));

void			ft_strclr(char *s);

void			ft_striter(char *s, void (*f)(char *));

void			ft_striteri(char *s, void (*f)(unsigned int, char *));

void			ft_putchar(char c);

void			ft_putstr(char const *s);

void			ft_putendl(char const *s);

void			ft_putnbr(int n);

void			ft_putuint(unsigned int n);

void			ft_putuint_octal(unsigned int nbr);

void			ft_putllnb(int64_t n);

void			ft_putnbr_base(int nbr, char *base);

void			ft_putnbr_lowhexa(int nbr);

void			ft_putnbr_upphexa(int nbr);

void			ft_putnbr_octal(int nbr);

void			ft_putaddr(void **ptr);

void			ft_putchar_fd(char c, int fd);

void			ft_putstr_fd(char const *s, int fd);

void			ft_putendl_fd(char const *s, int fd);

void			ft_putnbr_fd(int n, int fd);

int				ft_strequ(char const *s1, char const *s2) __attribute__
				((nonnull(1)));

int				ft_strnequ(char const *s1, char const *s2, size_t n);

void			*ft_memalloc(size_t size);

void			**ft_tabmalloc(size_t size);

char			*ft_strnew(size_t size);

char			*ft_strmap(char const *s, char (*f)(char));

char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));

char			*ft_strsep(char **stringp, const char *delim);

char			*ft_strtok(char *str, const char *delim);

char			*ft_strsub(char const *s, unsigned int start, size_t len);

char			*ft_strjoin(char const *s1, char const *s2);

char			*ft_strtrim(char const *s);

char			*ft_itoa(int n);

char			**ft_strsplit(char const *s, char c) __attribute__
				((nonnull(1)));

char			**ft_strsplit_whitespaces(char *str) __attribute__
				((nonnull(1)));

typedef struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;

void			ft_lstdelone(t_list **alst, void (*del)(void *, size_t));

void			ft_lstdel(t_list **alst, void (*del)(void *, size_t));

void			ft_lstadd(t_list **alst, t_list *new);

void			ft_lstiter(t_list *lst, void (*f)(t_list *elem));

t_list			*ft_lstnew(void const *content, size_t content_size);

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

void			ft_print_tables(char **tables);

int				ft_str_is_alpha(char *s) __attribute__((nonnull(1)));

int				ft_str_is_numeric(char *s) __attribute__((nonnull(1)));

int				ft_str_is_printable(char *s) __attribute__((nonnull(1)));

int				ft_str_is_lowercase(char *s) __attribute__((nonnull(1)));

int				ft_str_is_uppercase(char *s) __attribute__((nonnull(1)));

int				ft_isprime(size_t n);

int				ft_isempty(char *s);

int				ft_chrsearch(const char *s, int c) __attribute__((nonnull(1)));

int				get_next_line(const int fd, char **line);

int				ft_fgetline(const int fd, char **line, char c);

int				ft_fprintbits(int fd, char c);

int				ft_printbits(char c);

size_t			ft_strclen(const char *s, char c) __attribute__((nonnull(1)));

int				ft_printf(const char *__restrict__ format, ...) __attribute__
				((format(printf,1,2)));

int				ft_dprintf(int fd, const char *__restrict__ format, ...) __attribute__
				((format(printf,2,3)));

int				ft_asprintf(char **ret, const char *format, ...) __attribute__
				((format(printf,2,3)));

int				ft_vdprintf(int fd, const char *__restrict__ format,
				va_list ap);

int				ft_vasprintf(char **ret, const char *format, va_list ap);

char			**ft_tabcpy(char **table);

size_t			ft_tablen(char **table);

char			*ft_getenv(const char *name);

int				ft_setenv(const char *name, const char *value, int overwrite);

int				ft_unsetenv(const char *name);

void			ft_tabdel(char ***tables);

int				ft_getch(void);

void			ft_sortopt(int argc, char **argv, const char *optstring);

void			ft_swap(void **a, void **b);

char			*ft_strnjoin(int nb, char *s1, char *s2, ...);

char			*ft_resolvepath(char *str);

char			*ft_realpath(const char *path, char *resolved_path);

void			ft_nmemdel(size_t n, void **ptr, ...);

#endif
