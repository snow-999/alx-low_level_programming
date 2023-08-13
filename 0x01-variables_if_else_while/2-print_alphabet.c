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

	for (ch <= 'z'; ch++;)
	putchar(ch);
	return (0);
}
