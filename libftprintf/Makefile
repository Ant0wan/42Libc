# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/07 11:08:30 by abarthel          #+#    #+#              #
#    Updated: 2019/04/29 11:36:18 by abarthel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Ft_printf module (library part)

NAME = libftprintf

CC = gcc

#OPTI_FLAGS = -fstrict-aliasing
OPTI_FLAGS = -fno-builtin -O2

FLAGS = -Werror -Wall -Wextra $(OPTI_FLAGS)

INCS = -I./dispatcher/ -I./specifiers/ -I./../libftwchar/ -I./../libftwchar/utf8/ -I./../libft/

O_FILES = ft_printf.o ft_vdprintf.o ft_vasprintf.o ft_printf_prs.o ft_expand_ret.o \
		  prs_get.o wrapper.o \

%.o : %.c
	@$(CC) $(FLAGS) $(INCS) $< -c
	@printf "\e[38;5;49m%-20s \e[38;5;226mobject built\n\e[0m" $(basename $@)

clean:
	@$(MAKE) -C ./dispatcher/ clean
	@$(MAKE) -C ./specifiers/ clean
	@rm -f $(O_FILES)
	@printf "\e[0m$(NAME)%1s\e[0m.o \e[38;5;52mfiles%1sdeleted\n\e[0m"

re: clean objects

objects: $(O_FILES)
	@printf "\n"
	@$(MAKE) -C ./dispatcher/ objects
	@printf "\n"
	@$(MAKE) -C ./specifiers/ objects

.PHONY : clean re objects
