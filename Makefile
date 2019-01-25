# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/22 15:14:08 by abarthel          #+#    #+#              #
#    Updated: 2019/01/25 15:37:04 by abarthel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc

SRCS = ./srcs/ft_printf.c \
	   ./srcs/dispatcher.c \
	   ./srcs/ft_wputchar.c

INCLUDES = -I ./includes/

CFLAGS = -Wextra -Wall -Werror

LIB_DIR = ./Libft/

LIB = libft.a

OBJS= $(SRCS:.c=.o)

all : $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -o $@ -c $<
	echo $@

$(NAME) : $(OBJS)
	make -C $(LIB_DIR)
	ar rc $(LIB_DIR)$(LIB) $(OBJS)
	mv ./libft/libft.a ./libftprintf.a
	ranlib $(NAME)

objects : $(OBJS)

test : $(NAME)
	gcc main.c -I ./includes -L. libftprintf.a

testclean : fclean
	rm -f a.out

testre : testclean
	make test

clean :
	rm -f $(OBJS)
	make -C $(LIB_DIR) fclean

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re
