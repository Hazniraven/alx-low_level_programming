#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *str_concat - write a function that concatenates two strings
 *@s1: first string
 *@s2: second string
 *Return: NULL or a pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *d;
	int i, len1, len2, lend;

	if (s1 == NULL)
	{
		len1 = 0;
	}
	else
	{
		len1 = strlen(s1);
	}
	if (s2 == NULL)
	{
		len2 = 0;
	}
	else
	{
		len2 = strlen(s2);
	}

	d = malloc((len1 + len2 + 1) * sizeof(char));

	if (d == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
		d[i] = s1[i];
	for (i = 0; i < len2; i++)
		d[i + len1] = s2[i];

	lend = strlen(d);
	d[lend] = '\0';

	return (d);
}
