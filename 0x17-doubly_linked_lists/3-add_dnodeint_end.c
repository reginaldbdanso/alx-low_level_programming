#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: head node receiving argument
 * @n: node data
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		printf("Error\n");
		return (NULL);
	}
	if (*head == NULL) /* if empty list */
	{
		new->prev = new->next = NULL;
		*head = new;
		return (new);
	}
	temp = *head;
	while (temp->next != NULL) /* Otherwise */
		temp = temp->next;
	new->n = n;
	temp->next = new;
	new->prev = temp;
	new->next = NULL;

	return (new);
}
