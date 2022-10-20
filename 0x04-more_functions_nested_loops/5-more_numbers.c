#include "main.h"
/**
 * more_numbers - write a function that prints 10 times the numbers,
 * from 0 to 14, followed by a new line
 *
 * Return: void
*/
void more_numbers(void)
{
	char c;
	char d;

	for (c = 1; c <= 10; c++)
	{
		for (d = 0; d <= 14; d++)
		{
			if (d >= 10)
			_putchar('1');
			_putchar(d % 10 + '0');
		}
		_putchar('\n');
	}
}
