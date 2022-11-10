#include "main.h"

/**
 *malloc_checked - write a function that allocates memory using malloc
 *@b: bytes to be allocated
 *
 *Return: none
 */
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
