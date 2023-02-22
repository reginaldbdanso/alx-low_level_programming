#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
int a;
int b;
int i;
int c;
a = 1;
b = 2;

printf("%d, %d, ", a, b);

for (i = 3; i <= 50; i++)
{
c = a + b;
printf("%d", c);

if (i != 50)
{
printf(", ");
}
a = b;
b = c;
}

printf("\n");

return (0);
}
