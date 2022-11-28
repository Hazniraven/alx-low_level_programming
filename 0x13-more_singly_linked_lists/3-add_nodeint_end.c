#include "lists.h"

/**
 *add_nodeint_end - write a function that adds a new node at the
 *end of a listint_t list
 *@head: pointer to the first of the element
 *@n: value of the element
 *
 *Return: address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = *head;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->next = NULL;
	new->n = n;

	if (temp == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next)
			temp = temp->next;
		temp->next = new;
	}

	return (*head);
}
