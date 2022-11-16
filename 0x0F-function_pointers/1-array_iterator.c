#include "function_pointers.h"

/**
 *array_iterator - Write a function that executes a function given
 *as a parameter on each element of an array
 *@array: array
 *@size: size of array
 *@action: pointer to the function
 *
 *Return: none
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
