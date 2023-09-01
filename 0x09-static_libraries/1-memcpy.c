#include "main.h"

/**
 * _memcpy - mescpy funcion
 * @dest: task string
 * @src: task string
 * @n: task number
 * Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	dest[i] = src[i];
	}
	return (dest);
}
