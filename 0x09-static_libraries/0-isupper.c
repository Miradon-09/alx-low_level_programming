#include "main.h"
/**
 * _isupper - print 1 if it is uppercase
 *@c - the caharacter to check
 * Return: 1 if uppercase else 0
 */
int _isupper(int c)
{
	char d;

	for (d = 'A'; d <= 'Z'; d++)
	{
		if (c == d)
		{
			return (1);
		}
	}
	return (0);
}
