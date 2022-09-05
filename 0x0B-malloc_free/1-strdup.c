#include <stdlib.h>
#include "main.h"

char *_strdup(char *str)
{
  long unsigned int i;
  char *a;
  
  a =(char*) malloc(sizeof(str) * sizeof(char));

  for (i = 0; i < sizeof(str); i++)
    a[i] = str[i];
  
  if (str == NULL)
    return (NULL);

  else
    return (a);
}
