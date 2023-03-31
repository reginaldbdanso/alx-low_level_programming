#include "lists.h"

/**
 * add_node_end -  adds a new node at the end of a list_t list.
 * @head: double pointer
 * @str: string
 *
 * Return: number of nodes.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;

	/* Allocate memory for the new node */
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	/* Duplicate the string */
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	/* Add string length and set the next pointer to NULL */
	new->len = strlen(str);
	new->next = NULL;
	/* If the list is empty, make the new node the head */
	if (*head == NULL)
		*head = new;
	else
	{
		/* Otherwise, traverse the list to the end */
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		/* Set the next pointer of the last node to the new node */
		temp->next = new;
	}
	return (new);
}
