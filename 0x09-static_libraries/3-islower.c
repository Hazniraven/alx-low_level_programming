#include "main.h"
/**
* _islower - write a function that checks for lowercase characters
*
* Return: 1 if character is in lowercase and 0 if it is nor
* @c: the character to be checked
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
