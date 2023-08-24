#include "main.h"

/**
 * string_toupper - entry point
 * @str: task string
 * Return: str
 *
*/

char *string_toupper(char *str)
{
	int l;

	for (l = 0; str[l] != '\0'; l++)
	{
		if (str[l] >= 97 && str[l] <= 122)
		{
			str[l] = str[l] - 32;
		}
	}
	return (str);
}
