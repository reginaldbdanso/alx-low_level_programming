#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: pointer
 * @accept: pointer
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s != '\0')
	{
		a = 0;
		while (accept[a] != '\0')
		{
			if (*s == accept[a])
			{
				return (s);
			}
			a++;
		}
		s++;
	}

	return ('\0');
}
