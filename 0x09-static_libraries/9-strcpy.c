#include "main.h"

/**
 * _strcpy - copies the string pointed to by src, including the terminating\
 null byte (\0), to the buffer pointed to by dest.
 * @dest: destination parameter
 * @src: source parameter
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
int a;
int b;
a = 0;

while (*(src + a) != '\0')
{
a++;
}
for (b = 0 ; b < a ; b++)
{
dest[b] = src[b];
}
dest[a] = '\0';
return (dest);
}
