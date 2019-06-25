# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/25 14:03:51 by abarthel          #+#    #+#              #
#    Updated: 2019/06/25 16:49:23 by abarthel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

-include libft.mk

OPTIMIZATION := -O2 -fno-builtin

DEBUGGING := -g

WARNING := -Wall -Wextra -Werror

.PHONY: all clean fclean re objects

all: $(NAME)

$(NAME)	: $(OBJECTS)
	@ar rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)
	@printf "\n\e[38;5;82m%4s [\e[1m$(NAME) built]\n\n\e[0m"
	@printf "\e[38;5;41mTo compile with the $(NAME), use the command-line: \e[0m\e[4m%s main.c -L. -lft\n\e[0m" $(CC)

clean:
	@$(RM) $(OBJECTS) $(DEPENDS)
	@printf "\e[0m$(basename $(NAME)) .o \e[38;5;52mfiles%1sdeleted\n\e[0m"

fclean:
	@$(RM) $(OBJECTS) $(DEPENDS) $(NAME)
	@printf "\e[0m$(NAME)\e[38;5;52m%2sdeleted\n\e[0m"

# Objects rule to be used when building larger libraries
objects: $(OBJECTS)

-include $(DEPENDS)

%.o: %.c Makefile
	@$(CC) $(WARNING) $(CFLAGS) -I $(INCLUDES) $(DEBUGGING) $(OPTIMIZATION) -MMD -MP -c $< -o $@
	@printf "\e[38;5;74m%-20s \e[38;5;85mobject built\n\e[0m" $(notdir $(basename $@))
