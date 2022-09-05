#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
  unsigned int i;

  i = 0;
  while (i < size)
    {
      if (i % 10)
<<<<<<< HEAD
	{
	  printf(" ");
	}
      if (!(i % 10) && i)
	{
	  printf("\n");
	}
=======
        {
	  printf(" ");
        }
      if (!(i % 10) && i)
        {
	  printf("\n");
        }
>>>>>>> 756f853d5e6a033dcd47462839a90bb2ae1e03b8
      printf("0x%02x", buffer[i]);
      i++;
    }
  printf("\n");
}

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
  char *buffer;

<<<<<<< HEAD
  buffer = create_array(98, 'H');
=======
buffer = create_array(98, 'H');
>>>>>>> 756f853d5e6a033dcd47462839a90bb2ae1e03b8
  if  (buffer == NULL)
    {
      printf("failed to allocate memory\n");
      return (1);
    }
  simple_print_buffer(buffer, 98);
  free(buffer);
  return (0);
}
