#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * strtow - splits a string into two words.
 * @str: string
 *Return: pointer to an array of strings
 */

char **strtow(char *str)
{
	char **ptr;
	int i, j, count, count2, slen, full_len;

	if ((str == NULL) || (strlen(str) == 0))
		return (NULL);
	slen = strlen(str);
	i = count = count2 = 0;
	while (str[i] != '\0')
	{
		if(str[i] == ' ')
			count++;
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		if(str[i] == ' ')
		{
			i++;
			continue;
		}
		else
		{
			while ((str[i] != ' ') || (str[i] != '\0'))
			{
				i++;
			}
			count2++;
		}
	}


	full_len = slen - count -1;

	ptr = (char **) malloc(full_len * sizeof(char) + count2 + 1);
	if (str == NULL)
	{
		printf("Memory allocation failed\n");
		return (NULL);
	}
	i = j = 0;
	while (str[i] != '\0')
	{
		if(str[i] == ' ')
		{
			i++;
			continue;
		}
		else
		{
			while ((str[i] != ' ') || (str[i] != '\0'))
			{
				*ptr[j] = str[i];
				j++;
				i++;
			}
			*ptr[j++] = '\n';
		}
	}
/**	post = 0;
 *	for (i = 0; i < count2; i++)
 *	{
 *		len = strlen(ptr[i]);
 *		strncpy(str + post, ptr[i], len);
 *		post += len;
 *		str[post++] = '\n';
 *	}
 */
	*ptr[j] = '\0';

	return (ptr);
}
