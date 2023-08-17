#include "main.h"
/**
 * print_square - print square
 *
 * @size: The size of the sqaure
 *
 * Return: null
 *
*/
void print_square(int size)
{
	int r, c;

	for (r = 0; r < size; r++)
	{
		for (c = 0; c < size; c++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
