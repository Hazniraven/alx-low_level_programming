#include "lists.h"

/**
 *get_nodeint_at_index - write a function that returns the nth node
 *of a listint_t linked list
 *@head: pointer to the first node
 *@index: index of the node
 *
 *Return: the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int cnt = 0;
	listint_t *store;

	if (head == NULL)
		return (NULL);
	while (temp != NULL)
	{
		if (cnt == index)
		{
			store = temp;
			return (store);
		}
		cnt++;
		temp = temp->next;
	}

	return (NULL);
}
