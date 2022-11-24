#include "lists.h"

/**
 *print_list - write a function that prints all the
 *elements of a list_t list
 *@h: the pointer to the list
 *
 *Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int d = 0;
	const list_t *temp = h;

	while (temp)
	{
		d++;
		if (temp->str)
		{
			printf("[%d] %s\n", temp->len, temp->str);
		}
		else
			printf("[0] (nil)\n");

		temp = temp->next;
	}

	return (d);
}
