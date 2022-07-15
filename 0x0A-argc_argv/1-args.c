#include <stdio.h>

/**
 *main - A program that prints the number of arguments passed into it.
 *@arg: argument count in the CDL interface.
 *@argv: argument value
 *Return: Always 0, sucess.
 */

int main(int arg, char *argv[])
{
	if (argv[0])
		printf("%d\n", (arg - 1));
	return (0);
}
