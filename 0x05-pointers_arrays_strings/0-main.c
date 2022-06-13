#include <stdio>
#include "main.c"
/**
 *reset_to_98 - function that reset the value  
 *of pointer to 98
 * Return: Always 0, success
 */
void reset_to_98(int *n)
{
	n = 98;
	_putchar("n=%d", n);
}
	
