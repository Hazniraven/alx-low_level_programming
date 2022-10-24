#include "main.h"
/**
 * _strlen - write a function that returns the length of a string
 * @s: length of string
 * Return: 0
 *
 */
int _strlen(char *s)
{
	int b = 0;

	for (; *s++;)
		b++;

	return (b);
}
