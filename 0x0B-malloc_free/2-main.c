#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
<<<<<<< HEAD
 * main - check the code for ALX School students.
=======
 * main - check the code for Holberton School students.
>>>>>>> 756f853d5e6a033dcd47462839a90bb2ae1e03b8
 *
 * Return: Always 0.
 */
int main(void)
{
  char *s;

  s = str_concat("Betty ", "Holberton");
  if (s == NULL)
    {
      printf("failed\n");
      return (1);
    }
  printf("%s\n", s);
  free(s);
  return (0);
}
