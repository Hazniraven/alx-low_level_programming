#include "main.h"

/**
 *get_endianness - write a function that can check the endianness
 *
 *Return: 0 0r 1
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	return (*c);
}
