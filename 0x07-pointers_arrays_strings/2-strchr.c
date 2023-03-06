#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string being searched
 * @c: character being located
 * Return: a ponter if found or a NULL if not found
 */
char *_strchr(char *s, char c)
{
	int counter;

	for (counter = 0; s[counter] != '\0'; counter++)
	{
		if (s[counter] == c)
			return (s + counter);
	}
	return (0);
}
