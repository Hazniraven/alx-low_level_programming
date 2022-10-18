#include "main.h"
/**
 * _isalpha - write a function that checks for alphabetical character
 * Return: returns 1 if character is a letter and returns 0 if it is not
 * @c: the character to be checked
*/
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
