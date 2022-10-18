#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet in lower case
 * followed by a new line
 *
 * Return: 0
 *
*/
void print_alphabet_x10(void)
{
	int j;
	int k = 10;

	while (k != 0)
	{
		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);
		k--;
		_putchar('\n');
	}
}
