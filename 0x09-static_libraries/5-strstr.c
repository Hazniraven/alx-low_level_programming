#include <string.h>
#include "main.h"

/**
* _strstr - write a function that locates a substring
* @haystack: string
* @needle: substring
*
* Return: a pointer
*/
char *_strstr(char *haystack, char *needle)
{
	char *s = strstr(haystack, needle);

	return (s);
}
