#include "lists.h"

/**
 *print_listint_safe - write a function that prints a
 *listint_t linked list
 *@head: pointer to the first node
 *
 *Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t d = 0;
	listptr_t *hptr, *new, *add;

	hptr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listptr_t));

		if (head == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = hptr;
		hptr = new;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&hptr);
				return (d);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		d++;
	}

	free_listp(&hptr);
	return (d);
}

/**
 *free_listp - frees a linked list
 *@head: pointer to the head of the list
 *
 *Return: none
 */
void free_listp(listptr_t **head)
{
	listptr_t *temp;
	listptr_t *pres;

	if (head != NULL)
	{
		pres = *head;
		while ((temp = pres) != NULL)
		{
			pres = pres->next;
			free(temp);
		}
		*head = NULL;
	}
}
