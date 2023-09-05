#include "main.h"
#include <stdlib.h>
/**
 * create_array - create an array countne a value
 * @size: size of aarray
 * @c: array value
 * Return: ptr
*/
char *create_array(unsigned int size, char c)
{
	char *ptr = malloc(size);

	if (size == 0 || ptr == 0)
	{
	return (0);
	}
	while (size--)
	{
	ptr[size] = c;
	}
	return (ptr);
}
