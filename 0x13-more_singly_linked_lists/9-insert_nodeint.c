#include "lists.h"

/**
 *insert_nodeint_at_index - write a function that inserts a node in
 *a given position
 *@head: pointer to the first node
 *@idx: the index of the list where the new node should be added
 *@n: value at the node
 *
 *Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	listint_t *new;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	if (idx == 0)
	{
		new->next = temp;
		*head = new;
		return (new);
	}

	for (i = 0; i < idx - 1; i++)
	{
		if (!temp)
			return (NULL);

		temp = temp->next;
	}

	new->next = temp->next;
	temp->next = new;

	return (new);

}
