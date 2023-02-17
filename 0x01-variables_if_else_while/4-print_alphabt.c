#include <stdio.h>

/**
 * main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
char lowerc;
lowerc = 'a';

while (lowerc <= 'z')
{
if (lowerc == 'e' || lowerc == 'q')
{
;
}

else
{
putchar(lowerc);
lowerc++;
}
}

putchar('\n');

return (0);
}
