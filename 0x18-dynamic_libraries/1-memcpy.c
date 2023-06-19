#include "main.h"
/**
 *_memcpy - copies memory area
 *@dest: destination memory area
 *@src: source memory area
 *@n: number of bytes
 *
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int counter = 0;
	int i = n;

	for (; counter < i; counter++)
	{
		dest[counter] = src[counter];
	}
	return (dest);
}
