#include "main.h"
/**
 * _puts - entry point
 * @str: Task string
 * Return: null
*/
void _puts(char *str)
{
	while(*str != '\0')
	{
	_putchar(*str);
	str++;
	}
	_putchar('\n');
}
