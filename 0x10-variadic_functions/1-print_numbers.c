#include "variadic_functions.h"

/**
 *print_numbers - write a function that prints numbers followed by a new line
 *@separator: string to be printed between numbers
 *@n: number of integers passed to the function
 *
 *Return: none
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, j;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		j = 0;

		if (separator && i != n - 1)
		{
			while (separator[j] != '\0')
			{
				printf("%c", separator[j]);
				j++;
			}
		}
	}

	va_end(ap);
	printf("\n");
}
