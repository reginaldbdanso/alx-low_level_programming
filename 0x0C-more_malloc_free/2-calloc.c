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
	void *ptr;
	int i;
	char *aray;

	if ((nmemb == 0) || (size == 0))
		return (NULL);


	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);

	aray = (char *)ptr;
	for (i = 0; i < (int)(nmemb * size); i++)
	{
		aray[i] = 0;
	}

	return (aray);
}
