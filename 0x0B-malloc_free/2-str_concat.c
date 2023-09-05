#include "main.h"
#include <stdlib.h>
/**
 * _size - find the length
 * @s: a string
 * Return: size
*/
int _size(char *s)
{
	int size;

	for (size = 0; s[size] != '\0'; size++)
	{
	;
	}
	return (size);
}
/**
 * str_concat - main point
 * @s1: task string
 * @s2: task string
 * Return: ptr
*/
char *str_concat(char *s1, char *s2)
{
	int size1, size2, i;
	char *ptr;

	if (s1 == 0)
	{
	s1 = '\0';
	}
	if (s2 == 0)
	{
	s2 = '\0';
	}
	size1 = _size(s1);
	size2 = _size(s2);
	ptr = malloc(size1 + size2 * sizeof(char) + 1);
	for (i = 0; i <= size1 + size2; i++)
	{
		if (i < size1)
		{
		ptr[i] = s1[i];
		}
		else
		{
		ptr[i] = s2[i - size1];
		}
	}
	ptr[i] = '\0';
	return (ptr);
}
