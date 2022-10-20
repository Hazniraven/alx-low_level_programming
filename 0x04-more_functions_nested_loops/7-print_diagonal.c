#include "main.h"
/**
 * print_diagonal - write a function that draws a diagonal
 * line on the terminal
 * @n: the number of times the character should be printed
 * Return: none
*/
void print_diagonal(int n)
{
	char i;
	char j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}


			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
