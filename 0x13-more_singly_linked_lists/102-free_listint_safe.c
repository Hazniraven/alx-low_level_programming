#include "lists.h"

/**
 *free_listp2 - write a function that frees a
 *listint_t linked list
 *@head: pointer to the first node
 *
 *Return: none
 */
void free_listp2(listptr_t **head)
{
	listptr_t *temp;
	listptr_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 *free_listint_safe - frees a listint_t list safely
 *@h: pointer to the list to free
 *
 *Return: number of nodes
 */
size_t free_listint_safe(listint_t **h)
{
	size_t d = 0;
	listptr_t *hptr, *new, *add;
	listint_t *curr;

	hptr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listptr_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = hptr;
		hptr = new;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listp2(&hptr);
				return (d);
			}
		}

		curr = *h;
		*h = (*h)->next;
		free(curr);
		d++;
	}
	*h = NULL;
	free_listp2(&hptr);
	return (d);
}
