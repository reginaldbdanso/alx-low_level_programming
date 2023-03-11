#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, d, n, lengthh, f, number;

	i = 0;
	d = 0;
	n = 0;
	lengthh = 0;
	f = 0;
	number = 0;

	while (s[lengthh] != '\0')
		lengthh++;

	while (i < lengthh && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			number = s[i] - '0';
			if (d % 2)
				number = -number;
			n = n * 10 + number;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);
	else
		return (n);
}
/**
 * main - Entry point
 * Description: Adds positive numbers.
 * @argc: - argument count
 * @argv: - array of strings
 *Return: 0 Always (Success)
 */
int main(int argc, char *argv[])
{
	unsigned int result;
	int i;

	result = 0;
	if (argc != 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (!((*argv[i] >= '0') && (*argv[i] <= '9')))
			{
				printf("Error\n");
				return (1);
			}
			else
				result += _atoi(argv[i]);
		}
		printf("%d\n", result);
	}
	else
		printf("0\n");

	return (0);
}
