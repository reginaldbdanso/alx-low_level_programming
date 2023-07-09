#include "hash_tables.h"
/**
 * hash_table_delete - clears a hash table
 * @ht: pointer to the hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *point1;
	hash_node_t *point2;
	unsigned long int i;

	if (ht != NULL)

	for (i = 0; i < ht->size; i++)
	{
		point1 = ht->array[i];
		while (point1 != NULL)
		{
			point2 = point1->next;
			free(point1->key);
			free(point1->value);
			free(point1);
			point1 = point2;
		}
	}
	free(ht->array);
	free(ht);
}
