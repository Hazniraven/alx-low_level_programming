#include "main.h"

/**
 * print_chessboard - write a function that prints the chessboard
 * @a: array
 *
 * Return: none
 */
void print_chessboard(char (*a)[8])
{
	int b, c;

	for (b = 0; b < 8; b++)
	{
		for (c = 0; c < 8; c++)
		{
			_putchar(a[b][c]);
			if (c == 7)
			{
				_putchar('\n');
			}
		}
	}
}
