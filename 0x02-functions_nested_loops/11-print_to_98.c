#include "main.h"
#include <stdio.h>
/***/

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
