#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 *
 *
 * Return:
 */
void times_table(void)
{
int i;
int j;
int product;

i = 0;
while (i <= 9)
{
_putchar('0');
for (j = 1; j <= 9; j++)
{
_putchar(',');
_putchar(' ');
product = (i *j);
if (product <= 9)
{
_putchar(' ');
}
else
{
_putchar((product / 10) + '0');
}
_putchar((product % 10) + '0');
}
_putchar('\n');
i++;
}

}
