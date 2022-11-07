#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 *_strdup - write a function that returns a pointer to a newly allocated
 *space in memory, which contains a copy of the string given as a parameter
 *@str: pointer to the string
 *
 *Return: NUL or a pointer to the new duplicate
 */
char *_strdup(char *str)
{
	int i, len;
	char *d;

	if (str == NULL)
		return (NULL);

	len = strlen(str);
	d = malloc((len + 1) * sizeof(char));

	if (d == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		d[i] = str[i];

	d[len] = '\0';

	return (d);
}
