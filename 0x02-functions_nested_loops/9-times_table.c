#include "main.h"
/**
 * times_table - write a function that prints the 9 times table,
 * starting with 0
 * Return: none
 *
*/
void times_table(void)
{
	int num, i, j;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (i = 1; i <= 9; i++)
		{
			_putchar(',');
			_putchar(' ');

			j = num * i;

			if (j <= 9)
				_putchar(' ');
			else
				_putchar((j / 10) + '0');

			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
