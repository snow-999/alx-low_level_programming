#include "main.h"
/**
 * _strspn - match the arraies
 * @s: task array
 * @accept: task array
 * Return: i
 *
*/
unsigned int _strspn(char *s, char *accept)
{
	int i, i2;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (i2 = 0; accept[i2] != s[i]; i2++)
		{
			if (accept[i2] == '\0')
			{
				return (i);
			}
		}
	}
	return (i);
}
