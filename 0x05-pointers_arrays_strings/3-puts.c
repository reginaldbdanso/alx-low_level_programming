#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: pointer
 * Return:
 */
void _puts(char *str)
{

while (*str != 0)
{
printf("%c", *str);
str++;
}
printf("\n");
return;
}
