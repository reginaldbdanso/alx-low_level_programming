#include "lists.h"

/**
 * free_list -  frees a list_t list.
 * @head: double pointer
 *
 * Return: number of nodes.
 */
void free_list(list_t *head)
{
	list_t *temp;

	/* Traverse the list and free each node */
	while (head != NULL)
	{
	temp = head;
	head = head->next;
	free(temp->str);
	free(temp);
	}
}
