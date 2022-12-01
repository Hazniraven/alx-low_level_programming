#include "main.h"

/**
 *get_bit - write a function that returns the value of a bit at a given index
 *@n: the digit
 *@index: index of the number
 *
 *Return: the vale of the bit at index index or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int num;

	for (num = 0; num <= 64; num++)
	{
		if (index == num)
			return (n & 1);
		n = n >> 1;
	}

	return (-1);
}
