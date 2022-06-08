#include <stdio.h>
#include "main.h"
/**
 * _abs - absolute value
 *
 *@c: The int to print
 * Return: Always 0.
 */
int _abs(int c)
{
	if (c < 0)
	{
		return ((-1) * c)
	}
	else if (c > 0)
	{
		return (c);
	}
	else
	{
		return (0);
	}
}
