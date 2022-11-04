#include <stdlib.h>
#include <stdio.h>

/**
 *main - write a program that multiplies two numbers
 *@argc: number of arguments passed
 *@argv: number of arguments passed in the array
 *Return: prod or 1
 */
int main(int argc, char *argv[])
{
	int prod;

	if (argc == 3)
	{
		prod = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", prod);

		return (0);
	}
	else
	{
		printf("Error\n");

		return (1);
	}
}
