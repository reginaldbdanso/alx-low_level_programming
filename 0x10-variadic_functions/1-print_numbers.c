#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"


/**
 * print_numbers - prints numbers, followed by a new line
 *
 * @separator: string
 * @n: argument count
 * Return: 0 Always (Success)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list_args;


	if (separator == NULL)
		return;

	va_start(list_args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list_args, int));
		if (i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list_args);
}
