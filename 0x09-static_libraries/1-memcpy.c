#include <string.h>
#include "main.h"

/**
 * _memcpy - write a function that copies memory area
 * @dest: first memory area
 * @src: second memory area
 * @n: first bytes
 *
 * Return: to pointer dest/s
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *t = memcpy(dest, src, n);

	return (t);
}
