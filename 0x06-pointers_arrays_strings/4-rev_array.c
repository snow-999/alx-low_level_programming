#include "main.h"

/**
 * reverse_array - entry point
 * @a: task array
 * @n: task number
 * Return: null
*/

void reverse_array(int *a, int n)
{
	int i, x, t;

	for (i = 0, x = (n - 1); i < x; i++, x--)
	{
		t = a[i];
		a[i] = a[x];
		a[x] = t;
	}
}
