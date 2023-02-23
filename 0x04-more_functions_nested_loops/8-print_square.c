#include "main.h"

/**
 * print_square - prints a square, followed by a new line.
 * @size: the expected input
 *
 * Return:
 */
void print_square(int size)
{

int i;
int j;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < size; i++)
{
j = 0;
while (j < size)
{
_putchar('#');
j++;
}
_putchar('\n');
}
}

return;
}
