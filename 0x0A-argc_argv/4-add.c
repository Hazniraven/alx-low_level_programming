#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 *main - write a program that adds positive numbers
 *@argc: number of arguments passed
 *@argv: number of arguments in the array
 *Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i, j, len;

	if (argc == 1)
	{
		printf("%d\n", sum);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			len = strlen(argv[i]);

			for (j = 0; j < len; j++)
			{
				if (argv[i][j] < 48 || argv[i][j] > 57)
				{
					printf("Error\n");

					return (1);
				}
			}

			sum += atoi(argv[i]);
		}

		printf("%d\n", sum);
	}

	return (sum);
}
