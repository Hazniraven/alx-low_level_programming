#include "main.h"
/**
 * print_triangle - write the function that prints a triangle,
 * followed by a new line
 * @size: size of the triangle
 * Return: none
*/
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = size - 1; j > i; j--)
			{
				_putchar(' ');
			}

			for (k = 0; k <= i; k++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
