#include "main.h"
int _isdigit(int c)
{
	int d;

	for (d = '0'; d <= '9'; d++)
	{
		if (c == d)
			return (1);
	}
	return (0);
}
