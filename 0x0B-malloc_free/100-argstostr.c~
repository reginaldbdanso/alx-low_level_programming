#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: argument count
 * @av: actual arguments
 *Return: pointer to new space in memory
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int i;
	int len;
	int post;
	int full_len;

	if ((ac == 0) || (av == NULL))
		return (NULL);

	full_len = 0;
	for (i = 0; i < ac; i++)
		full_len += (strlen(av[i]) + 1);

	str = (char *) malloc(full_len * sizeof(char));
	if (str == NULL)
	{
		printf("Memory allocation failed\n");
		return (NULL);
	}

	post = 0;
	for (i = 0; i < ac; i++)
	{
		len = strlen(av[i]);
		strncpy(str + post, av[i], len);
		post += len;
		str[post++] = '\n';
	}

	str[post] = '\0';

	return (str);
}
