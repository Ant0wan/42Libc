# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/07 11:08:30 by abarthel          #+#    #+#              #
#    Updated: 2019/02/07 14:56:35 by abarthel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# UT8 encoding module

NAME = libftprintf

CC = gcc

FLAGS = -Werror -Wall -Wextra

INCS = -I./../libftwchar/ -I./../libftwchar/utf8/ -I./../libft/

%.o : %.c
	@$(CC) $(FLAGS) $(INCS) $< -c
	@printf "\e[38;5;49m%-20s \e[38;5;226mobject built\n\e[0m" $(basename $@)

O_FILES = ft_printf.o \

objects: $(O_FILES)

clean:
	@rm -f $(O_FILES)
	@printf "\e[0m$(NAME)%1s\e[0m.o \e[38;5;123mfiles%1sdeleted ♻\n\e[0m"

re: clean objects

.PHONY : clean objects re
