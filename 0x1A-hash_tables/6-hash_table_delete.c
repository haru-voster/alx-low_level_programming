#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: the hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int b = 0;
	hash_node_t *node;

	while (b < ht->size)
	{
		while (ht->array[b] != NULL)
		{
			node = ht->array[b]->next;
			free(ht->array[b]->key);
			free(ht->array[b]->value);
			free(ht->array[b]);
			ht->array[b] = node;
		}
		b++;
	}
	free(ht->array);
	free(ht);
}
