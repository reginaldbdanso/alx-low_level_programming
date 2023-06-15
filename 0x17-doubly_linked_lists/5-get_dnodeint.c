#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: a pointer
 * @index: index of node
 * Return: the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i = 0;

	/* Traverse the list and free each node */
	while (head != NULL)
	{
		temp = head;
		/* if the value of index matched the counter */
		if (i == index)
			return (temp);

		/* move head pointer to the next node */
		head = head->next;
		i++;
	}
	return (NULL);
}
