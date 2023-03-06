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
	unsigned int a;

	a = 0;
	while (a < n)
	{
		if (a == 5)
		{
			dest[a] = src[a + 1];
			a++;
			continue;
		}
		dest[a] = src[a];
		a++;
	}
	return (dest);
}
