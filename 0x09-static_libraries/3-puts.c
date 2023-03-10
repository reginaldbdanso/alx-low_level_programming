#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @s: pointer
 * Return:
 */
void _puts(char *s)
{
	while (*s != 0)
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
	return;
}
