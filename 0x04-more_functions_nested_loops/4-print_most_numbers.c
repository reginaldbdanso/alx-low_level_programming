#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9,\
 without 2 and 4 followed by a new line.
 *
 * Return:
 */
void print_most_numbers(void)
{
int i;
for (i = '0'; i <= '9'; i++)
{
if (i == '2' || i == '4')
{
;
}
else
{
_putchar(i);
}
}
_putchar('\n');
return;
}

