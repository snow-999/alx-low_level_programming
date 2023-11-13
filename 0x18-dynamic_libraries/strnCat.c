#include "main.h"

/**
 * *_strncat - entry point
 * @dest: string
 * @src: string
 * @n: task number
 * Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int s, x;

	s = 0;
	while (dest[s])
	{
	s++;
	}
	for (x = 0; x < n && src[x] != '\0'; x++)
	{
		dest[s + x] = src[x];
	}
	dest[s + x] = '\0';
	return (dest);
}
