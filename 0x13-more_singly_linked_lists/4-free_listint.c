#include "lists.h"

/**
 * free_listint -  frees a listint_t list.
 * @head: a pointer
 *
 * Return:
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	/* Traverse the list and free each node */
	while (head != NULL)
	{
	temp = head;
	head = head->next;
	free(temp);
	}
}
