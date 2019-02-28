# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/07 11:08:30 by abarthel          #+#    #+#              #
#    Updated: 2019/02/28 13:15:32 by abarthel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Wrappers module

NAME = wrappers

CC = gcc

FLAGS = -Werror -Wall -Wextra

INCS = -I./ -I./../

O_FILES = passive_wrap.o di_wrap.o \

%.o : %.c
	@$(CC) $(FLAGS) $(INCS) $< -c
	@printf "\e[38;5;57m%-20s \e[38;5;27mobject built\n\e[0m" $(basename $@)

clean:
	@rm -f $(O_FILES)
	@printf "\e[0m$(NAME)%1s\e[0m.o \e[38;5;56mfiles%1sdeleted ♻\n\e[0m"

re: clean objects

# Objects rule to be used when building larger libraries
objects: $(O_FILES)

.PHONY : clean re objects
