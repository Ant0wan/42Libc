#include <stdio.h>
#include <string.h>

#include "libft.h"
int main ()
{
  char str[] ="- This,   a .sample string.";
  char str2[] ="- This,   a .sample string.";
  char * pch;
  char *delim;

  delim = "\t .";
  printf ("\n>>Libft\n");
  pch = ft_strtok(str,delim);
  while (pch != NULL)
  {
    printf ("%s\n",pch);
    pch = ft_strtok(NULL, delim);
  }
  pch = ft_strtok(str2,delim);
  while (pch != NULL)
  {
    printf ("%s\n",pch);
    pch = ft_strtok(NULL, delim);
  }
  return 0;
}
