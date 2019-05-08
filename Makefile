# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/06 11:47:48 by abarthel          #+#    #+#              #
#    Updated: 2019/05/08 11:51:34 by abarthel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# To compile with the libft.a, use the command-line: gcc main.c -L. -lft or add it to makefile

NAME = libft.a

CC = gcc

FLAGS = -Werror -Wall -Wextra -fno-builtin -O2

%.o : %.c
	@$(CC) $(FLAGS) $< -c -I$(INCLUDES_PATH)
	@printf "\e[38;5;74m%-20s \e[38;5;85mobject built\n\e[0m" $(notdir $(basename $@))

INCLUDES_PATH =	./include/
INCLUDES = 	cast.h \
			dispatcher.h \
			format.h \
			ft_expand_ret.h \
			ft_printf.h \
			ft_printf_prs.h \
			ft_vasprintf.h \
			ft_vdprintf.h \
			ft_wchar.h \
			get_next_line.h \
			libft.h \
			prefix.h \
			prs_get.h \
			prs_struct.h \
			specifiers.h \
			str_format.h \
			struct_disp.h \
			utf8.h \
			wrapper.h \

SRC_PATH =	./src/
SRC_FILES =	cast.o \
			dispatcher.o \
			format.o \
			ft_atoi.o \
			ft_b.o \
			ft_bzero.o \
			ft_chr.o \
			ft_chrsearch.o \
			ft_double.o \
			ft_ewcsnwidth.o \
			ft_ewcswidth.o \
			ft_ewcwidth.o \
			ft_expand_ret.o \
			ft_fprintbits.o \
			ft_fputwc.o \
			ft_fputwcbits.o \
			ft_fputws.o \
			ft_fputwsbits.o \
			ft_hexa.o \
			ft_isalnum.o \
			ft_isalpha.o \
			ft_isascii.o \
			ft_isdigit.o \
			ft_isempty.o \
			ft_isprime.o \
			ft_isprint.o \
			ft_itoa.o \
			ft_lstadd.o \
			ft_lstdel.o \
			ft_lstdelone.o \
			ft_lstiter.o \
			ft_lstmap.o \
			ft_lstnew.o \
			ft_memalloc.o \
			ft_memccpy.o \
			ft_memchr.o \
			ft_memcmp.o \
			ft_memcpy.o \
			ft_memdel.o \
			ft_memmove.o \
			ft_memset.o \
			ft_n.o \
			ft_nbr.o \
			ft_octal.o \
			ft_p.o \
			ft_print_tables.o \
			ft_printbits.o \
			ft_printf.o \
			ft_printf_prs.o \
			ft_putaddr.o \
			ft_putchar.o \
			ft_putchar_fd.o \
			ft_putendl.o \
			ft_putendl_fd.o \
			ft_putllnb.o \
			ft_putnbr.o \
			ft_putnbr_base.o \
			ft_putnbr_fd.o \
			ft_putnbr_lowhexa.o \
			ft_putnbr_octal.o \
			ft_putnbr_upphexa.o \
			ft_putstr.o \
			ft_putstr_fd.o \
			ft_putuint.o \
			ft_putuint_octal.o \
			ft_putwcbits.o \
			ft_putwchar.o \
			ft_putwstr.o \
			ft_str.o \
			ft_str_is_alpha.o \
			ft_str_is_lowercase.o \
			ft_str_is_numeric.o \
			ft_str_is_printable.o \
			ft_str_is_uppercase.o \
			ft_strcat.o \
			ft_strchr.o \
			ft_strclen.o \
			ft_strclr.o \
			ft_strcmp.o \
			ft_strcpy.o \
			ft_strdel.o \
			ft_strdup.o \
			ft_strequ.o \
			ft_striter.o \
			ft_striteri.o \
			ft_strjoin.o \
			ft_strlcat.o \
			ft_strlen.o \
			ft_strmap.o \
			ft_strmapi.o \
			ft_strncat.o \
			ft_strncmp.o \
			ft_strncpy.o \
			ft_strndup.o \
			ft_strnequ.o \
			ft_strnew.o \
			ft_strnstr.o \
			ft_strrchr.o \
			ft_strsplit.o \
			ft_strstr.o \
			ft_strsub.o \
			ft_strtrim.o \
			ft_tolower.o \
			ft_toupper.o \
			ft_unbr.o \
			ft_vasprintf.o \
			ft_vdprintf.o \
			ft_wcscmp.o \
			ft_wcscpy.o \
			ft_wcslen.o \
			ft_y.o \
			get_next_line.o \
			prefix.o \
			prs_get.o \
			str_format.o \
			utf8.o \
			wrapper.o \

all: $(NAME)

$(NAME): $(addprefix $(SRC_PATH), $(SRC_FILES))
	@ar rc $(NAME) $(SRC_FILES)
	@ranlib $(NAME)
	@printf "\n\e[38;5;82m%4s [\e[1m$(NAME) built]\n\n\e[0m"
	@printf "\e[38;5;41mTo compile with the $(NAME), use the command-line: \e[0m\e[4mgcc main.c -L. -lft\n\e[0m"

clean:
	@rm -f $(SRC_FILES)
	@printf "\e[0m$(basename $(NAME)) .o \e[38;5;52mfiles%1sdeleted\n\e[0m"

fclean: clean
	@rm -f $(NAME)
	@printf "\e[0m$(NAME)\e[38;5;52m%2sdeleted\n\e[0m"

re: fclean $(NAME)

# Objects rule to be used when building larger libraries
objects: $(SRC_FILES)

.PHONY : all clean fclean re objects
