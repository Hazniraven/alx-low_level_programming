#include "lists.h"

/**
 *add_nodeint - write a function that adds a new node at the beginning
 *of a listint_t list
 *@head: pointer to the first element
 *@n: integer value of first element
 *
 *Return: address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->next = temp;
	new->n = n;

	*head = new;

	return (new);
}
