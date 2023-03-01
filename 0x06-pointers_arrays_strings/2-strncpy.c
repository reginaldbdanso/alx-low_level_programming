#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to be concatenated
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j, m;

	i = j = 0;

	for (m = 0; m < n; m++)
	{
		if (m == 98)
		{
			break;
		}
		else
		{
			dest[m] = *src++;
		}
	}
	while (dest[i] != '\0')
	{
		i++;
	}
	if (n - i != 0)
	{
		for (j = i + 1; j < n; j++)
		{
			dest[j] = '\0';
		}
	}
	return (dest);
}
