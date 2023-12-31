#include "hash_tables.h"
/**
 * hash_table_delete - delet a hash node
 * @ht: hash table node
 *
 *
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int x;
	hash_node_t *node;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
	{
		return;
	}
	for (x = 0; x < ht->size; x++)
	{
		while (ht->array[x] != NULL)
		{
			node = ht->array[x]->next;
			free(ht->array[x]->key);
			free(ht->array[x]->value);
			free(ht->array[x]);
			ht->array[x] = node;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
