#include "main.h"
/**
 * reverse_array - write a function that reverses the content of an
 * array of integers
 * @a: pointer to array
 * @n: number of elements in the array
 * Return: none
 */
void reverse_array(int *a, int n)
{
	int l;
	int f;

	for (l = 0; l < n / 2; l++)
	{
		f = a[l];
		a[l] = a[n - l - 1];
		a[n - l - 1] = f;
	}
}
