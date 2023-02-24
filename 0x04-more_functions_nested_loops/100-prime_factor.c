#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * main - Entry point
 *
 *Description: Prime factors
 *
 * Return: 0 Always (Success)
 */
int main(void)
{

long int a;
long int largest;
long int i;

a = 612852475143;
largest = -1;

while (a % 2 == 0)
{
largest = 2;
a = a / 2;
}

for (i = 3; i <= sqrt(a); i = i + 2)
{
while (a % i == 0)
{
largest = i;
a = a / i;
}
}

if (a > 2)
largest = a;

printf("%ld\n", largest);

return (0);

}
