#include <stdio.h>
#include <string.h>

int main ()
{
  char str[] ="- This, a sample string.";
  char str2[] ="- This, a sample string.";
  char * pch;
  printf ("Splitting string \"%s\" into tokens:\n",str);
  pch = strtok (str," ,.-");
  while (pch != NULL)
  {
    printf ("%s\n",pch);
    pch = strtok (NULL, " ,.-");
  }
  printf ("Splitting string \"%s\" into tokens:\n",str);
  pch = strtok (str2," ,.-");
  while (pch != NULL)
  {
    printf ("%s\n",pch);
    pch = strtok (NULL, " ,.-");
  }
  return 0;
}
