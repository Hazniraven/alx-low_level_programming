#include "main.h"

/**
 *binary_to_uint - write a function that converts a binary number to
 *an unsigned int
 *@b: pointer to the string of 0 and 1 chars
 *
 *Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 1;
	int i;
	unsigned int total = 0;
	int len;

	if (b == NULL)
		return (0);
	len = strlen(b);
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			total += val;
		val *= 2;
	}
	return (total);
}
