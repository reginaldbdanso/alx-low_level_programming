#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 *Description: FizzBuzz test
 *
 * Return: 0 Always (Success)
 */
int main(void)
{

int i;

for (i = 1; i <= 100; i++)
{
if (i % 15 == 0)
{
printf("FizzBuzz ");
}
else if (i % 5 == 0)
{
printf("Buzz ");
}
else if (i % 3 == 0)
{
printf("Fizz ");
}
else
{
printf("%d ", i);
}
}
printf("\n");
return (0);
}
