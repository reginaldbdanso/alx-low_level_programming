#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the previous allocated memory
 * @old_size: old size
 * @new_size: new size
 * Return: pointer to new allocated space in memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	void *newptr;
	unsigned int copy_size;

	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		newptr = malloc(new_size);
		if (newptr == NULL)
			return (NULL);
		return (newptr);
	}

	if (new_size > old_size)
	{
		newptr = malloc(new_size);
		if (newptr == NULL)
			return (NULL);

		if (old_size < new_size)
		{
			copy_size = old_size;
		}
		else
			copy_size = new_size;

		_memcpy(newptr, ptr, copy_size);
		free(ptr);

	}
	return (newptr);
}


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
