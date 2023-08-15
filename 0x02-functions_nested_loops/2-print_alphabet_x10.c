#include "main.h"

/**
 * Print _alphabet_x10 - print alphabet 10 times
 *
 * Description: print alphabet 10 times
 *
*/

void print_alphabet_x10(void)
{
	char l, a;

	for (l = 0; l < 9; l++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
