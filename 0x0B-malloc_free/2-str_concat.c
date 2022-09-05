#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char *str_concat(char *s1, char *s2)
{
  long unsigned int i;
  long unsigned int e;
  char *a;

  e = sizeof(s1) + sizeof(s2);
  
  a = (char*) malloc((sizeof(s1) + sizeof(s2)) * sizeof(char));
  
  if (s1 == NULL || s2 == NULL)
    return(NULL);
  
  for(i = 0; i < e; i++)
    {
      if(i < (sizeof(s1)))
	{
	  a[i] = *s1;
	  s1++;
	}
      else
	{
	  a[i] = *s2;
	  s2++;
	}
    }

  return(a);
}
