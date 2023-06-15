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

	if (*h == NULL)
		return (NULL);

	/* create a new node */
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	/* insert n value into new node */
	new->n = n;
	if (idx == 0) /* insert at the beginning */
	{
		new->next = *h;
		*h = new;
		return (new);
	}
	temp1 = temp2 = *h;
	/* Traverse the list */
	while (temp1 != NULL)
	{
		/* if the value of index matched the counter */
		if (i == idx)
		{
			/* insert new node into list*/
			new->next = temp1;
			new->prev = temp2;
			temp2->next = temp1->prev = new;
			return (new);
		}
		/* move head pointer to the next node */
		temp2 = temp1;
		temp1 = temp1->next;
		i++;
	}
	 /* check if index is out of range */
	if (i < idx)
		free(new);
	return (NULL);
}
