#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to the head node
 * @idx: index of the given node
 * @n: node data
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp1, *temp2 = NULL, *new;
	unsigned int i = 0;

	/* create a new node */
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n; /* insert n value into new node */
	if (*h == NULL) /*if empty list*/
	{
		*h = new;
		return (new);
	}
	if (idx == 0) /* insert at the beginning */
	{
		new->next = *h;
		*h = new;
		return (new);
	}
	temp1 = temp2 = *h;

	while (temp1 != NULL) /* Traverse the list */
	{
		if (i == idx) /* if index matched the counter */
		{
			new->next = temp1; /* insert new node into list*/
			new->prev = temp2;
			temp2->next = temp1->prev = new;
			return (new);
		}
		temp2 = temp1; /* move head pointer to the next node */
		temp1 = temp1->next;
		i++;
	}
	if (i < idx) /* check if index is out of range */
		free(new);
	return (NULL);
}
