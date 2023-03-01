#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @str: pointer
 *
 * Return: str
 */
char *cap_string(char *str)
{
	int counter = 0;

	while (str[counter])
	{
		while (!(str[counter] >= 'a' && str[counter] <= 'z'))
			counter++;

		if (str[counter - 1] == ' ' ||
		    str[counter - 1] == '\t' ||
		    str[counter - 1] == '\n' ||
		    str[counter - 1] == ',' ||
		    str[counter - 1] == ';' ||
		    str[counter - 1] == '.' ||
		    str[counter - 1] == '!' ||
		    str[counter - 1] == '?' ||
		    str[counter - 1] == '"' ||
		    str[counter - 1] == '(' ||
		    str[counter - 1] == ')' ||
		    str[counter - 1] == '{' ||
		    str[counter - 1] == '}' ||
		    counter == 0)
			str[counter] -= 32;

		counter++;
	}

	return (str);
}
