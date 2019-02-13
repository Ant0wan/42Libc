# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/07 11:08:30 by abarthel          #+#    #+#              #
#    Updated: 2019/02/13 17:35:11 by abarthel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# UT8 encoding module

NAME = libftprintf

CC = gcc

FLAGS = -Werror -Wall -Wextra

INCS = -I./../libftwchar/ -I./../libftwchar/utf8/ -I./../libft/

O_FILES = ft_printf.o ft_vdprintf.o ft_vasprintf.o \

%.o : %.c
	@$(CC) $(FLAGS) $(INCS) $< -c
	@printf "\e[38;5;49m%-20s \e[38;5;226mobject built\n\e[0m" $(basename $@)

clean:
	@rm -f $(O_FILES)
	@printf "\e[0m$(NAME)%1s\e[0m.o \e[38;5;123mfiles%1sdeleted ♻\n\e[0m"

re: clean objects

objects: $(O_FILES)

.PHONY : clean re objects
