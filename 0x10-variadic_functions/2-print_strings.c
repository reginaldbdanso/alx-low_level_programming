#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"


/**
 * print_strings - prints strings, followed by a new line
 *
 * @separator: string
 * @n: argument count
 * Return: 0 Always (Success)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *ptr;
	va_list list_args;

	va_start(list_args, n);

	for (i = 0; i < n; i++)
	{
		ptr = va_arg(list_args, char*);
		if (ptr == NULL)
			printf("(nil)");
		else
			printf("%s", ptr);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list_args);
}
