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
/* 	free(temp->n); */
	free(temp);
	}
}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;

    head = NULL;
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);
    print_listint(head);
    free_listint(head);
    head = NULL;
    return (0);
}

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

#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: pointer
 *
 * Return: number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
