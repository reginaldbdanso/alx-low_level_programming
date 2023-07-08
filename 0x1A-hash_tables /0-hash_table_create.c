#include "hash_tables.h"

/**
 * hash_table_create - A function that creates a hash table
 * @size: the size of the array
 * Return: NULL if an error is encountered else
 * a pointer to the new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *my_hash_table;
	unsigned long int i;

/* hash table memory allocation */
my_hash_table = malloc(sizeof(hash_table_t));

/* return NULL if memory allocation fails */
if (my_hash_table == NULL)
	return (NULL);

/* set hash table size */
my_hash_table->size = size;

/*allocate memory for hash_node_t pointers*/
my_hash_table->array = malloc(sizeof(hash_node_t *) * size);

/* return NULL if mem allocation fails */
if (my_hash_table->array == NULL)
	return (NULL);

    /* initialize each element of the array to NULL */
	i = 0;
	while(i < size)
	{
		my_hash_table->array[i] = NULL;
		i++;
	}
	return (my_hash_table);
}
