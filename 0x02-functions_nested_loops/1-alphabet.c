#include "main.h"
/**
 * print_alphabet - prints the alphabet, in lowercase,
 * followed by a line
 *
 * Return: Always 0
*/
void print_alphabet(void)
{
	int l;

	for (l = 'a'; l <= 'z'; l++)
		_putchar(l);

	_putchar('\n');
}
