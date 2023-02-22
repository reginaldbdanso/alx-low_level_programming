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
unsigned long int i;
unsigned long int a;
unsigned long int b;
unsigned long int a1;
unsigned long int a2;
unsigned long int b1;
unsigned long int b2;
a = 1;
b = 2;

printf("%lu", a);
i = 1;
while (i < 91)
{
printf(", %lu", b);
b += a;
a = b - a;
i++;
}
a1 = a / 1000000000;
a2 = a % 1000000000;
b1 = b / 1000000000;
b2 = b % 1000000000;
i = 92;
while (i < 99)
{
printf(", %lu", b1 + (b2 / 1000000000));
printf("%lu", b2 % 1000000000);
b1 = b1 + a1;
a1 = b1 - a1;
b2 = b2 + a2;
a2 = b2 - a2;
i++;
}
printf("\n");
return (0);
}
