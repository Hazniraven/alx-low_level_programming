#include "lists.h"

/**
 *print_listint - write a function that prints all the elements of a
 *listint_t list
 *@h: pointer to the first node of the list
 *
 *Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t d = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n",  h->n);
		d++;

		h = h->next;
	}

	return (d);
}
