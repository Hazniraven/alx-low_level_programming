#include <stdio.h>
#include <stdlib.h>

/**
 *main - write a program that prints its name, followed by a new line
 *@argc: the number of commands in the terminal
 *@argv: array that holds the commands
 *Return: 0
 */
int main(int __attribute__((unused)) argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
