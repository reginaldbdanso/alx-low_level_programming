#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"


/**
 * main - Entry point
 * Description: Adds positive numbers.
 * @argc: - argument count
 * @argv: - array of strings
 *Return: 0 Always (Success)
 */
int main(int argc, char *argv[])
{
	int i, j, sum;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		char *s = argv[i];
		for (j = 0; s[j] != '\0'; j++)
		{
			if (!isdigit(s[j]))
			{
				printf("Error\n");
				return 1;
			}
		}
	sum += atoi(s);
	}

	printf("%d\n", sum);

	return 0;
}
