#include "main.h"
/**
 * Print_last_digit - entry point
 *
 * @n: task number
 *
 * Return: lastdigit
*/
int print_last_digit(int n)
{
	int digit;

	if (n < 0)
	{
		digit = -1 * (n % 10);

	} else
	{
		digit = n % 10;
	}
	_putchar(digit + '0');
	return (digit);
}
