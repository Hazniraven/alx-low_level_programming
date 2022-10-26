#include <string.h>
#include "main.h"
/**
 * _strncpy - write a function that copies a string
 * @dest: first string
 * @src: second string
 * @n: integer
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *v = strncpy(dest, src, n);

	return (v);
}
