#include "hash_tables.h"
/**
 * hash_table_print - print hash table
 * @ht: hash table node
 *
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int x;
	hash_node_t *node;
	char f = 0;

	if (ht == NULL || ht->array == NULL)
	{
		return;
	}
	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		node = ht->array[x];
		while (node != NULL)
		{
			if (f == 1)
			{
				printf(", ");
			}
			printf("'%s': '%s'", node->key, node->value);
			f = 1;
			node = node->next;
		}
	}
	printf("}\n");
}
