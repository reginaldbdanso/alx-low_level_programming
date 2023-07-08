#include "hash_tables.h"

/**
 * hash_table_print - prints out a hash table
 * @ht: pointer to hash table.
 * Return:
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	int cflag;
	unsigned long int i;

	if (ht == NULL)
		return;
	cflag = 0;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (current != NULL)
		{
			if (cflag == 0)
				cflag = 1;
			else
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			current = current->next;
		}
	}
	printf("}\n");
}
