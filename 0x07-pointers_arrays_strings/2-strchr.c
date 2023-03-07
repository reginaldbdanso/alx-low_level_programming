#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string being searched
 * @c: character being located
 * Return: a ponter if found or a NULL if not found
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return s;
		}
		s++;
	}
	return (0);
}
