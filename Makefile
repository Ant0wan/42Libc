# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/22 15:14:08 by abarthel          #+#    #+#              #
#    Updated: 2019/01/23 17:00:02 by abarthel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ftprintf.a

CC = gcc

SRCS = ./srcs/ft_printf.c

INCLUDES = -I ./includes/

OBJS= $(SRCS:.c=.o)

all : $(NAME)

$(NAME) :
	make -C ./libft/
	gcc $(SRCS) $(INCLUDES) -c
