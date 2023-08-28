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
	int i;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (needle[i] == haystack[i])
		{
		return (needle);
		}
	}
	return ('\0');
}
