#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 *
 * Description: print fizz buzz
 *
 * Return: always 0
*/
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && !(n % 5 == 0))
		{
		printf("Fizz");
		}
		else
			if (n % 5 == 0 && !(n % 3 == 0))
		{
			printf("Buzz");
		} else if (n % 5 == 0 && n % 3 == 0)
		{
			printf("FizzBuzz");
		} else
		{
		printf("%d", n);
		}
		if (n != 100)
		{
		printf(" ");
		}
		if (n == 100)
		{
		printf("\n");
		}
	}
	return (0);
}
