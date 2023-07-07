#include "hash_tables.h"

/**
 * hash_table_print - prints key/value pairs in hash table array order.
 * @ht: the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int b, count = 0;
	hash_node_t *node;

	if (ht == NULL)
		return;
	printf("{");
	for (b = 0; b < ht->size; b++)
	{
		if (ht->array[b] != NULL)
		{
			node = ht->array[b];
			while (node != NULL)
			{
				if (count > 0)
					printf(", ");
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				count++;
			}
		}
	}
	printf("}\n");
}
