#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in\
 memory, which contains a copy of the string given as a parameter.
 * @str: - string
 *Return: pointer to new space in memory
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int i;

	if (str == NULL)
		return (NULL);
	ptr = (char *)malloc(strlen(str) * sizeof(char) + 1);
	if (ptr == NULL)
		printf("Memory allocation failed\n");
	else
	{
		for (i = 0; i < strlen(str); i++)
		ptr[i] = str[i];
	}
	return (ptr);
}
