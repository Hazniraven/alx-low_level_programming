#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *create_array - write a function that craetes an array of chars and
 *initializes it with a specific char
 *@size: size of the array
 *@c: array
 *
 *Return: 0
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(size * sizeof(char));


	if (size == 0)
	{
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}

	return (ptr);
}
