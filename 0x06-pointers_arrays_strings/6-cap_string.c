#include "main.h"
#include <stdio.h>
/**
 * cap_string - entry point
 * @str: task string
 * Return: str
 *
*/
int islower(int c)
{
	return (c >= 97 && c <= 122);
}
int isdelimiter(char c)
{
	int i;
	char d[] = " \t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
	{
		if (c == d[i])
		{
		return (1);
		}
	}
	return (0);
}
char *cap_string(char *s)
{
	char *ptr = s;
	int fd = 1;

	while (*s)
	{
		if (isdelimiter(*s))
		{
		fd = 1;
		}
		else if (islower(*s) && fd)
		{
			*s -= 32;
			fd = 0;
		}
		else
		{
		fd = 0;
		}
	}
		s++;
		return (ptr);
}
