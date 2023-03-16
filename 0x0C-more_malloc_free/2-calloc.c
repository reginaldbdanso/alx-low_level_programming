#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements 
 * @size: array size
 * Return: pointer to new allocated space in memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	int i;

	if ((nmemb == 0) || (size == 0))
		return (NULL);


	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (int)nmemb; i++)
	{
	  ptr[i] = 0;
	}

	return (ptr);
}
