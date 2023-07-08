#include "hash_tables.h"

/**
 * key_index - acquires index at which a
 * key/value is to be stored in array of a hash table
 * @key: key whose index we want
 * @size: size of the array of the hash table
 * Return: index of key
 * Description: Uses the djb2 algorithm.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
