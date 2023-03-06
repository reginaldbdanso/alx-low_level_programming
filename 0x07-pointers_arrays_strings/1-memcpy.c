#include "main.h"

/**
 *_memcpy - copies memory area
 *@dest: destination pointer
 *@src: source pointer
 *@n: number of bytes
 *
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int j = n;

	for (i = 0; i < j; i++)
	{
		dest[i] = src[i];
		j--;
	}
	return (dest);
}
