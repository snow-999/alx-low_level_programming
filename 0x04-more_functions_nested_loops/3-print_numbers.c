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

	for (n = 0; n <= 9; n++)
	{
		_putchar(n + 48);
	}
	_putchar('\n');
}
