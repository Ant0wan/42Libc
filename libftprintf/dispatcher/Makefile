# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/07 11:08:30 by abarthel          #+#    #+#              #
#    Updated: 2019/04/02 00:22:47 by abarthel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Dispatcher module

NAME = dispatcher

CC = gcc

FLAGS = -Werror -Wall -Wextra

INCS = -I./../../libft/ -I./../../libftwchar/ -I./../specifiers/ -I./../

O_FILES = dispatcher.o

%.o : %.c
	@$(CC) $(FLAGS) $(INCS) $< -c
	@printf "\e[38;5;181m%-20s \e[38;5;88mobject built\n\e[0m" $(basename $@)

clean:
	@rm -f $(O_FILES)
	@printf "\e[0m$(NAME)%1s\e[0m.o \e[38;5;52mfiles%1sdeleted\n\e[0m"

re: clean objects

# Objects rule to be used when building larger libraries
objects: $(O_FILES)

.PHONY : clean re objects
