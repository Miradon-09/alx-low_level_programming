#include <stdio.h>

/**
 * main - function that print the program name followed by new line.
 *@arg : argument count on the CDL interface
 *@argv: argument value type in on the CDL interface
 *Return: Always 0, sucess
 */

int main(int arg, char *argv[])
{
	if (arg > 0)
		printf("%s\n", argv[0]);
	return (0);
}
