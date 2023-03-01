#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @str: pointer
 * Return: dest
 */

char *string_toupper(char *str)
{
	int i;

	i = 0;
	for (; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}

	return (str);
}
