#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: a pointer
 * @index: index of node
 * Return: the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	/* Traverse the list and free each node */
	while (head != NULL)
	{
		/* if the value of index matched the counter */
		if (i == index)
			return (head);
		/* move head pointer to the next node */
		head = head->next;
		i++;
	}
	return (head);
}
