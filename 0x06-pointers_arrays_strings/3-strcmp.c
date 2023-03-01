#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first pointer
 * @s2: second pinter
 *
 * Return: dest
 */

int _strcmp(char *s1, char *s2)
{
	int i, j;

        i = j = 0;

        while (s1[i] != '\0')
        {
                i++;
        }
        while (s2[j] != '\0')
        {
                j++;
        }
	if (i < j)
		return (-15);
	else if (j < i)
		return (15);
	else
		return (0);

}
