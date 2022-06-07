#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int i, s;

	for (i = 0; i <= 98; i++)
	{
		for (s = i + 1; s <= 99; s++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((s / 10) + '0');
			putchar((s % 10) + '0');

			if (i == 98 && s == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
