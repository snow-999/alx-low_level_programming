#include "main.h"
#include <stdlib.h>
/**
 * array_range -make array
 * @min: small num
 * @max: big number
 * Return: ptr
*/
int *array_range(int min, int max)
{
	int i, size;
	int *ptr;

	if (min > max)
	{
	return (NULL);
	}
	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);
	if (ptr == 0)
	{
	return (NULL);
	}
	for (i = 0; i < size; i++)
	{
	ptr[i] = min++;
	}
	return (ptr);
}
