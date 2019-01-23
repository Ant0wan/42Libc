# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/22 15:14:08 by abarthel          #+#    #+#              #
#    Updated: 2019/01/23 17:21:27 by abarthel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc

SRCS = ./srcs/ft_printf.c

INCLUDES = -I ./includes/

CFLAGS = -Wextra -Wall -Werror

LIB_DIR = ./libft/

LIB = libft.a

OBJS= $(SRCS:.c=.o)

all : $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -o $@ -c $<

$(NAME) : $(OBJS)
	make -C $(LIB_DIR)
	ar rcT $(NAME) $(LIB_DIR)$(LIB) $(OBJS)
	ranlib $(NAME)

clean :
	rm -f $(OBJS)
	make -C $(LIB_DIR) clean

fclean :
	rm -f $(NAME)
	rm -f $(OBJS)
	make -C $(LIB_DIR) fclean

re : fclean all

.PHONY: all clean fclean re
