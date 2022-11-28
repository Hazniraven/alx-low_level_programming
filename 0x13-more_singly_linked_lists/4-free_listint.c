#include "lists.h"

/**
 *free_listint - write a function that frees a listint_t list
 *@head: pointer the the first node
 *
 *Return: none
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;
	listint_t *temp2;

	if (head)
	{
		while (temp->next)
		{
			temp2 = temp;
			temp = temp->next;
			free(temp2);
		}

		free(temp);
	}
}
