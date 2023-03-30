#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: pointer
 *
 * Return: number of elements in the list.
 */
size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		/* if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str); */
		h = h->next;
		counter++;
	}
	return (counter);
}
