#include "main.h"
#include <string.h>
/**
 * _strcpy - write a function that copies and string pointed to be src
 * including the terminating null byte (\0), to the buffer pointed
 * to by dest
 * @dest: first char
 * @src: second char
 * Return: to the buffer pointed to by dest
 */
char *_strcpy(char *dest, char *src)
{
	char *d = strcpy(dest, src);

	return (d);
}
