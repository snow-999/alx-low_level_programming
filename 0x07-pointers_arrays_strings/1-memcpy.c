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
	char temp;

	for (i = 0; n > 0; i++, n--)
	{
	dest[i] = src[i];
	dest[i] = temp;
	temp = src[i];
	}
	return (dest);
}
