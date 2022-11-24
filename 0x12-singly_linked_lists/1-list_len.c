#include "lists.h"

/**
 *list_len - write a function that returns the number of linked elements
 *in linked list_t list
 *@h: pointer the to list
 *
 *Return: number of linked elements
 */
size_t list_len(const list_t *h)
{
	size_t d = 0;

	if (h == NULL)
		return (0);
	while (h != 0)
	{
		d++;
		h = h->next;
	}
	return (d);
}
