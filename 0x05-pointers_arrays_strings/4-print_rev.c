#include "main.h"
/**
 * print_rev - entry point
 * @s: Task string
 * Return: null
 *
 *
*/
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	{
	i++;
	}
	while (i--)
	{
	_putchar(s[i] + 0);
	}
	_putchar('\n');
}
