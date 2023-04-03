#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: a pointer
 * @index: index of node
 *
 * Return: the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
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

	return (head);
}
