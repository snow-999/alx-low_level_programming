#include "main.h"
/**
 * Jack_bauer - entery point
 *
 * Description: print time
*/
void jack_bauer(void)
{
	int hr, min;

	for (hr = 0; hr <= 23; hr++)
	{
	for (min = 0; min <= 59; min++)
		{
		_putchar(hr / 10 + '0');
		_putchar(hr % 10 + '0');
		_putchar(':');
		_putchar(min / 10 + '0');
		_putchar(min % 10 + '0');
		}
	}
}
