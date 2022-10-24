#include "main.h"
/**
 * swap_int - write a function that swaps the value of two integers
 * @a: first integer
 * @b: second integer
 * Return: none
 */
void swap_int(int *a, int *b)
{
	int g;

	g = *a;
	*a = *b;
	*b = g;
}
