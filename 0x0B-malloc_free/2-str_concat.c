#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings.
 * @s1: - first string
 * @s2: second string
 *Return: pointer to new space in memory
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int i, j, l;

	l = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	ptr = (char *)malloc((strlen(s1) + strlen(s2)) * sizeof(char) + 1);
	if (ptr == NULL)
		printf("Memory allocation failed\n");
	else
	{
		for (i = 0; i < strlen(s1); i++)
			ptr[i] = s1[i];
		for (j = i; j < (strlen(s1) + strlen(s2)); j++)
		{
			ptr[j] = s2[l];
			l++;
		}
	}
	return (ptr);
}
