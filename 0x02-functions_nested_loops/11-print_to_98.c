#include "main.h"
/**
 * print_to_98 - Print number
 * @n: task number
 *
*/
void print_to_98(int n)
{
	int count;

	if (n > 98)
	{
		for (count = n; count > 98; count--)
		{
		printf("%d, ", count);
		}
	}
	if (n == 0)
	{
		printf("%d", n);
		printf("\n");
	}
	if (n < 98)
	{
		for (count = n; count < 98; count++)
		{
			printf("%d, ", count);
		}
	}
	if (n == 0)
	{
	printf("%d", n);
	printf("\n");
	}
}
