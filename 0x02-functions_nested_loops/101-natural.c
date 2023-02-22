#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - computes and prints the sum of all\
 the multiples of 3 or 5 below 1024 (excluded)
 *
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
int n;
int num3;
int num5;
int sum;
n = 0;

while (n < 1024)
{
if (n % 3 == 0)
{
num3 = num3 + n;
}
else if (n % 5 == 0)
{
num5 = num5 + n;
}
else
{
;
}
n++;
}
sum = num3 + num5;
printf("%d\n", sum);

return (0);
}
