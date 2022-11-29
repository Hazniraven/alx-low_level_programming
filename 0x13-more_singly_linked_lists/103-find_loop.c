#include "lists.h"

/**
 *find_listint_loop - write a function that finds a loop in a linked list
 *@head: pointer to the first node
 *
 *Return: The address of the node where the loop starts,
 *or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *node1 = head, *node2 = head;

	while (node1 != NULL && node2 != NULL && node2->next != NULL)
	{
		node1 = node1->next;
		node2 = node2->next->next;

		if (node1 == node2)
		{
			node1 = head;
			break;
		}
	}
	if (node1 == NULL || node2 == NULL || node2->next == NULL)
		return (NULL);

	while (node1 != node2)
	{
		node1 = node1->next;
		node2 = node2->next;
	}
	return (node2);
}
