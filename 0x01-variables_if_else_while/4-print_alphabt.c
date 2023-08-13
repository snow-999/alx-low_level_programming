#include <stdio.h>
/**
 * main - entry point
 *
 * Description: print alphabet
 *
 * Return: always 0
*/
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		if (a == 'e' || a == 'q')
			a++;
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
