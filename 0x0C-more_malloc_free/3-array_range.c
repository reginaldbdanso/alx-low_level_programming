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
	/*	int i;*/

	if (min > max)
		return (NULL);


	ptr = malloc((max - min) + 1);
	if (ptr == NULL)
		return (NULL);


/**	for (i = min; i <= max; i++)
 *	{
 *		ptr[i] = 0;
 *	}
 */
	return (ptr);
}
