# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/06 11:47:48 by abarthel          #+#    #+#              #
#    Updated: 2019/01/29 12:01:31 by abarthel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# To compile with the libft.a, use the command-line: gcc main.c -L. -lft or add it to makefile

NAME = libft.a

CC = gcc

FLAGS = -Werror -Wall -Wextra -c

SRCS = $(LIBC) $(FT) $(LISTS) $(OTHERS) $(GET_NEXT_LINE)

OBJ = $(SRCS:.c=.o)

LIBC = ft_bzero.c \
	   ft_isalpha.c \
	   ft_isdigit.c \
	   ft_isalnum.c \
	   ft_isascii.c \
	   ft_isprint.c \
	   ft_toupper.c \
	   ft_tolower.c \
	   ft_atoi.c \
	   ft_strcmp.c \
	   ft_strncmp.c \
	   ft_memcmp.c \
	   ft_strlen.c \
	   ft_strlcat.c \
	   ft_memset.c \
	   ft_memcpy.c \
	   ft_memccpy.c \
	   ft_memmove.c\
	   ft_memchr.c \
	   ft_strstr.c \
	   ft_strcat.c \
	   ft_strncat.c \
	   ft_strcpy.c \
	   ft_strncpy.c \
	   ft_strdup.c \
	   ft_strnstr.c \
	   ft_strchr.c \
	   ft_strrchr.c

FT = ft_memdel.c \
	 ft_strdel.c \
	 ft_strclr.c \
	 ft_striter.c \
	 ft_striteri.c \
	 ft_putchar.c \
	 ft_putstr.c \
	 ft_putendl.c \
	 ft_putnbr.c \
	 ft_putchar_fd.c \
	 ft_putstr_fd.c \
	 ft_putendl_fd.c \
	 ft_putnbr_fd.c \
	 ft_strequ.c \
	 ft_strnequ.c \
	 ft_memalloc.c \
	 ft_strnew.c \
	 ft_strmap.c \
	 ft_strmapi.c \
	 ft_strsub.c \
	 ft_strjoin.c \
	 ft_strtrim.c \
	 ft_itoa.c \
	 ft_strsplit.c

LISTS = ft_lstdelone.c \
		ft_lstdel.c \
		ft_lstadd.c \
		ft_lstiter.c \
		ft_lstnew.c \
		ft_lstmap.c

OTHERS = ft_print_tables.c \
		 ft_str_is_alpha.c \
		 ft_str_is_numeric.c \
		 ft_str_is_printable.c \
		 ft_str_is_lowercase.c \
		 ft_str_is_uppercase.c \
		 ft_isprime.c

GET_NEXT_LINE = get_next_line.c \
				ft_isempty.c \
				ft_strclen.c

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRCS) 
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY : all clean fclean re
