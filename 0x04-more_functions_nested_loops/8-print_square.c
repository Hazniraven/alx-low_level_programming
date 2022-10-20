#include "main.h"
/**
 * print_square - write a function that prints a square, followed by a new line
 * @size: size of the square
 * Return: none
*/
void print_square(int size)
{
	char i;
	char j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
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
