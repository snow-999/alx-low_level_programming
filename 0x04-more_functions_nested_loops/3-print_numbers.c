#include "main.h"
/**
 * print_numbers - print number
 *
 * Description: print numbers
 *
 * Return: null
 *
*/
void print_numbers(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		_putchar(n + 48);
	}
	_putchar('\n');
}
