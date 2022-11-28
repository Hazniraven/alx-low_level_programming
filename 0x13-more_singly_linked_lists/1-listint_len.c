#include "lists.h"

/**
 *listint_len - Write a function that returns the number of elements
 *in a linked listint_t list
 *@h: pointer to the first node of the list
 *
 *Return: len
 */
size_t listint_len(const listint_t *h)
{
	size_t d = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		d++;
		h = h->next;
	}
	return (d);
}
