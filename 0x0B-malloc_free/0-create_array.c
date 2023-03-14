#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes\
 it with a specific char.
 * @size: - amount of memory to allocate
 * @c: character to use
 *Return: 0 Always (Success)
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = (char*)malloc(size * sizeof(char));
	if (ptr == NULL)
		printf("Memory allocation failed\n");
	if (size == 0)
		return (NULL);
	else
	{
		for (i = 0; i < size; i++)
		ptr[i] = c;
	}
	return (ptr);
}
