#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: double pointer
 *
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int ndat;

	/* Traverse the list and free each node */
	temp = *head;
	*head = (*head)->next;
	/* Copy n field of the head node into ndat */
	ndat = temp->n;
	free(temp);

	return (ndat);
}
