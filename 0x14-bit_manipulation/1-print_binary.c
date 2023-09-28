#include "main.h"
/**
 * print_binary - print_binary
 * @n: numbers
 *
 *
*/
void print_binary(unsigned long int n)
{
	int bite = sizeof(n) * 8, p = 0;

	while (bite != 0)
	{
		if (n & 1l << --bite)
		{
			_putchar('1');
			p++;
		}
		else if (p != 0)
		{
		_putchar('0');
		}
	}
	if (p == 0)
	{
	_putchar('0');
	}
}
