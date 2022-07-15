#include <stdio.h>

/**
 *main - function taht prints all arguments it receives.
 *@argc: argument count on the CDl interface.
 *@argv: argument value on the CDL interface.
 *Return: Always 0, success.
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
			printf("%s\n", argv[i]);
	}
	return (0);
}
