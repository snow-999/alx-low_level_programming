#include "main.h"
/**
 * print_sign - entry point
 *
 * @n: The number to be checked
 *
 * Return: always 0
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
		if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	return (0);
}
