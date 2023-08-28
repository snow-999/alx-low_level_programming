#include "main.h"
/**
 * _strpbrk - match the sting
 * @s: task srting
 * @accept: task string
 * Return: 0
*/
char *_strpbrk(char *s, char *accept)
{
	int i, i2;
	char *temp;

	i = 0;
	while (s[i] != '\0')
	{
	i2 = 0;
		while (accept[i2] != '\0')
		{
			if (accept[i2] == s[i])
			{
			temp = &s[i];
			return (temp);
			}
		i2++;
		}
	i++;
	}
	return (0);
}
