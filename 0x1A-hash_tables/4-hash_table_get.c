#include "hash_tables.h"

/**
 * hash_table_get - retrieve value of a key in a hash table
 * @ht: hash table being searched
 * @key: key being sought
 * Return: returns the value of the element,
 * or NULL if key was not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

    /* return NULL if hash table or key is invalid */
	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

    /* compute the index using a key_index function */
	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL); /*return NULL if the index is out of range*/

	/*get hash node at the index*/
	node = ht->array[index];
	/* traverse linked list until the key is found or the end is reached */
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	if (node == NULL)
	return (NULL);

	else
	return (node->value);
}
