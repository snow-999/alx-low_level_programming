#include <stdio.h>
/**
 * main - entry point
 *
 * Description: print the alphabet
 *
 * Return: always 0
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}	
	return (0);
}
