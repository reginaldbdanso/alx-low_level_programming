#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: head node receiving argument
 * Return:
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	/* Traverse the list and free each node */
	while (head != NULL)
	{
	temp = head;
	head = head->next;
	free(temp);
	}
}
