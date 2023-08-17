#include "main.h"
/**
 * print_diagonal - print \
 *
 * @n: Task number
 *
 * Return: null
 *
*/
void print_diagonal(int n)
{
	int r, p;

	if (n <= 0)
	{
		_putchar('\n');
	}
		for (r = 0; r < n; r++)
		{
			for (p = 0; p < r; p++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}

}
