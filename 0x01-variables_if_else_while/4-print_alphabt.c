#include <stdio.h>
/*
 * main - Entry point
 *
 * Description: Write a program that prints the alphabet in lowercase
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
