#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

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
}

/**
 * malloc_checked - allocated memory using malloc
 * @b: size of memory
 *Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		_puts("Memory allocation failed");
		exit(98);
	}
	return (ptr);
}
