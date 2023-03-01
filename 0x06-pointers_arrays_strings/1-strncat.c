#include "main.h"

/**
 * _strncat - concatenates two strings at most n bytes
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to be concatenated
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j, m, newlen;

	i = j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		j++;
	}
	newlen = i + n;

	for (m = i; m < newlen; m++)
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
	return (dest);
}
