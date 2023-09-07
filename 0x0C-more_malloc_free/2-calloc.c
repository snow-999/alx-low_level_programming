#include "main.h"
#include <stdlib.h>
/**
 * _alloc - make the string = 0
 * @s: string
 * @c: charater
 * @n: size of array
 * Return: str
*/
char *_alloc(char *s, char c, unsigned int n)
{
	char *str = s;

	while (n--)
	{
		*s++ = c;
	}
	return (str);
}
/**
 * _calloc - make 0 string
 * @nmemb: size
 * @size: size
 * Return: ptr
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
	return (NULL);
	}
	ptr = malloc(sizeof(int) * nmemb);
	if (ptr == 0)
	{
	return (NULL);
	}
	_alloc(ptr, 0, sizeof(int) * nmemb);
	return (ptr);
}
