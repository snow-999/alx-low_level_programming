#include "main.h"

/**
 * *_strcat - entry point
 * @dest: string
 * @src: string
 * Return: dest
 *
*/
char *_strcat(char *dest, char *src)
{
	int s, s1;

	s = 0;
	while (dest[s])
	{
	s++;
	}
	for (s1 = 0; src[s1]; s1++)
	{
	dest[s] = src[s1];
	s++;
	}
	return (dest);
}
