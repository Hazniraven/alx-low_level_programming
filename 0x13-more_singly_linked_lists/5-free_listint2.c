#include "lists.h"

/**
 *free_listint2 - write a function that frees a listint_t list
 *@head: pointer to the first node
 *
 *Return: none
 */
void free_listint2(listint_t **head)
{
	listint_t *temp2;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		temp2 = *head;
		*head = (*head)->next;
		free(temp2);
	}

	*head = NULL;
}
