#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer
 * Return:
 */
void rev_string(char *s)
{

char p = s[0];
int mcursor = 0;
int i;

while (s[mcursor] != '\0')
mcursor++;
for (i = 0; i < mcursor; i++)
{
mcursor--;
p = s[i];
s[i] = s[mcursor];
s[mcursor] = p;
}


return;
}
