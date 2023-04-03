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

		temp1 = temp2 = *head;
	/* Traverse the list and free each node */
	while (temp1 != NULL)
	{
		/* if the value of index matched the counter */
		if (i == idx)
		{
			/* create a new node */
			new = malloc(sizeof(listint_t));
			if (new == NULL)
				return (NULL);
			/* insert n value into new node */
			new->n = n;
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
	return (*head);
}