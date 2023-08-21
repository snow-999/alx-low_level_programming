#include "main.h"
/**
 * swap_int - swap numbers
 * @a: Task number
 * @b: Task number
 * Return: null
*/
void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
