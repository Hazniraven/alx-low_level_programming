#include "main.h"

/**
 *array_range - write a function that creates an array of integers
 *@min: minimum value
 *@max: maximum value
 *Return: 0
 */
int *array_range(int min, int max)
{
	int *a;
	int i, len = 0, s = min;

	if (min > max)
		return (NULL);

	while (s <= max)
	{
		s++;
		len++;
	}

	a = malloc(sizeof(int) * len);
	if (a == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		a[i] = min;
		min++;
	}

	return (a);
}
