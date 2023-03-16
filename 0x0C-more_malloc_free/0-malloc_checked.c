#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * malloc_checked - allocated memory using malloc
 * @b: size of memory
 *Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		printf("Memory allocation failed\n");

		exit(98);
	}
	return (ptr);
}
