#include <stdio.h>
#include "main.h"
/**
 * print_times_table - write a function that prints the n times
 * table, starting with 0
 * @n: the starting number
 * Return: none
*/
void print_times_table(int n)
{
	int num, c, d;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');

			for (c = 1; c <= n; c++)
			{
				_putchar(',');
				_putchar(' ');


				d = num * c;

				if (d <= 99)
					_putchar(' ');
				if (d <= 9)
					_putchar(' ');

				if (d >= 100)
				{
					_putchar((d / 100) + '0');
					_putchar(((d / 10)) % 10 + '0');
				}
				else if (d <= 99 && d >= 10)
				{
					_putchar((d / 10) + '0');
				}
				_putchar((d % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
