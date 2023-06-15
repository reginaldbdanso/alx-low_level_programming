#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a
 * dlistint_t linked list.
 * @head: a pointer
 * Return: sum of all data
 */
int sum_dlistint(dlistint_t *head)
{
	unsigned int i = 0;
	int sum = 0;

	if (head == NULL) /* if empty list */
		return (0);

	/* Traverse the list and free each node */
	while (head != NULL)
	{
		sum += head->n;

		/* move head pointer to the next node */
		head = head->next;
		i++;
	}
	return (sum);
}
