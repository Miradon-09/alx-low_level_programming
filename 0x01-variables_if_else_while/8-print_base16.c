#include <stdio.h>
#include <stdlib.h>
#include <time.h>

	    /**
	     * main - Entry point
	     *
	     * Return: Always 0 (Success)
	     */

int main(void)
{
	int bi;
	char lower;

	for (bi = '0'; bi <= '9'; bi++)
		putchar(bi);
	for (lower = 'a'; lower <= 'f'; lower++)
		putchar(lower);
	putchar('\n');

	return (0);
}
