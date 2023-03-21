#include "main.h"
#include <unistd.h>

/**
 * main - prints the name of the file it was compiled from, followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	_puts(__BASE_FILE__);
	return (0);
}

/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: pointer
 * Return:
 */
void _puts(char *str)
{

	while (*str != 0)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
	return;
}

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
