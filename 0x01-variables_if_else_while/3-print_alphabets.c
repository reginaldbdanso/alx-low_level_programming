#include <stdio.h>

/**
 * main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
char lowerc;
char upperc;

for (lowerc = 'a'; lowerc <= 'z'; lowerc++)
{
putchar(lowerc);
}
for (upperc = 'A'; upperc <= 'Z'; upperc++)
{
putchar(upperc);
}
putchar('\n');

return (0);
}
