#include <stdio.h>

/**
 * main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
int i;
int j;
int k;
j = 44;
k = 32;

for (i = 48; i < 58; i++)
{
putchar(i);
if (i != 57)
{
putchar(j);
putchar(k);
}
else
{
;
}
}
putchar('\n');

return (0);
}
