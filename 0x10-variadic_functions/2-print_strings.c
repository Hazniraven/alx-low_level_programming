#include "variadic_functions.h"

/**
 *print_strings - Write a function that prints strings, followed by a new line
 *@separator: the string to be printed between the strings
 *@n: number of strings passed to the functions
 *
 *Return: none
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, j;
	char *b;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		b = va_arg(ap, char *);
		if (b)
			printf("%s", b);
		else
			printf("(nil)");

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
