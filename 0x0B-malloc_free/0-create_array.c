#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/*
 * create_array - function that creates an array of chars,and initializes it with specific char.
 * @A: pointer to the allocated memmory
 * @size: size of array
 * @c: character to set to array
 * return - NULL if size is empty or char if successful. 
 */

char *create_array(unsigned int size, char c)
{
  unsigned int i;
  char *A;
  
  A = malloc(size * sizeof(char));
  
  for (i = 0; i < size; i++)
    A[i] = c;
  
  if (size == 0)
    return (NULL);
  
  else
    return (A);
}
