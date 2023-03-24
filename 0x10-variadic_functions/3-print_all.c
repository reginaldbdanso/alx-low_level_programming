#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"


/**
 * print_all - prints anything
 *
 * @format: string
 * Return: 0 Always (Success)
 */
void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *s;
	va_list arglist;

	va_start(arglist, format);
	while (format[i] != '\0')
	{
		j = 0;
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(arglist, int));
			break;
		case 'i':
			printf("%d", va_arg(arglist, int));
			break;
		case 'f':
			printf("%f", va_arg(arglist, double));
			break;
		case 's':
			s = va_arg(arglist, char*);
			switch (*s)
			{
			case 0:
				printf("(nil)");
				break;
			default:
				printf("%s", s);
			}
			break;
		default:
			j = 1;
		}
		if ((format[i + 1] != '\0') && (j == 0))
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(arglist);
}
