#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: pointer
 * @accept: pointer
 * Return: a
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a;
	int b;

	a = 0;
	while (*s)
	{
		b = 0;
		while (accept[b])
		{
			if (*s == accept[b])
			{
				a++;
				break;
			}
			else if (accept[b + 1] == '\0')
				return (a);
			b++;
		}
		s++;
	}
	return (a);
}
