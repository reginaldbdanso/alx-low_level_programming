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
unsigned long long int g;
unsigned long long int h;
int i;
unsigned long long int j;
g = 1;
h = 2;

printf("%d, %d, ", g, h);

for (i = 3; i <= 50; i++)
{
j = g + h;
printf("%d", j);

if (i != 50)
{
printf(", ");
}
g = h;
h = j;
}

printf("\n");

return (0);
}
