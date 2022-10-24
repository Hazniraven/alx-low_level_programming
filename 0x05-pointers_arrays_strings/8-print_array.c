#include "main.h"
#include <stdio.h>
/**
 * print_array - write a function that prints n elements
 * of an array of integers, followed by a new line
 * @a: first integer
 * @n: second integer
 * Return: none
 */
void print_array(int *a, int n)
{
	int p;

	for (p = 0; p < n; p++)
		if (p != n - 1)
			printf("%d, ", a[p]);
		else
			printf("%d", a[p]);
	printf("\n");
}
