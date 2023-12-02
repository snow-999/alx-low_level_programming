#include "hash_tables.h"
/**
 * hash_table_create - creat a new hash table
 * @size: size of the hash table node
 * Return: the new hash table node
 *
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = malloc(sizeof(hash_table_t));
	unsigned long int x;

	if (ht == NULL)
	{
		return (NULL);
	}
	ht->size = size;
	ht->array = malloc(size * sizeof(hash_table_t *));
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	for (x = 0; x < size; x++)
	{
		ht->array[x] = NULL;
	}
	return (ht);
}
