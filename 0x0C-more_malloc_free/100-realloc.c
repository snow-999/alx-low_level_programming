#include "main.h"
#include <stdlib.h>
/**
 * _realloc - realloc an array
 * @ptr: string
 * @old_size: the size
 * @new_size: new size of array
 * Return: str
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *str;

	if (new_size == 0 && ptr != NULL)
	{
	free(ptr);
	return (NULL);
	}
	if (new_size == old_size)
	{
	return (ptr);
	}
	if (ptr == NULL)
	{
	str = malloc(new_size);
		if (str == NULL)
		{
		return (NULL);
		}
	return (str);
	}
	if (new_size > old_size)
	{
	str = malloc(new_size);
		if (str == NULL)
		{
		return (NULL);
		}
		for (i = 0; i < old_size && i < new_size; i++)
		{
			*((char *)str + i) = *((char *)ptr + i);
		}
	free(ptr);
	}
	return (str);
}
