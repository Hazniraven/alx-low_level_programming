#include "lists.h"

/**
 *free_list - write a function that frees a list_t list
 *@head: pointer to the first node
 *
 *Return: none
 */
void free_list(list_t *head)
{
	list_t *temp = head;
	list_t *temp2;

	if (head)
	{
		while (temp->next)
		{
			temp2 = temp;
			temp = temp->next;
			free(temp2->str);
			free(temp2);
		}

		free(temp->str);
		free(temp);
	}
}

