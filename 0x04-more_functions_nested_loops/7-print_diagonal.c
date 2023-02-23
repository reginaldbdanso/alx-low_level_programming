#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal.
 * @n: the expected input
 *
 * Return:
 */
void print_diagonal(int n)
{

int i;
int j;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < n; i++)
{
j = 0;
while (j < i)
{
_putchar(' ');
j++;
}
_putchar('\\');
_putchar('\n');
}
}

return;
}
