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

	while (*haystack)
	{
		i = 0;
		if (haystack[i] == needle[i])
		{
		do 
		{
			if (haystack[i] == '\0')
			{
			return (haystack);
			}
			i++;
		} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}
