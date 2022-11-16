#include <stdio.h>
#include <stdlib.h>

/**
 *main - write a program that prints the opcodes of its own main fumction
 *@argc: number of arguments
 *@argv: number of arguments in array
 *
 *Return: 0
 */
int main(int argc, char *argv[])
{
	char *r;
	int i, b;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	b = atoi(argv[1]);
	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}

	r = (char *)main;
	for (i = 0; i < b; i++)
	{
		printf("%02x", r[i] & 0xFF);
		if (i != b - 1)
			printf(" ");
	}

	printf("\n");

	return (0);
}
