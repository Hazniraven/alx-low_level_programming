#include "lists.h"

/**
 *add_node - write a function that adds a new node at
 *the beginning of a list_t list
 *@head: pointer to the head of the node
 *@str: pointer to the string in node
 *Return: address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = *head;
	list_t *new = NULL;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = temp;

	*head = new;

	return (new);
}
