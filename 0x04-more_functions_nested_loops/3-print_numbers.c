#include "main.h"
/**
 * print_numbers - function for printing number 0 to 9
 *@d - int to print number
 * _putchar - function that print
 */
void print_numbers(void)
{
	int d;

	for (d = 0; d <= 9; d++)
		_putchar(d + '0');
	_putchar('\n');
}
