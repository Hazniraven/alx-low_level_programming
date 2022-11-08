#include "main.h"

/**
 *alloc - allocates space in memory for array
 *@str: pointer to the string
 *@len: length of string
 *@s1: size of array
 *Return: NULL or the pointer
 */
char **alloc(char *str, int len, int s1)
{
	char **ptr, bef;
	int i, j, s2;

	ptr = malloc(sizeof(char *) * (s1 + 1));
	bef = ' ';

	for (i = 0; i < s1; i++)
	{
		while (j < len)
		{
			if (str[j] == ' ' && bef != ' ')
			{
				bef = ' ';
				j++;
				break;
			}
			if (str[j] != ' ')
				s2++;
			bef = str[j];
			j++;
		}

		ptr[i] = malloc(sizeof(char) * (s2 + 1));
		if (ptr[i] == NULL)
		{
			return (NULL);
		}
		s2 = 0;
	}
	ptr[s1] = NULL;

	return (ptr);
}

/**
 *strtow - write a function that splits a string into words
 *@str: the pointer to the string to split
 *Return: NULL or a pointer
 */
char **strtow(char *str)
{
	char **ptr, bef = ' ';
	int i, j = 0, c = 0, d = 0, len, s = 0;

	if (str == NULL || strlen(str) == 0)
		return (NULL);
	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ')
			d = 1;
		if (str[i] != ' ' && bef == ' ')
			s++;
		bef = str[i];
	}
	ptr = alloc(str, len, s);
	if (ptr == NULL || d == 0)
		return (NULL);
	bef = ' ';
	for (i = 0; i < s; i++)
	{
		while (j < len)
		{
			if (str[j] == ' ' && bef != ' ')
			{
				bef = ' ';
				j++;
				break;
			}
			if (str[j] != ' ')
			{
				ptr[i][c] = str[j];
				c++;
			}
			bef = str[j];
			j++;
		}
		ptr[i][c] = '\0';
		c = 0;
	}
	return (ptr);
}
