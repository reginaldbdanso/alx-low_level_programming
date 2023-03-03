#include "main.h"

/**
 * rev_string - reverses a string
 * @n: pointer to a string
 * Return:
 */

void rev_string(char *n)
{
	char holder;
	int i;
	int j;

	i = j = 0;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;

	for (j = 0; j < i; j++, i--)
	{
		holder = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = holder;
	}
}

/**
 * infinite_add - add two numbers together
 * @n1: pointer to the 1st number
 * @n2: pointer to the 2nd number
 * @r: pointer to buffer that stores the result
 * @size_r: buffer size
 * Return: pointer
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0, i = 0, j = 0, digits = 0;
	int num1 = 0, num2 = 0, holder2 = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || overflow == 1)
	{
		if (i < 0)
			num1 = 0;
		else
			num1 = *(n1 + i) - '0';
		if (j < 0)
			num2 = 0;
		else
			num2 = *(n2 + j) - '0';
		holder2 = num1 + num2 + overflow;
		if (holder2 >= 10)
			overflow = 1;
		else
			overflow = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (holder2 % 10) + '0';
		digits++;
		j--;
		i--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	rev_string(r);
	return (r);
}
