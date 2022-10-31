#include <string.h>
#include "main.h"

/**
 * _strspn - write a function that gets the length of a prefix substring
 * @s: string
 * @accept: substring
 *
 * Return: to pointer
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int g = strspn(s, accept);

	return (g);
}
