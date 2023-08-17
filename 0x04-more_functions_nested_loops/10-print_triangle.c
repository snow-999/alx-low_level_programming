#include "main.h"
/**
 * print_triangle - print tirangle
 *
 * @size: Task number
 *
 * Return: null
 *
*/
void print_triangle(int size)
{
	int r, c, p;
	
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		for (r = 1; r <= size; r++)
		{	
			for (p = size - r; p >= 1; p--)
			{
				_putchar(' ');
			}	
				for (c = 1; c <= r; c++)
				{
				_putchar('#');
				}
				_putchar('\n');	
		}
	}
}
