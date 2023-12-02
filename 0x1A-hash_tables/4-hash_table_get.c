#include "hash_tables.h"
/**
 * hash_table_get - get the value of key
 * @ht: hash table node
 * @key: the key will be given to acces the vlaue
 * Return: the value of key
 *
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int indx;
	hash_node_t *current;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
			key == NULL || strlen(key) == 0)
	{
		return (NULL);
	}
	indx = key_index((const unsigned char *)key, ht->size);
	current = ht->array[indx];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			return (current->value);
		}
		current = current->next;
	}
	return (NULL);
}
