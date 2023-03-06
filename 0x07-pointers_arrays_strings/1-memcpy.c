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

	i = 0;
	while (i < j)
	{
	XSXC	dest[i] = src[i];
		n--;
		i++;
	}
	return (dest);
}
