#include "main.h"

/**
 * _memset - mest function
 * @s: task string
 * @b: task character
 * @n: task number
 * Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
	s[i] = b;
	}
	return (s);
}
