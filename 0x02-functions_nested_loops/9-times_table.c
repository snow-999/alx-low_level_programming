#include "main.h"
/**
 * times_table - entry point
 *
 * Description: print numbers
*/

void times_table(void)
{
	int l, n, n_2;

	for (l = 0; l <= 9; l++)
	{
		_putchar(48);
		for (n = 0; n <= 9; n++)
		{
			_putchar(',');
			_putchar(' ');
			n_2 = l * n;
			if (n_2 <= 9)
			{
				_putchar(' ');
			} else
				{
					_putchar((n_2 / 10 + 48));
					_putchar((n_2 % 10 + 48));
				}
		}
		_putchar('\n');
	}
}
