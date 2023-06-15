#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a dlistint_t list.
 * @h: head node receiving argument
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
