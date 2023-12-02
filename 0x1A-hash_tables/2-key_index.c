#include "hash_tables.h"
/**
 * key_index - indexing the key
 * @key: the key will be accese at
 * @size: size of hash node
 * Return: key
 *
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
