#include "function_pointers.h"

/**
 *int_index - write a function that searches for an integer
 *@array: array of numbers
 *@size: number of elements in the array
 *@cmp: pointer to the function
 *
 *Return: index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, res;

	if (size <= 0)
		return (-1);

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			res = cmp(array[i]);
			if (res != 0)
				return (i);
		}
	}

	return (-1);
}
