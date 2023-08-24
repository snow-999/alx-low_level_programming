#include "main.h"
/**
 * leet - entry point
 * @c: task string
 * Return: cd
 *
*/
char *leet(char *c)
{
	char *cd = c;
	char letters[] = {'A', 'E', 'O', 'O', 'T', 'L'};
	int numbers[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*c)
	{
		for (i = 0; i < sizeof(letters) / sizeof(char); i++)
		{
			if (*c == letters[i] || *c == letters[i] + 32)
			{
				*c = 48 + numbers[i];
			}
		}
		c++;
	}
	return (cd);
}
