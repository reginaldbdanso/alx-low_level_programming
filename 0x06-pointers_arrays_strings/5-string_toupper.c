#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @str: pointer
 * Return: dest
 */
char *string_toupper(char *str)
{
	char a, c, upper[27], lower[27];
	int b, d, h, i, j;

	a = 'A';
	for (b = 0; b < 26; b++)
	{
		upper[b] = a;
		a++;
	}
	upper[26] = '\0';
	c = 'a';
	for (d = 0; d < 26; d++)
	{
		lower[d] = c;
		c++;
	}
	lower[26] = '\0';
	h = 0;
	while (str[h] != '\0')
		h++;
	for (i = 0; i < 26; i++)
	{
		for (j = 0; j < h - 1 ; j++)
		{
			if (str[j] == lower[i])
			{
				str[j] = upper[i];
			}
		}
	}
	return (str);
}
