#include "hash_tables.h"
/**
 * creat_hash_node - creat a new hash table node
 * @key: the key of the hash table
 * @value: the value of the hash table
 * Return: the new hash node
 *
*/
hash_node_t *creat_hash_node(const char *key, const char *value)
{
	hash_node_t *tmp = malloc(sizeof(hash_node_t));

	if (!tmp)
	{
		return (NULL);
	}
	tmp->key = strdup(key);
	if (tmp->key == NULL)
	{
		free(tmp);
		return (NULL);
	}
	tmp->value = strdup(value);
	if (tmp->value == NULL)
	{
		free(tmp->key);
		free(tmp);
		return (NULL);
	}
	tmp->next = NULL;
	return (tmp);
}


/**
 * hash_table_set - set a hash table value and keys
 * @ht: hash table node
 * @key: the keey will be given
 * @value: the value will be set
 * Return: 1 on succful
 *
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int ind;
	hash_node_t *hn, *currnt;
	char *new_vlaue;

	if (ht == NULL || key == NULL || value == NULL ||
			ht->array ==  NULL || ht->size == 0 || strlen(key) == 0)
	{
		return (0);
	}
	ind = key_index((const unsigned char *)key, ht->size);
	currnt = ht->array[ind];
	while (currnt != NULL)
	{
		if (strcmp(currnt->key, key) == 0)
		{
			new_vlaue = strdup(value);
			if (new_vlaue == NULL)
			{
				return (0);
			}
			free(currnt->value);
			currnt->value = new_vlaue;
			return (1);
		}
		currnt = currnt->next;
	}
	hn = creat_hash_node(key, value);
	if (hn == NULL)
	{
		return (0);
	}
	hn->next = ht->array[ind];
	ht->array[ind] = hn;
	return (1);
}
