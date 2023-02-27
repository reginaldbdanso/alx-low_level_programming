#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: pointer
 * Return:
 */
void puts_half(char *str)
{
int anum;
int nnum;
int lnum;

lnum = 0;

anum = 0;
while (str[anum] != '\0')
{
lnum++;
anum++;
}
nnum = (lnum / 2);

if ((lnum % 2) == 1)
{
nnum = ((lnum + 1) / 2);
}

anum = nnum;
while (str[anum] != '\0')
{
_putchar(str[anum]);
anum++;
}
_putchar('\n');
return;

}
