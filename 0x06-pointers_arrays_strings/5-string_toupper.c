#include <string.h>
#include "main.h"
/**
 * string_toupper - write a function that changes all the lowercase
 * letters of a string to uppercase
 * @str: pointer to the string
 * Return: 0
 */
char *string_toupper(char *str)
{
	int b;
	int len;

	len = strlen(str);

	for (b = 0; b < len; b++)
	{
		if (str[b] >= 'a' && str[b] <= 'z')
		{
			str[b] = str[b] - 32;
		}
	}

	return (str);
}
