#!/bin/bash
make -j -C ../../ ;
gcc main.c ../../libft.a -I../../include ;
valgrind ./a.out ;
rm a.out ;
