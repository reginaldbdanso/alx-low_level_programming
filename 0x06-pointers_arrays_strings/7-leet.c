#include "main.h"
/**
 * leet - encodes a string into 1337.
 * @n: pointer
 * Return: n
 */
char *leet(char *n)
{
	int i, j;
	char string1[] = "aAeEoOtTlL";
	char string2[] = "4433007711";

	i = 0;
	while (n[i] != '\0')
	{
		j = 0;
		while (j < 10)
		{
			if (n[i] == string1[j])
			{
				n[i] = string2[j];
			}
			j++;
		}
		i++;
	}
	return (n);
}
