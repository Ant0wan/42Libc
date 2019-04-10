# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/22 15:14:08 by abarthel          #+#    #+#              #
#    Updated: 2019/04/10 14:47:22 by abarthel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# To compile with the libftprintf.a, use the command-line: gcc main.c -L. -lftprintf or add it to makefile

NAME = libftprintf.a

CC = gcc

FLAGS = -Werror -Wall -Wextra

############################ OBJECTS #########################################

O_FILES_PATH = ./libftprintf/
O_FILES = ft_printf.o ft_vdprintf.o ft_vasprintf.o ft_printf_prs.o ft_expand_ret.o \
		  prs_get.o wrapper.o \

DISPATCHER_PATH = ./libftprintf/dispatcher/
DISPATCHER = dispatcher.o \

SPECIFIERS_PATH = ./libftprintf/specifiers/
SPECIFIERS = format.o prefix.o cast.o ft_nbr.o ft_unbr.o ft_hexa.o ft_octal.o \
			 ft_p.o ft_b.o ft_n.o ft_y.o ft_str.o str_format.o \

LIBFT_PATH = ./libft/
LIBFT = ft_bzero.o ft_isalpha.o ft_isdigit.o ft_isalnum.o \
		ft_isascii.o ft_isprint.o ft_toupper.o ft_tolower.o \
		ft_atoi.o ft_strcmp.o ft_strncmp.o ft_memcmp.o ft_strlen.o \
		ft_strlcat.o ft_memset.o ft_memcpy.o ft_memccpy.o \
		ft_memmove.o ft_memchr.o ft_strstr.o ft_strcat.o ft_strncat.o \
		ft_strcpy.o ft_strncpy.o ft_strdup.o ft_strnstr.o ft_strchr.o \
		ft_strrchr.o ft_memdel.o ft_strdel.o ft_strclr.o ft_striter.o \
		ft_striteri.o ft_putchar.o ft_putstr.o ft_putendl.o \
		ft_putnbr.o ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o \
		ft_putnbr_fd.o ft_strequ.o ft_strnequ.o ft_memalloc.o \
		ft_strnew.o ft_strmap.o ft_strmapi.o ft_strsub.o ft_strjoin.o \
		ft_strtrim.o ft_itoa.o ft_strsplit.o ft_lstdelone.o ft_lstdel.o \
		ft_lstadd.o ft_lstiter.o ft_lstnew.o ft_lstmap.o ft_print_tables.o \
		ft_str_is_alpha.o ft_str_is_numeric.o ft_str_is_printable.o \
		ft_str_is_lowercase.o ft_str_is_uppercase.o ft_isprime.o \
		ft_fprintbits.o get_next_line.o ft_isempty.o ft_strclen.o \
		ft_chrsearch.o ft_strndup.o ft_putnbr_base.o ft_putnbr_lowhexa.o \
		ft_putnbr_upphexa.o ft_putnbr_octal.o ft_putaddr.o ft_putllnb.o \
		ft_printbits.o ft_putuint.o ft_putuint_octal.o ft_putuint.o \

LIBFTWCHAR_PATH = ./libftwchar/
LIBFTWCHAR = ft_fputwc.o ft_fputwcbits.o ft_fputws.o ft_fputwsbits.o \
			 ft_putwchar.o ft_wcscmp.o ft_putwstr.o ft_putwcbits.o \
			 ft_wcslen.o ft_wcscpy.o ft_wcswidth.o ft_wcwidth.o \

UTF8_PATH = ./libftwchar/utf8/
UTF8 = utf8.o encodlen.o enchrlen.o \

######################### GENERAL RULES ######################################

all: $(NAME)

$(NAME):
	@$(MAKE) -C ./libft objects
	@printf "\n"
	@$(MAKE) -C ./libftwchar objects
	@printf "\n"
	@$(MAKE) -C ./libftprintf objects
	@ar rc $(NAME) $(addprefix $(O_FILES_PATH),$(O_FILES)) $(addprefix $(DISPATCHER_PATH),$(DISPATCHER)) $(addprefix $(SPECIFIERS_PATH),$(SPECIFIERS)) $(addprefix $(LIBFT_PATH),$(LIBFT)) $(addprefix $(LIBFTWCHAR_PATH),$(LIBFTWCHAR)) $(addprefix $(UTF8_PATH),$(UTF8))
	@ranlib $(NAME)
	@printf "\n\e[38;5;51m%4s [\e[1m$(NAME) built]\n\n\e[0m"
	@printf "\e[38;5;50m\e[2mTo compile with the $(NAME), use the command-line: \e[0m\e[4mgcc main.c -L. -lftprintf\n\e[0m"

clean:
	@$(MAKE) -C ./libft clean
	@$(MAKE) -C ./libftwchar clean
	@$(MAKE) -C ./libftprintf clean

fclean: clean
	@rm -f $(NAME)
	@printf "\e[0m$(NAME)\e[38;5;52m%2sdeleted\n\e[0m"

re: fclean all

# Objects rule to be used when building larger libraries
objects:
	@printf "\n"
	@$(MAKE) -C ./libft objects
	@printf "\n"
	@$(MAKE) -C ./libftwchar objects
	@printf "\n"
	@$(MAKE) -C ./libftprintf objects

# For testing purpose
test:
	@make
	@rm -f $(NAME)
	@$(MAKE) -C ./libftprintf clean
	@$(MAKE) -C ./libftprintf objects
	@ar rc $(NAME) $(addprefix $(O_FILES_PATH),$(O_FILES)) $(addprefix $(DISPATCHER_PATH),$(DISPATCHER)) $(addprefix $(SPECIFIERS_PATH),$(SPECIFIERS)) $(addprefix $(SPECIFIERS_PATH),$(SPECIFIERS)) $(addprefix $(LIBFT_PATH),$(LIBFT)) $(addprefix $(LIBFTWCHAR_PATH),$(LIBFTWCHAR)) $(addprefix $(UTF8_PATH),$(UTF8))
	@ranlib $(NAME)
	@gcc -fsanitize=address -Wall -Wextra -Werror main.c libftprintf.a -I./libftprintf/dispatcher/ -I./libftprintf -I./libftprintf/specifiers/
#	@gcc main.c libftprintf.a -I./libftprintf/dispatcher/ -I./libftprintf -I./libftprintf/specifiers/
	./a.out

.PHONY: all clean fclean re objects
