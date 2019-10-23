# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft.mk                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/25 14:45:47 by abarthel          #+#    #+#              #
#    Updated: 2019/10/23 18:17:43 by abarthel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SOURCES_PATH :=	./src/

SOURCES	:= \
	./ds_btree:
btree_apply_by_level.c
btree_apply_infix.c
btree_apply_postfix.c
btree_apply_prefix.c
btree_create_node.c
btree_insert_data.c
btree_level_count.c
btree_search_data.c

./ds_queue:

./ds_singly_linked_list:
ft_lstadd.c
ft_lstdel.c
ft_lstdelone.c
ft_lstiter.c
ft_lstmap.c
ft_lstnew.c

./ds_stack:
stack_apply_to_each.c
stack_create_element.c
stack_delete.c
stack_duplicate.c
stack_initialize.c
stack_isempty.c
stack_peek.c
stack_pop.c
stack_pop_get_data.c
stack_push.c
stack_reverse.c
stack_reverse_recursion.c
stack_sort.c
stack_swap.c

./f_ctype:
ft_isalnum.c
ft_isalpha.c
ft_isascii.c
ft_isdigit.c
ft_tolower.c
ft_toupper.c

./f_errno:
error_msg.c

./f_misc:
ft_chrsearch.c
ft_ewcsnwidth.c
ft_ewcswidth.c
ft_ewcwidth.c
ft_fgetline.c
ft_fprintbits.c
ft_fputwcbits.c
ft_fputwsbits.c
ft_isempty.c
ft_isprime.c
ft_isprint.c
ft_itoa.c
ft_memalloc.c
ft_memdel.c
ft_numlen.c
ft_print_tables.c
ft_printbits.c
ft_putaddr.c
ft_putchar_fd.c
ft_putendl.c
ft_putendl_fd.c
ft_putllnb.c
ft_putnbr.c
ft_putnbr_base.c
ft_putnbr_fd.c
ft_putnbr_lowhexa.c
ft_putnbr_octal.c
ft_putnbr_upphexa.c
ft_putstr.c
ft_putstr_fd.c
ft_putuint.c
ft_putuint_octal.c
ft_putwcbits.c
ft_putwstr.c
ft_resolvepath.c
ft_sortopt.c
ft_str_is_alpha.c
ft_str_is_lowercase.c
ft_str_is_numeric.c
ft_str_is_printable.c
ft_str_is_uppercase.c
ft_strclen.c
ft_strclr.c
ft_strdel.c
ft_strendcpy.c
ft_strequ.c
ft_striter.c
ft_striteri.c
ft_strjoin.c
ft_strmap.c
ft_strmapi.c
ft_strnequ.c
ft_strnew.c
ft_strnjoin.c
ft_strrep.c
ft_strsplit.c
ft_strsplit_whitespaces.c
ft_strsub.c
ft_strtrim.c
ft_swap.c
ft_tabcpy.c
ft_tabdel.c
ft_tablen.c
ft_tabmalloc.c
get_next_line.c
utf8.c

./f_ncurses:
ft_getch.c

./f_stdio:
ft_perror.c
ft_putchar.c
ft_strerror.c
printf

./f_stdio/printf:
cast.c
dispatcher.c
format.c
ft_asprintf.c
ft_b.c
ft_chr.c
ft_double.c
ft_dprintf.c
ft_expand_ret.c
ft_hexa.c
ft_n.c
ft_nbr.c
ft_octal.c
ft_p.c
ft_printf.c
ft_printf_prs.c
ft_str.c
ft_unbr.c
ft_vasprintf.c
ft_vdprintf.c
ft_y.c
prefix.c
prs_get.c
str_format.c
wrapper.c

./f_stdlib:
ft_atoi.c
ft_getenv.c
ft_realpath.c
ft_setenv.c
ft_unsetenv.c

./f_string:
ft_memccpy.c
ft_memchr.c
ft_memcmp.c
ft_memcpy.c
ft_memmove.c
ft_memset.c
ft_strcat.c
ft_strchr.c
ft_strcmp.c
ft_strcpy.c
ft_strdup.c
ft_strlcat.c
ft_strlen.c
ft_strncat.c
ft_strncmp.c
ft_strncpy.c
ft_strndup.c
ft_strnstr.c
ft_strrchr.c
ft_strsep.c
ft_strstr.c
ft_strtok.c

f_strings/ft_bzero.c \
f_strings/ft_strcasecmp.c \
f_unistd/ft_getopt_gnu.c \
f_unistd/ft_getopt_osx.c \
f_wchar/ft_fputwc.c \
f_wchar/ft_fputws.c \
f_wchar/ft_wcscmp.c \
f_wchar/ft_wcscpy.c \
f_wchar/ft_wcslen.c \

OBJECTS := $(patsubst %.c,%.o,$(addprefix $(SOURCES_PATH), $(SOURCES)))

INCLUDES := ./include/

DEPENDS := $(patsubst %.c,%.d,$(addprefix $(SOURCES_PATH), $(SOURCES)))

ARFLAGS := rc

CFLAGS += -Wall -Werror -Wextra -ansi -std=c99 -D_POSIX_C_SOURCE -fno-builtin -O2
