#include <stdio.h>
#include <stdlib.h>

/**
 *main - write a program that prints the number of arguments passed to into it
 *@argc: number of arguments
 *@argv: number of arguments in the array
 *Return: 0
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
