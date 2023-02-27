#include "main.h"

/**
 * puts2 - prints every other character of a string,\
 starting with the first character, followed by a new line.
 * @str: pointer
 * Return:
 */
void puts2(char *str)
{

int num1 = 0;
int num2 = 0;
char *p;
int index;
p = str;

while (*p != '\0')
{
p++;
num1++;
}
num2 = num1 - 1;
index = 0;
while (index <= num2)
{
if (index % 2 == 0)
{
_putchar(str[index]);
}
index++;
}
_putchar('\n');

return;
}
