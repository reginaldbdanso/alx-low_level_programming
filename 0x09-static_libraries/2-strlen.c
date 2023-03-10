#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer
 * Return: result.
 */
int _strlen(char *s)
{
int result;
result = 0;
while (*s != '\0')
{
s++;
result++;
}
return (result);
}
