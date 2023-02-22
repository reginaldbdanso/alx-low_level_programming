#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the sum of Fibonacci numbers\
 less than 4000000 and even valued.
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
long int a;
long int b;
long int c;
long int sum;
a = 0;
b = 1;
c = 0;

while (c < 4000000)
{
c = a + b;
if (c % 2 == 0)
{
sum += c;
}
else
{
;
}
a = b;
b = c;
}
printf("%ld", sum);
printf("\n");

return (0);
}
