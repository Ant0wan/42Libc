#!/bin/bash
make -j -C ../../
cc -g -Wall -Werror -Wextra -fsanitize=address -g main.c ../../libft.a -I../../include/ -o test
#cc -g -Wall -Werror -Wextra main.c ../../libft.a -I../../include/ -o test

list=(`ls inputs`)
for elem in ${list[@]}
do
	printf "Test name: $elem\n\nNumber of lines: "
	time ./test inputs/$elem | wc -l
	printf "\n-------------------------------\n"
done
rm -rf test.dSYM
rm test
#make fclean -C ../../
