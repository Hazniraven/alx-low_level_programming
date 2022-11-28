#include "lists.h"

/**
 *pop_listint - Write a function that deletes the head node of a
 *listint_t linked list, and returns the head node’s data (n)
 *@head:pointer to the first node
 *
 *Return: the head's node data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int d;

	if (*head == NULL)
		return (0);
	d = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (d);
}
