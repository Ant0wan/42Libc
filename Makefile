# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/21 09:36:48 by abarthel          #+#    #+#              #
#    Updated: 2019/01/21 16:01:17 by abarthel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	libftprintf.a
SRC_NAME		=	./srcs/ft_printf.c

SRC_DIR			=	./srcs/
INCLUDES_DIR	=	./includes/

OBJS			=	$(SRC_NAME:.c=.o)
CFLAGS			=	-Werror -Wall -Wextra -I
CC				=	gcc


all				:	$(NAME)

$(NAME)			:	$(OBJS)
					ar rc $(NAME) $(OBJS)

%.o:%.c
	$(CC) $(CFLAGS) $(INCLUDES_DIR) -o $@ -c $<

clean			:
					rm -f $(OBJS)

fclean			:	clean
					rm -f $(NAME)

re				:	fclean	all

.PHONY			:	fclean re all
