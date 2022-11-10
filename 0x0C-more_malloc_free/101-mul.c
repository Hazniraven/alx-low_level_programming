#include "main.h"

/**
 *main - write a function that multiplies two positive numbers
 *@argc: number of arguments passed
 *@argv: number of elements in array
 *Return: 0
 */
int main(int argc, char *argv[])
{
	unsigned long int mul = 0;

	int i, j, len;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 1; i < argc; i++)
	{
		len = strlen(argv[i]);

		for (j = 0; j < len; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				exit(98);
			}
		}
	}

	mul = atoi(argv[1]) * atoi(argv[2]);

	printf("%ld\n", mul);

	return (0);
}
