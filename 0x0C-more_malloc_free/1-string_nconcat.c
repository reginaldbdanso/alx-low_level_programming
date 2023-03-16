#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: first n number of bytes from n2
 * Return: pointer to new allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int i, j, full_len;

	if (s2 == NULL)
		s2 = "";
	if ((int)n >= _strlen(s2))
		n = _strlen(s2);


	full_len = _strlen(s1) + n + 1;
	ptr = malloc(sizeof(char) * full_len);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < _strlen(s1); i++)
	{
		ptr[i] = s1[i];
	}
	j = 0;
	for (i = _strlen(s1); i < full_len - 1; i++)
	{
		ptr[i] = s2[j];
		j++;
	}

	return (ptr);
}



/**
 * _strlen - returns the length of a string
 * @s: pointer
 * Return: result.
 */
int _strlen(char *s)
{
int result;
result = 0;
while (*s != '\0')
{
s++;
result++;
}
return (result);
}
