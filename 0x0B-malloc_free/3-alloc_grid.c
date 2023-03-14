#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: - array width
 * @height: array height
 *Return: pointer to a 2-dimensional array
 */

int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	if ((width <= 0) || (height <= 0))
		return (NULL);

	ptr = (int **)malloc(width * sizeof(int *));
	for (i = 0; i < width; i++)
		ptr[i] = (int *)malloc(height * sizeof(int));
	if (ptr == NULL)
	{
		printf("Memory allocation failed\n");
		for (i = 0; i < width; i++)
		{
			free(ptr[i]);
		}
		free(ptr);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
				ptr[i][j] = 0;
		}

	}
	return (ptr);
}
