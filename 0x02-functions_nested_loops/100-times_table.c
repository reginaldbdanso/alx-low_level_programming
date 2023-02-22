#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 *
 *@n: the number expected
 *
 * Return:
 */
void print_times_table(int n)
{
int i;
int j;
int product;

if (!(n > 15 || n < 0))
{
i = 0;
while (i <= n)
{
_putchar('0');
for (j = 1; j <= n; j++)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
product = (i *j);
if (product <= 9)
{
_putchar(' ');
}
else if (product > 9 && product <= 99)
{
_putchar((product / 10) + '0');
}
else
{
_putchar((product / 100) + '0');
_putchar((product / 10) % 10 + '0');
}
_putchar((product % 10) + '0');
}
_putchar('\n');
i++;
}
}
else
{;
}
}
