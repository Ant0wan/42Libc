#!/bin/bash
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    test_btree.sh                                      :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/21 18:11:21 by abarthel          #+#    #+#              #
#    Updated: 2019/10/21 18:11:21 by abarthel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

make -j -C ../../
gcc main_alloc_node.c -fsanitize=address -g -Wextra -Wall -Werror ../../libft.a -I../../include -o test
./test
#make fclean -C ../../
