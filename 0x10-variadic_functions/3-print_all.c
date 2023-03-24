#include "variadic_functions.h"


/**
 * print_all - prints anything
 *
 * @format: string
 * Return: 0 Always (Success)
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *s, *cspace = "";
	va_list arglist;

	va_start(arglist, format);
	if (format != NULL)
	{
		while (format[i] != '\0')
		{
			switch (format[i])
			{
			case 'c':
				printf("%s%c", cspace, va_arg(arglist, int));
				break;
			case 'i':
				printf("%s%d", cspace, va_arg(arglist, int));
				break;
			case 'f':
				printf("%s%f", cspace, va_arg(arglist, double));
				break;
			case 's':
				s = va_arg(arglist, char*);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", cspace, s);
				break;
			default:
				i++;
				continue;
			}
			cspace = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(arglist);
}
