#include "main.h"
/**
 *swap_int - Function that swap two integer values
 *@a - input pointer
 *@b - input pointer
 * Return: void, Nothing
 */
void swap_int(int *a, int *b)
{
	int swp;

	swp = *a;
	*a = *b;
	*b = swp;
}
