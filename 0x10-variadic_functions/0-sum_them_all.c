#include <stdarg.h>
#include "variadic_functions.h"


/**
 * sum_them_all - returns the sum of all its parameters
 *
 * @n: argument count
 *
 * Return: 0 Always (Success)
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list_args;

	if (n == 0)
		return (0);

	va_start(list_args, n);

	unsigned int i;
	int sum;

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(list_args, int);

	va_end(list_args);
	return (sum);
}
