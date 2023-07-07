#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: the hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int h = 0;
	hash_node_t *node;

	while (h < ht->size)
	{
		while (ht->array[h] != NULL)
		{
			node = ht->array[h]->next;
			free(ht->array[h]->key);
			free(ht->array[h]->value);
			free(ht->array[h]);
			ht->array[h] = node;
		}
		h++;
	}
	free(ht->array);
	free(ht);
}
