#include "main.h"

/**
 *flip_bits - Write a function that returns the number of bits
 *you would need to flip to get from one number to another
 *@n: first integer
 *@m: second integer
 *
 *Return: number of bits used to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int dif = n ^ m, res = 1;
	unsigned int cnt = 0, j;

	for (j = 0; j < sizeof(unsigned long int) * 8; j++)
	{
		if (res == (res & dif))
			cnt++;
		res = res << 1;
	}
	return (cnt);
}
