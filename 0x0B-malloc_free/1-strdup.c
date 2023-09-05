#include "main.h"
#include <stdlib.h>
/**
 * _strdup - copy vakue from str to ptr
 * @str: task array
 * Return: ptr
*/
char *_strdup(char *str)
{
	int size, size2;
	char *ptr;

	if (str == 0)
	{
	return (0);
	}
	for (size = 0; str[size] != '\0'; size++)
	{
	;
	}
	ptr = malloc(size * sizeof(*str) + 1);
	if (ptr == 0)
	{
	return (0);
	}
	else
	{
	for (size2 = 0; size2 < size; size2++)
	{
	ptr[size2] = str[size2];
	}
	}
	return (ptr);
}
