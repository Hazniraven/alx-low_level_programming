#include <string.h>
#include "main.h"
/**
* _strncat - write a function that concatenates two strings
* @dest: first string
* @src: second string to be concatenated
* @n: bytes from src
* Return: 0
*/
char *_strncat(char *dest, char *src, int n)
{
	char *b = strncat(dest, src, n);

	return (b);
}
