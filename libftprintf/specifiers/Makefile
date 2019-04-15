# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/07 11:08:30 by abarthel          #+#    #+#              #
#    Updated: 2019/04/15 18:40:14 by abarthel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Dispatcher module

NAME = specifiers

CC = gcc

FLAGS = -Werror -Wall -Wextra

INCS = -I./../../libft/ -I./../../libftwchar/ -I./../wrappers/ -I./../ \
	   -I./../../libftwchar/utf8/ -I./

O_FILES = format.o prefix.o cast.o ft_nbr.o ft_unbr.o ft_hexa.o ft_octal.o \
		  ft_p.o ft_b.o ft_n.o ft_y.o ft_str.o str_format.o ft_chr.o \

%.o : %.c
	@$(CC) $(FLAGS) $(INCS) $< -c
	@printf "\e[38;5;80m%-20s \e[38;5;76mobject built\n\e[0m" $(basename $@)

clean:
	@rm -f $(O_FILES)
	@printf "\e[0m$(NAME)%1s\e[0m.o \e[38;5;52mfiles%1sdeleted\n\e[0m"

re: clean objects

# Objects rule to be used when building larger libraries
objects: $(O_FILES)

.PHONY : clean re objects
