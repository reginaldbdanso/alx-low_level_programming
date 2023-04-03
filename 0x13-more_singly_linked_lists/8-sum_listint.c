#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n)
 * of a listint_t linked list.
 * @head: a pointer
 *
 * Return: sum of all the data (n)
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	if (head == NULL)
		return (0);

	/* Traverse the list and free each node */
	while (head != NULL)
	{
		temp = head;
		/* update sum with the n value of each node */
		sum += temp->n;

		/* move head pointer to the next node */
		head = head->next;
	}

	return (sum);
}
