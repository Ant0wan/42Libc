# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/07 11:08:30 by abarthel          #+#    #+#              #
#    Updated: 2019/03/22 12:45:22 by abarthel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Dispatcher module

NAME = specifiers

CC = gcc

FLAGS = -Werror -Wall -Wextra

INCS = -I./../../libft/ -I./../../libftwchar/ -I./../wrappers/ -I./../ \
	   -I./../../libftwchar/utf8/ -I./

O_FILES = ft_n.o ft_chr.o ft_wchr.o ft_str.o ft_wstr.o ft_nbr.o ft_unbr.o \
		  ft_nbrformat.o ft_unbrformat.o retwriter.o nbr_tools.o ft_uold.o \
		  ft_x.o ft_xformat.o \

%.o : %.c
	@$(CC) $(FLAGS) $(INCS) $< -c
	@printf "\e[38;5;80m%-20s \e[38;5;76mobject built\n\e[0m" $(basename $@)

clean:
	@rm -f $(O_FILES)
	@printf "\e[0m$(NAME)%1s\e[0m.o \e[38;5;119mfiles%1sdeleted ♻\n\e[0m"

re: clean objects

# Objects rule to be used when building larger libraries
objects: $(O_FILES)

.PHONY : clean re objects
