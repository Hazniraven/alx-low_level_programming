#include "main.h"
/**
 * _isupper - write a function that checks for uppercase character
 * @c: integer to be checked for uppercase character
 *
 * Return: 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);

}
