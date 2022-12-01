#include "main.h"

/**
 *set_bit - write a function that sets the vaue of a bit to 1 at a given index
 *@n: the digit
 *@index: the index of the digit
 *
 *Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num = 1, d;

	if (index > 64)
		return (-1);
	for (d = 0; d < index; d++)
		num *= 2;

	*n = *n | num;
	return (1);
}
