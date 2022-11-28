#include "lists.h"

/**
 *delete_nodeint_at_index - Write a function that deletes the node at
 *index index of a listint_t linked list
 *@head: oointer to the first node
 *@index: iss the index of the node that should be deleted
 *
 *Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *temp2;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
	{
		if (temp->next == NULL)
			return (-1);
		temp = temp->next;
	}
	temp2 = temp->next;
	temp->next = (temp->next)->next;

	free(temp2);

	return (1);
}
