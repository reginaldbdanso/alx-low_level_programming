#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min - minimum
 * @max - maximum
 * Return: pointer to new allocated space in memory
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
		return (NULL);


	ptr = malloc(sizeof(int) * ((max - min) + 1));
	if (ptr == NULL)
		return (NULL);


	for (i = 0; min <= max; i++)
	{
		ptr[i] = min;
		min++;
	}

	return (ptr);
}
