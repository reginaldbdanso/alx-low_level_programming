#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: pointer
 * Return: result.
 */
void print_rev(char *s)
{
int mcursor;
/*int mresult;*/
mcursor = 0;
/*mresult = 0;*/

while (*s != '\0')
{
mcursor++;
s++;
}
s--;
while (mcursor >= 0)
{
_putchar(*s);
mcursor--;
s--;
}
_putchar('\n');
return;
}
