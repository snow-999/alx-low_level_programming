#include "main.h"
/**
 * print_sign - entry point
 *
 * Descriptin: print numbers statment
 *
 * Return: always 0
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	if (n == 0)
	{
		_putchar(0);
		return (0);
	}
	return (0);
}
