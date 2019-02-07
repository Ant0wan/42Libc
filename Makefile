# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/22 15:14:08 by abarthel          #+#    #+#              #
#    Updated: 2019/02/07 11:46:20 by abarthel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc

$(NAME) :
	@make -C ./libft objects
	@make -C ./libftwchar objects
	ar rc $(LIB_DIR)$(LIB) $(OBJS)
	mv ./libft/libft.a ./libftprintf.a
	ranlib $(NAME)

objects : $(OBJS)

test : testclean $(NAME)
	gcc main.c -I ./includes -L. libftprintf.a

testclean : fclean
	rm -f a.out

clean :
	rm -f $(OBJS)
	make -C $(LIB_DIR) fclean

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re
