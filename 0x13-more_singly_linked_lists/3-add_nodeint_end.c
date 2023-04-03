#include "lists.h"

/**
 * add_nodeint_end -  adds a new node at the end of a listint_t list.
 * @head: double pointer
 * @n: integer data
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	/* Allocate memory for the new node */
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		printf("Error\n");
		return (NULL);
	}
	/* Copy n into the n field of the new node */
	new->n = n;

	new->next = NULL;
	/* If the list is empty, the new node becomes the head */
	if (*head == NULL)
		*head = new;
	else
	{
		/* Otherwise, traverse the list to the end */
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		/* Set the next pointer of the last node to the new node */
		temp->next = new;
	}
	return (new);
}
