#include <string.h>
#include "main.h"

/**
* _strpbrk - write a function that searches a string for any of a
* set of bytes.
* @s: string
* @accept: substring
*
* Return: to a pointer
*/
char *_strpbrk(char *s, char *accept)
{
	char *j = strpbrk(s, accept);

	return (j);
}
