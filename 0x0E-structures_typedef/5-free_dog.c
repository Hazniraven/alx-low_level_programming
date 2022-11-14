#include "dog.h"

/**
 *free_dog - write a function that frees dogs
 *@d: pointer to dog
 *
 *Return: none
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
