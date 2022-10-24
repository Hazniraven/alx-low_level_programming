#include "main.h"
/**
 * _puts - write a function that prints a string, followed by
 * a new line to stdout
 * @str: string
 * Return: none
 */
void _puts(char *str)
{
	int g = 0;

	while (str[g] != '\0')
	{
		_putchar(str[g]);
		g++;
	}
	_putchar('\n');
}
