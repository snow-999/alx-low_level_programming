#include "main.h"

/**
 * _strchr - remain string function
 * @s: task string
 * @c: task character
 * Return: null
 *
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; i >= '\0'; i++)
	{
		if (s[i] == c)
		{
		return (s + i);
		}
	}
	return (s);
}
