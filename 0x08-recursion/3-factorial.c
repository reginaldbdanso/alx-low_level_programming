#include "main.h"
#include <stdio.h>

/**
 * factorial - returns the factorial of a given number
 * @n: the given number
 * Return: Always 0.
 */
int factorial(int n)
{
	int result;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	result = n * factorial(n - 1);
	return (result);
}
