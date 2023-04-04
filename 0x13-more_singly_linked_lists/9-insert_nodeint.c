#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * of a listint_t linked list.
 * @head: a pointer
 * @idx: he index of the list where the new node should be added
 * @n: integer data of the node being created.
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp1, *temp2 = NULL, *new;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	/* create a new node */
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	/* insert n value into new node */
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	temp1 = temp2 = *head;
	/* Traverse the list */
	while (temp1 != NULL)
	{
		/* if the value of index matched the counter */
		if (i == idx)
		{
			/* insert new node into list*/
			new->next = temp1;
			temp2->next = new;
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
