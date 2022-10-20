#include "main.h"
/**
 * print_line - write a function that draws a straight line in
 * the terminal
 * @n: number of times the character should be printed
 * Return: 0
*/
void print_line(int n)
{
	char i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
