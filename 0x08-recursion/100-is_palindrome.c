#include "main.h"
#include <string.h>

int check(char *s, int a);

/**
 *is_palindrome - wrte a function that returns 1 if a string
 *is a palindrome and 0 if not
 *@s: pointer to the string
 *
 *Return: 0 or 1
 */
int is_palindrome(char *s)
{
	return (check(s, 0));
}

/**
 *check - check if the string is a palindrome
 *@s: pointer to s
 *@a: the character in string
 *
 *Return: 0 or 1
 */
int check(char *s, int a)
{
	int len = strlen(s);

	if (a == len)
	{
		return (1);
	}
	else if (s[a] != s[len - 1 - a])
	{
		return (0);
	}
	return (check(s, a + 1));
}
