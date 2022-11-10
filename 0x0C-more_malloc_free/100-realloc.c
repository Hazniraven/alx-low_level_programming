#include "main.h"

/**
 *_realloc - write a function that reallocate a memory block using
 *malloc and free
 *@ptr: pointer to the memory
 *@old_size: size in bytes of ptr
 *@new_size: new size in bytes of new memory block
 *Return: NULL or new pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new;
	unsigned int n = 0;

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);

	new = malloc(new_size);
	if (new == NULL)
		return (NULL);

	while (n < new_size && n < old_size)
		n++;

	memcpy(new, ptr, n);
	free(ptr);

	return (new);
}
