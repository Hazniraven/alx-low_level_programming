#include "main.h"
#include <stdio.h>

/**
 * print_buffer - write a function that prints a buffer
 * @b: buffer
 * @size: size of buffer in bytes
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int e, f, g;

	for (e = 0; e < size; e = e + 10)
	{
		printf("%08x:", e);

		for (f = 0; g < 10; g++)
		{
			if (f + e >= size)
				printf(" ");
			else
				printf("%02x", b[e + f]);
			if (f % 2 != 0 && f != 0)
				printf(" ");
		}

		for (g = 0; g < 10; g++)
		{
			if (g + e >= size)
				break;
			if (b[e + g] > 32 || b[e + g] < 127)
				printf("%c", b[e + g]);
			else
				printf(".");
		}
		if (e >= size)
			continue;

		printf("\n");
	}

	if (size <= 0)
		printf("\n");
}
