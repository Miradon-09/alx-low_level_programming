#include "main.h"
/**
 * print_last_digit - last digit of set of num.
 * @d: The digit to print
 * Return: Always 0. 
 */
int print_last_digit(int d)
{
	int c;
	if (d < 0)
	{
		c = (-1 * (d % 10));
		_putchar(c + '0');
		return (c);
	}
	else
	{
		c = (1 * (d % 10));
		_putchar(c + '0');
		return (c);
	}
}
