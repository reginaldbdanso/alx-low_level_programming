#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer input
 * Return: result.
 */
void print_number(int n)
{
unsigned int numb;

if (n >= 0)
{
numb = n;
}
else
{
_putchar('-');
numb = -n;
}

if (numb / 10 != 0)
{
print_number(numb / 10);
}

_putchar((numb % 10) + '0');

return;
}
