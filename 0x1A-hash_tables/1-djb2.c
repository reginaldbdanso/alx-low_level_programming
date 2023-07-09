#include "hash_tables.h"

/**
 * hash_djb2 - function implementing the djb2 algorithm.
 * @str: string used to get hash value
 * Return: hash value
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int i;
	int c;

	i = 5381;
	while ((c = *str++))
	{
		/* i * 33 + c */
		i = ((i << 5) + i) + c;
	}
	return (i);
}
