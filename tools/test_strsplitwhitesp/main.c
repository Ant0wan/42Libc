#include <stdio.h>
#include <string.h>
#include "libft.h"

int main ()
{
  char str[] = "\t - This\t, a \fsample\n string. ";
  char str2[] = " ";
  char str3[] = "";
  char str4[] = "Hello";
  char str5[] = " \tHello";
  char str6[] = "\0Hello";
  char str7[] = "Hello \t\t\t\t\t\t\t";
  printf ("\n|%s|\n", str);
  ft_strsplit_whitespaces(str);
  printf ("\n|%s|\n", str2);
  ft_strsplit_whitespaces(str2);
  printf ("\n|%s|\n", str3);
  ft_strsplit_whitespaces(str3);
  printf ("\n|%s|\n", str4);
  ft_strsplit_whitespaces(str4);
  printf ("\n|%s|\n", str5);
  ft_strsplit_whitespaces(str5);
  printf ("\n|%s|\n", str6);
  ft_strsplit_whitespaces(str6);
  printf ("\n|%s|\n", str7);
  ft_strsplit_whitespaces(str7);
  return 0;
}
