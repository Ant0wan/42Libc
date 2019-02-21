# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/07 11:08:30 by abarthel          #+#    #+#              #
#    Updated: 2019/02/21 11:41:48 by abarthel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Ft_printf module (library part)

NAME = libftprintf

CC = gcc

FLAGS = -Werror -Wall -Wextra

INCS = -I./dispatcher/ -I./../libftwchar/ -I./../libftwchar/utf8/ -I./../libft/ -I./wrappers/

O_FILES = ft_printf.o ft_vdprintf.o ft_vasprintf.o ft_printf_prs.o \

%.o : %.c
	@$(CC) $(FLAGS) $(INCS) $< -c
	@printf "\e[38;5;49m%-20s \e[38;5;226mobject built\n\e[0m" $(basename $@)

clean:
	@$(MAKE) -C ./dispatcher/ clean
	@$(MAKE) -C ./wrappers/ clean
	@rm -f $(O_FILES)
	@printf "\e[0m$(NAME)%1s\e[0m.o \e[38;5;123mfiles%1sdeleted ♻\n\e[0m"

re: clean objects

objects: $(O_FILES)
	@printf "\n"
	@$(MAKE) -C ./dispatcher/ objects
	@printf "\n"
	@$(MAKE) -C ./wrappers/ objects

.PHONY : clean re objects
