#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer
 * Return:
 */
void rev_string(char *s)
{
char *p;
int mcursor;
 char c[];
p = s;
mcursor = 0;

while (*p != '\0')
{
  
mcursor++;
p++;
}
p--;

while (mcursor > 0)
{
_putchar(*p);
mcursor--;
p--;
}
_putchar('\n');

return;
}
