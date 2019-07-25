#!/bin/bash
make -j -C ../ ;
gcc main.c ../libft.a -I../include ;
./a.out ;
rm a.out ;
gcc main1.c ../libft.a -I../include ;
./a.out ;
rm a.out ;
