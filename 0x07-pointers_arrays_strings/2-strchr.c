#include <string.h>
#include "main.h"

/**
 * _strchr - write a function that locates a character in a string
 * @s: string
 * @c: character
 *
 * Return: a pointer
 */
char *_strchr(char *s, char c)
{
	char *d = strchr(s, c);

	return (d);
}
