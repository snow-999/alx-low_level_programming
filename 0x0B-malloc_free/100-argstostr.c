#include "main.h"
#include <stdlib.h>
/**
 * _size - find the size of a string
 * @c: string
 * Return: size
*/
int _size(char *c)
{
	int size = 0;

	for (; c[size] != '\0'; size++)
	{
	;
	}
	return (size);
}

/**
 * argstostr - print arguments
 * @ac: argument numer
 * @av: argument string
 * Return: ptr
*/
char *argstostr(int ac, char **av)
{
	int i, k, al, l;
	char *ptr;

	if (ac == 0 || av == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < ac; i++, al++)
	{
	al += _size(av[i]);
	}
	ptr = malloc(sizeof(char) * al + 1);
	if (ptr == 0)
	{
	return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
	for (k = 0; av[i][k] != '\0'; k++, l++)
	{
	ptr[l] = av[i][k];
	}
	ptr[l] = '\n';
	l++;
	}
	ptr[l] = '\0';
	return (ptr);
}
