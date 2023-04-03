#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * index of a listint_t linked list.
 * @head: a pointer
 * @index: he index of the list where the new node should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp1, *temp2;
	unsigned int i = 0;

	if (*head == NULL)/* Empty list */
		return (-1);

	temp2 = NULL;
	temp1 = *head;
	/* Traverse the list */
	while (temp1 != NULL)
	{
		/* if the value of index matched the counter */
		if (i == index)
		{
			if (index == 0)
			{
				*head = temp1->next;
				free(temp1);
				return (1);
			}
			/* delete node from the list*/
			temp2->next = temp1->next;
			free(temp1);
			return (1);
		}

		/* move head pointer to the next node */
		temp2 = temp1;
		temp1 = temp1->next;
		i++;
	}
	return (-1);
}
