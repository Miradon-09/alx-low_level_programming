<<<<<<< HEAD
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
=======
#include "main.h"
#include <stdlib.h>

/**
 * create_array - A function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: The size of the array
 * @c: A character to initialized the array
 * Return: Apointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	if (size == 0)
		return (NULL);

	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
>>>>>>> 756f853d5e6a033dcd47462839a90bb2ae1e03b8
}
