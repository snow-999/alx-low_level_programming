#include "main.h"

/**
 * _strstr - matching string
 * @haystack: task string
 * @needle: task string
 * Return: 0
 *
*/

char *_strstr(char *haystack, char *needle)
{
	int i, x;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (x = 0; needle[x] != haystack[i]; x++)
		{
		;
		}
		if (needle[x] == haystack[i])
		{
		return (needle);
		}
	}
	return ('\0');
}
