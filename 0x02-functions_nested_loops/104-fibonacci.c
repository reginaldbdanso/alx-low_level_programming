#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
long int a;
long int b;
int i;
long int c;
a = 1;
b = 2;

printf("%lu, %lu, ", a, b);

for (i = 3; i <= 98; i++)
{
c = a + b;
printf("%lu", c);

if (i != 98)
{
printf(", ");
}
a = b;
b = c;
}

printf("\n");

return (0);
}
