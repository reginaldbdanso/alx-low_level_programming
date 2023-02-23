#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: the size of the triangle
 *
 * Return:
 */
void print_triangle(int size)
{

int i;
int j;
int k;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < size; i++)
{

j = size - 1;
while (j > i)
{
_putchar(' ');
j--;
}

k = 0;
while (k < i + 1)
{
_putchar('#');
k++;
}
_putchar('\n');
}
}

return;
}
