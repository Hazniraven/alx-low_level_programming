#include "main.h"
/**
 * print_rev - write a function that prints a string, in reverse,
 * followed by a new line
 * @s: string reversed
 * Return: none
 */
void print_rev(char *s)
{
	int n, g;

	g = 0;
	while (s[g] != '\0')
		g++;

	for (n = g - 1; n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
