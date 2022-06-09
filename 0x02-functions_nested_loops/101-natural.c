#include <stdio.h>
/**
 *main - check for multiples of 3 and 5
 *
 *Return: 0 always
 */
int main(void)
{
	int x = 1024;
	int z;
	int sum = 0;

	for (z = 0; z < x; y++)
	{
		if ((z % 3 == 0) || (z % 5 == 0))
		{
			sum = sum + z;
		}
	}
	printf("%d\n", sum);
	return (0);
}
