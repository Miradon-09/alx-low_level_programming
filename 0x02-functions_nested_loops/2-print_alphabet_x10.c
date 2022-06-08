#include "main.h"
/**
 *print_alphabet_x10 - print alpha
 *
 *Return: Always 0.
 */
void print_alphabet_x10(void)	
{
	int alpha;
	int mul;

	
	mul = 0;
	while (mul < 10)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
	
	
	mul++;
	_putchar('\n');
	}
}
