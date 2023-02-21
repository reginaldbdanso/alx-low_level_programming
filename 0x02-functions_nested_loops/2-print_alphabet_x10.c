#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet in lowercase
 *
 *Return:
 */

void print_alphabet_x10(void)
{
int i;
char c;

for (i = 0; i < 10; i++)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
return;
}
