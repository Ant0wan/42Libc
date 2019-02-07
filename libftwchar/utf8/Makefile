# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/07 11:08:30 by abarthel          #+#    #+#              #
#    Updated: 2019/02/07 11:18:49 by abarthel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# UT8 encoding module

CC = gcc

FLAGS = -Werror -Wall -Wextra

%.o : %.c
	@$(CC) $(FLAGS) $< -c
	@printf "\e[38;5;127m%-20s \e[38;5;125mobject built\n\e[0m" $(basename $@)

O_FILES = utf8.o

objects: $(O_FILES)

clean:
	@rm -f $(O_FILES)
	@printf "\e[0m.o \e[38;5;202mfiles%1sdeleted ♻\n\e[0m"

re: clean objects

.PHONY : clean objects re
