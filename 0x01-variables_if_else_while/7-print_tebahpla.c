#include <stdio.h>
/**
 * main - entery point
 *
 * Description: print alphabet in reverse
 *
 * Return: always 0
*/
int main(void)
{
	char z = 'z';

	while (z >= 'a')
	{
		putchar(z);
		z--;
	}
	putchar('\n');
	return (0);
}
