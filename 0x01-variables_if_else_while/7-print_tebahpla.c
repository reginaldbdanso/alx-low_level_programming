#include <stdio.h>

/**
 * main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
char rlowerc;

for (rlowerc = 'z'; rlowerc >= 'a'; rlowerc--)
{
putchar(rlowerc);
}
putchar('\n');
return (0);
}
