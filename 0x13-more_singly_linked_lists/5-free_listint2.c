#include "lists.h"

/**
 * free_listint2 -  frees a listint_t list.
 * Description: The function sets the head to NULL
 * @head: a pointer
 *
 * Return:
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	/* Traverse the list and free each node */
	while (*head != NULL)
	{
	temp = *head;
	*head = (*head)->next;
	free(temp);
	}
}
