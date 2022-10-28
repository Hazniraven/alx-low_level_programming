#include "main.h"

/**
 * _memset - write a function that fills memory with a constant byte
 * @s: pointer to memory area
 * @b: constant byte
 * @n: first bytes
 *
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
